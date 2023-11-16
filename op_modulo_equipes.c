////////////////////////////////MODULO EQUIPES///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "op_modulo_func.h"
#include "op_modulo_atend.h"
#include "op_modulo_equipes.h"
#include "utilidades.h"

void modulo_equipes(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                               MENU EQUIPES                               {}\n");
		op3 = padrao_crud();  //ja declarado em op_modulo_cli
		switch(op3) 
        {
			case '1': 	
            cadastro_equipe();
            break;
			case '2': 	
            exibe_equipe();
            break;
			case '3': 	
            atualiza_equipe();
            break;
			case '4': 	
            deleta_equipe();
            break;
		} 		
	} while (op3 != '0');
}

//FUNCOES EM DESENVOLVIMENTO
void exibe_cadastro_eqp(const Equipe* eqp)
{
    int qp = eqp->qp;
    if ((eqp == NULL) || (strcmp(eqp->status, "inativo")==0)) {
        printf("\n Equipe Inexistente \n");
    } else {
        printf("\n\nEquipe: %s", eqp->equipe);
        printf("Contador: %d\n\n", eqp->count);
        for (int i = 0; i < qp; i++){
            printf("Nome: %s", eqp->nome[i]);
            printf("CPF: %s\n", eqp->cpf[i]);
        }
        printf("Status: %s\n\n", eqp->status);
    }
}

void exibe_cadastro_eqp_tabela(const Equipe* eqp)
{
    if ((eqp == NULL) || (strcmp(eqp->status, "inativo")==0)) {
        printf("\n Equipe Inexistente \n");
    } else {
        char  equipe_i [ 13 ];
        int tam_e;
        tam_e  =  strlen ( eqp->equipe );
        strncpy ( equipe_i, eqp->equipe, tam_e );
        for (int i = 0; i < tam_e; i++){
            if (equipe_i[i]=='\n'){
                equipe_i[i]='\0';
            }
        }
        printf ( "%-13s || %-12d || %-10d\n" , equipe_i , eqp->qp, eqp->count);
        printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    }
}

void grava_equipe(Equipe* eqp) //.h
{
    FILE* fp;
    fp = fopen("equipes.dat", "ab");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    fwrite(eqp, sizeof(Equipe), 1, fp);
    fclose(fp);
}

void atualizando_equipe(Equipe* eqp) //.h
{
    FILE* fp;
    Equipe* arqv_eqp;
    //char nome[52];
    char cpf[13];
    char resposta_membro[5];
    arqv_eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_eqp, sizeof(Equipe), 1, fp) == 1)
        {
            if (strcmp(arqv_eqp->equipe, eqp->equipe)==0)
            {
                fseek(fp, -sizeof(Equipe), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    int qp = eqp->qp;
    for (int i = 0; i < qp; i++) 
    {
    printf("Nome: %s",eqp->nome[i]);
    printf("Nome: %s",eqp->cpf[i]);
    printf("\nDeseja atualizar o membro (sim/nao)?");
    fgets(resposta_membro, 5, stdin);
        if (strcmp(resposta_membro, "sim\n")==0)
        {
            Funcionario* func = busca_func();
            while(func==NULL)
            {
                printf("Funcionario nao cadastrado\n");
                printf("Informe novamente\n");
                func = busca_func();
            }
            strncpy(cpf, func->cpf, sizeof(cpf));
            strncpy(eqp->nome[i], func->nome, sizeof(eqp->nome[i]));
            free(func);
            strncpy(eqp->cpf[i], cpf, sizeof(eqp->cpf[i]));
        }
    }
    fwrite(eqp, sizeof(Equipe), 1, fp);
    fclose(fp);
    free(arqv_eqp);
}

void atualizando_eqp_count(Equipe* eqp) //.h
{
    FILE* fp;
    Equipe* arqv_eqp;
    int count;
    arqv_eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_eqp, sizeof(Equipe), 1, fp) == 1)
        {
            if (strcmp(arqv_eqp->equipe, eqp->equipe)==0)
            {
                fseek(fp, -sizeof(Funcionario), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    int count_arq = eqp->count;
    count_arq+=1;
    count = count_arq;
    eqp->count=count;
    fwrite(eqp, sizeof(Funcionario), 1, fp);
    fclose(fp);
    free(arqv_eqp);
}

void deletando_equipe (Equipe* eqp) //.h
{
    FILE* fp;
    Equipe* arq_eqp;
    char status[9] = "inativo";
    int achou = 0;
    if (eqp == NULL) 
    {
        printf("Ops! A equipe informada nao existe!\n");
    } else {
        arq_eqp = (Equipe*) malloc(sizeof(Equipe));
        fp = fopen("equipes.dat", "r+b");
        if (fp == NULL) 
        {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
        } 
        while(fread(arq_eqp, sizeof(Equipe), 1, fp)==1)
        {
            if ((strcmp(arq_eqp->equipe, eqp->equipe)==0) && (strcmp(arq_eqp->status, "inativo")!=0))
            {
                strncpy(arq_eqp->status, status, sizeof(arq_eqp->status));
                fseek(fp, -1*sizeof(Equipe), SEEK_CUR);
                fwrite(arq_eqp, sizeof(Equipe), 1, fp);
                achou = 1;
                printf("\nEquipe excluida com sucesso!!!\n");
                break;
            } //while alterado por chatgpt
        }
        if (!achou) 
        {
            printf("\nEquipe nao encontrada!\n");
        }
        fclose(fp);
        free(arq_eqp);
  }
}

void cadastro_equipe(void)
{
    // ler os dados da equipe
    Equipe *eqp = tela_cadastro_equipe();
    exibe_cadastro_eqp(eqp);
    printf("Tecle ENTER para continuar");
    getchar();
    grava_equipe(eqp);
    // liberar o espaço de memória da estrutura 
    free(eqp);
}

void exibe_equipe(void)
{
    Equipe *eqp = tela_exibe_equipe();
    exibe_cadastro_eqp(eqp);
    printf("Tecle ENTER para continuar");
    getchar();
    // liberar o espaço de memória da estrutura 
    free(eqp);
}

void atualiza_equipe(void)
{
    Equipe *eqp = tela_atualiza_equipe();
    exibe_cadastro_eqp(eqp);
    printf("------------------------------------------------------------------------------\n");
    atualizando_equipe(eqp);
    exibe_cadastro_eqp(eqp);
    printf("Tecle ENTER para continuar");
    getchar();
    // liberar o espaço de memória da estrutura 
    free(eqp);
}

void deleta_equipe(void)
{
    Equipe *eqp = tela_deleta_equipe();
    deletando_equipe(eqp);
    printf("Tecle ENTER para continuar");
    getchar();
    // liberar o espaço de memória da estrutura 
    free(eqp);
}

//TELAS CRUD
Equipe* tela_cadastro_equipe(void)
{
    char equipe[13];
    char quant_part[4];
    char qpc[4];
    int qp = 0;
    char nome[52];
    char cpf[13];
    //Há limite de vinte participantes por equipe informar no modulo sobre
    char status[9] = "ativo";

    Equipe *eqp = (Equipe*) malloc(sizeof(Equipe));

    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                CADASTRAR EQUIPE                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_equipe(equipe);
    strncpy(eqp->equipe, equipe, sizeof(eqp->equipe));
    eqp->count = 0;
    le_quant_part(quant_part);
    strncpy(qpc, &quant_part[0], 2);
    sscanf(qpc, "%d", &qp);
    eqp->qp = qp;
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Equipe: %s\n", equipe);
    printf("Quantidade de participantes: %s\n\n", quant_part);
    for (int i = 0; i < qp; i++) 
    {
    le_nome(nome); //JA DECLARADO NO OP_MODULO_CLI
    strncpy(eqp->nome[i], nome, sizeof(eqp->nome[i]));
    Funcionario* func = busca_func();
    while(func==NULL)
    {
        printf("Funcionario nao cadastrado\n");
        printf("Informe novamente\n");
        func = busca_func();
    }
    strncpy(cpf, func->cpf, sizeof(cpf));
    free(func);
    strncpy(eqp->cpf[i], cpf, sizeof(eqp->cpf[i]));
    }
    strncpy(eqp->status, status, sizeof(eqp->status));
    return eqp;
}
// fazer o scanf da quantidade para solicitar o nome e o cpf de tantos func

void le_equipe(char* equipe) 
{
    printf("{}                       Equipe:                                            {}\n");
    fgets(equipe, 13, stdin);
    while (!valida_nome(equipe)||busca_chave_eqp(equipe)) //em utilidades
    {
        if (busca_chave_eqp(equipe))
        {
            printf("{}                          Equipe ja cadastrada                            {}\n");
        }
        printf("{}                       Informe a equipe novamente:                        {}\n");
        fgets(equipe, 13, stdin);
    } 
}

void le_quant_part(char* quant_part) 
{
    printf("{}                       Quantidade de participantes:                       {}\n");
    fgets(quant_part, 4, stdin);
    while (!valida_strnum(quant_part)) //em utilidades
    {
        printf("{}                       Informe a quantidade de participantes novamente:   {}\n");
        fgets(quant_part, 4, stdin);
    } 
}

void le_chave_func(char* cpf)
{
    printf("{}                       CPF(somente numeros):                              {}\n");
    fgets(cpf, 13, stdin);
}

Equipe* tela_exibe_equipe(void) //.h
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 EXIBIR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Equipe* eqp = busca_equipe();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return eqp;
}

Equipe* busca_equipe(void) //.h
{
    FILE* fp;
    Equipe* eqp;
    char equipe[13];
    le_chave_equipe(equipe);
    eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(eqp, sizeof(Equipe), 1, fp);
        if ((strcmp(eqp->equipe, equipe)==0) && (strcmp(eqp->status, "inativo")!=0)) 
        {
            fclose(fp);
            return eqp;
        }
    }
    fclose(fp);
    return NULL;
}

int busca_chave_eqp(char* equipe) //.h
{
    FILE* fp;
    Equipe* eqp;
    eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(eqp, sizeof(Equipe), 1, fp);
        if ((strcmp(eqp->equipe, equipe)==0) && (strcmp(eqp->status, "ativo")==0)) 
        {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    free(eqp);
    return 0;
}

//busca_resp_equipe
Equipe* busca_resp_equipe(char* responsavel) //.h
{
    FILE* fp;
    Equipe* eqp;
    eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(eqp, sizeof(Equipe), 1, fp);
        if ((strcmp(eqp->equipe, responsavel)==0) && (strcmp(eqp->status, "ativo")==0)) 
        {
            fclose(fp);
            return eqp;
        }
    }
    fclose(fp);
    return NULL;
}

void le_chave_equipe(char* equipe)
{
    printf("{}                       Equipe:                                            {}\n");
    fgets(equipe, 13, stdin); 
}

void lista_all_equipes(void) //.h
{
    FILE* fp;
    Equipe* eqp;
    eqp = (Equipe*) malloc(sizeof(Equipe));
    fp = fopen("equipes.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char equipe [13] = "EQUIPE";
    char qp [12] = "QUANTIDADE";
    char count [10] = "CONTADOR";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-13s || %-12s || %-10s\n", equipe, qp, count);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(eqp, sizeof(Equipe), 1, fp)) {
        if (strcmp(eqp->status, "ativo")==0) {
            exibe_cadastro_eqp_tabela(eqp);
        }
    }
    fclose(fp);
    free(eqp);
}

Equipe* tela_atualiza_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               ATUALIZAR EQUIPE                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Equipe* eqp = busca_equipe();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return eqp;
}

/*void le_cpf_atualin(char* cpf, char* equipe)  ORGANIZACAO DE IDEACAO
{
    printf("{}                       CPF (somente numeros):                             {}\n");
    fgets(cpf, 13, stdin);
    while (cpf not in equipe)
    {
        printf("{}                       Informe o CPF novamente:                           {}\n");
        fgets(cpf, 13, stdin);
    } 
}*/

Equipe* tela_deleta_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                DELETAR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Equipe* eqp = busca_equipe();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return eqp;
}