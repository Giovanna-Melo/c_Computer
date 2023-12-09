
/////////////////////////////////MODULO FUNC///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "op_modulo_func.h"
#include "op_modulo_equipes.h"
#include "utilidades.h"

void modulo_func(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                             MENU FUNCIONARIOS                            {}\n");
		op3 = padrao_crud();  //ja declarado em op_modulo_cli
		switch(op3) 
        {
			case '1': 	
            cadastro_func();
            break;

			case '2': 	
            exibe_func();
            break;

			case '3': 	
            atualiza_func();
            break;

			case '4': 	
            deleta_func();
            break;
        } 		
	} while (op3 != '0');
}

char menu_funcionarios(void)
{
    char op2;
    char op2_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU FUNCIONARIOS                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. FUNCIONARIOS                             {}\n");
    printf("{}                              2. EQUIPES                                  {}\n");
    printf("{}                              3. ZERAR CONTADORES                         {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op2_list, 11, stdin);
    if (strlen(op2_list) == 2) {
        op2 = op2_list[0];
    } else {
        op2 = 'a';
    }
    return op2;
}

//FUNCOES EM DESENVOLVIMENTO
void exibe_cadastro_func(const Funcionario* func)
{
    if ((func == NULL) || (strcmp(func->status, "inativo")==0)) {
        printf("\n Funcionario Inexistente \n");
    } else {
        printf("\n Funcionario Cadastrado  \n");
        printf("\nNome: %s\n", func->nome);
        printf("Contador: %d\n", func->count);
        printf("CPF: %s\n", func->cpf);
        printf("Email: %s\n", func->email);
        printf("Telefone: %s\n", func->telefone);
        printf("Endereco: %s\n", func->endereco);
        printf("Profissao: %s\n", func->profissao);
        printf("Salario: %s\n", func->salario);
        printf("Status: %s\n", func->status);
    }
}

void exibe_cadastro_func_tabela(const Funcionario* func)
{
    if ((func == NULL) || (strcmp(func->status, "inativo")==0)) {
        printf("\n Funcionario Inexistente \n");
    } else {
        char  nome_i [52];
        int tam_n;
        tam_n  =  strlen (func->nome);
        strncpy (nome_i, func->nome, tam_n);
        for (int i = 0; i < tam_n; i++){
            if (nome_i[i]=='\n'){
                nome_i[i]='\0';
            }
        }

        char  cpf_i [13];
        int tam_c;
        tam_c  =  strlen (func->cpf);
        strncpy (cpf_i , func->cpf, tam_c);
        for (int i = 0; i < tam_c; i++){
            if (cpf_i[i]=='\n'){
                cpf_i[i]='\0';
            }
        }

        char  profissao_i [52];
        int tam_p;
        tam_p  =  strlen (func->profissao);
        strncpy (profissao_i , func->profissao, tam_p);
        for (int i = 0; i < tam_p; i++){
            if (profissao_i[i]=='\n'){
                profissao_i[i]='\0';
            }
        }

        char  telefone_i [13];
        int tam_t;
        tam_t  =  strlen (func->telefone);
        strncpy (telefone_i , func->telefone, tam_t);
        for (int i = 0; i < tam_t; i++){
            if (telefone_i[i]=='\n'){
                telefone_i[i]='\0';
            }
        }
        printf ( "%-52s || %-13s || %-52s ||%-13s\n" , nome_i, cpf_i, profissao_i, telefone_i);
        printf("------------------------------------------------------------------------------------------------------------------------------------------\n\n");
  }
}

void grava_func(Funcionario* func)
{
    FILE* fp;
    fp = fopen("funcionarios.dat", "ab");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    fwrite(func, sizeof(Funcionario), 1, fp);
    fclose(fp);
}

void atualizando_func(Funcionario* func)
{
    FILE* fp;
    Funcionario* arqv_func;
    char email[258];
    char telefone[13];
    char endereco[102];
    char profissao[52];
    char salario[10];
    char resposta_email[5];
    char resposta_tel[5];
    char resposta_ender[5];
    char resposta_prof[5];
    char resposta_sal[5];
    arqv_func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_func, sizeof(Funcionario), 1, fp) == 1)
        {
            if (strcmp(arqv_func->cpf, func->cpf)==0)
            {
                fseek(fp, -sizeof(Funcionario), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    printf("\nDeseja atualizar o e-mail (sim/nao)?");
    fgets(resposta_email, 5, stdin);
    if (strcmp(resposta_email, "sim\n")==0)
    {
        le_email(email);
        strncpy(func->email, email, sizeof(func->email));
    }
    printf("\nDeseja atualizar o telefone (sim/nao)?");
    fgets(resposta_tel, 5, stdin);
    if (strcmp(resposta_tel, "sim\n")==0)
    {
        le_telefone(telefone);
        strncpy(func->telefone, telefone, sizeof(func->telefone));
    }
    printf("\nDeseja atualizar o endereco (sim/nao)?");
    fgets(resposta_ender, 5, stdin);
    if (strcmp(resposta_ender, "sim\n")==0)
    {
        le_endereco(endereco);
        strncpy(func->endereco, endereco, sizeof(func->endereco));
    }
    printf("\nDeseja atualizar a profissao (sim/nao)?");
    fgets(resposta_prof, 5, stdin);
    if (strcmp(resposta_prof, "sim\n")==0)
    {
        le_profissao(profissao);
        strncpy(func->profissao, profissao, sizeof(func->profissao));
    }
    printf("\nDeseja atualizar o salario (sim/nao)?");
    fgets(resposta_sal, 5, stdin);
    if (strcmp(resposta_sal, "sim\n")==0)
    {
        le_salario(salario);
        strncpy(func->salario, salario, sizeof(func->salario));
    }
    fwrite(func, sizeof(Funcionario), 1, fp);
    fclose(fp);
    free(arqv_func);
}

void atualizando_func_count(Funcionario* func)
{
    FILE* fp;
    Funcionario* arqv_func;
    int count;
    arqv_func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_func, sizeof(Funcionario), 1, fp) == 1)
        {
            if (strcmp(arqv_func->cpf, func->cpf)==0)
            {
                fseek(fp, -sizeof(Funcionario), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    int count_arq = func->count;
    count_arq+=1;
    count = count_arq;
    func->count=count;
    fwrite(func, sizeof(Funcionario), 1, fp);
    fclose(fp);
    free(arqv_func);
}

void deletando_func (Funcionario* func)
{
    FILE* fp;
    Funcionario* arq_func;
    char status[9] = "inativo";
    int achou = 0;
    if (func == NULL) 
    {
        printf("Ops! O funcionario informado nao existe!\n");
    } else {
        arq_func = (Funcionario*) malloc(sizeof(Funcionario));
        fp = fopen("funcionarios.dat", "r+b");
        if (fp == NULL) 
        {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
        } 
        while(fread(arq_func, sizeof(Funcionario), 1, fp)==1)
        {
            if ((strcmp(arq_func->cpf, func->cpf)==0) && (strcmp(arq_func->status, "inativo")!=0))
            {
                strncpy(arq_func->status, status, sizeof(arq_func->status));
                fseek(fp, -1*sizeof(Funcionario), SEEK_CUR);
                fwrite(arq_func, sizeof(Funcionario), 1, fp);
                achou = 1;
                printf("\nFuncionario excluido com sucesso!!!\n");
                break;
            } //while alterado por chatgpt
        }
        if (!achou) 
        {
            printf("\nFuncionario nao encontrado!\n");
        }
        fclose(fp);
        free(arq_func);
  }
}

void cadastro_func(void)
{
    //ler os dados do funcionario
    Funcionario *func = tela_cadastro_func();
    exibe_cadastro_func(func);
    printf("Tecle ENTER para continuar");
    getchar();
    grava_func(func);
    //liberar o espaco de memoria da estrutura 
    free(func);
}

void exibe_func(void)
{
    Funcionario *func = tela_exibe_func();
    exibe_cadastro_func(func);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(func);
}

void atualiza_func(void)
{
    Funcionario *func = tela_atualiza_func();
    atualizando_func(func);
    exibe_cadastro_func(func);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(func);
}

void deleta_func(void)
{
    Funcionario *func = tela_deleta_func();
    deletando_func(func);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(func);
}

//TELAS CRUD
Funcionario* tela_cadastro_func(void)
{
    char nome[52]; //DECLARADO EM OP_MODULO_CLI
    char cpf[13];
    char email[258]; //DECLARADO EM OP_MODULO_CLI
    char telefone[13]; //DECLARADO EM OP_MODULO_CLI
    char endereco[102]; //DECLARADO EM OP_MODULO_CLI
    char profissao[52];
    char salario[10];
    char status[9] = "ativo";

    Funcionario *func = (Funcionario*) malloc(sizeof(Funcionario));

    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR FUNCIONARIO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    func->count = 0;
    le_nome(nome);
    strncpy(func->nome, nome, sizeof(func->nome));
    le_cpf(cpf);
    strncpy(func->cpf, cpf, sizeof(func->cpf));
    le_email(email);
    strncpy(func->email, email, sizeof(func->email));
    le_telefone(telefone);
    strncpy(func->telefone, telefone, sizeof(func->telefone));
    le_endereco(endereco);
    strncpy(func->endereco, endereco, sizeof(func->endereco));
    le_profissao(profissao);
    strncpy(func->profissao, profissao, sizeof(func->profissao));
    le_salario(salario);
    strncpy(func->salario, salario, sizeof(func->salario));
    strncpy(func->status, status, sizeof(func->status));
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    return func;
}

void le_cpf(char* cpf)
{
    printf("{}                       CPF(somente numeros):                              {}\n");
    fgets(cpf, 13, stdin);
    while (!valida_cpf(cpf)||busca_chave_func(cpf)) //em utilidades
    {
        if (busca_chave_func(cpf))
        {
        printf("{}                      Funcionario ja cadastrado                           {}\n");
        }
        printf("{}                       Informe o CPF novamente:                           {}\n");
        fgets(cpf, 13, stdin);
    } 
}

void le_profissao(char* profissao) 
{
    printf("{}                       Profissao:                                         {}\n");
    fgets(profissao, 52, stdin);
    while (!valida_nome(profissao)) //em utilidades
    {
        printf("{}                       Informe a profissao novamente:                     {}\n");
        fgets(profissao, 52, stdin);
    } 
}

void le_salario(char* salario) 
{
    printf("{}                       Salario:                                           {}\n");
    fgets(salario, 10, stdin);
    while (!valida_salario(salario)) //em utilidades
    {
        printf("{}                       Informe o salario novamente:                       {}\n");
        fgets(salario, 10, stdin);
    } 
}

Funcionario* tela_exibe_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR FUNCIONARIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Funcionario* func = busca_func();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return func;
}

Funcionario* busca_func(void)
{
    FILE* fp;
    Funcionario* func;
    char cpf[13];
    le_chave_func(cpf);
    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(func, sizeof(Funcionario), 1, fp);
        if ((strcmp(func->cpf, cpf)==0) && (strcmp(func->status, "inativo")!=0)) 
        {
            fclose(fp);
            return func;
        }
    }
    fclose(fp);
    return NULL;
}

int busca_chave_func(char* cpf)
{
    FILE* fp;
    Funcionario* func;
    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(func, sizeof(Funcionario), 1, fp);
        if ((strcmp(func->cpf, cpf)==0) && (strcmp(func->status, "ativo")==0)) 
        {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    free(func);
    return 0;
}

//busca funcionario se for responsavel
Funcionario* busca_resp_func(char* responsavel)
{
    FILE* fp;
    Funcionario* func;
    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(func, sizeof(Funcionario), 1, fp);
        if ((strcmp(func->cpf, responsavel)==0) && (strcmp(func->status, "ativo")==0)) 
        {
            fclose(fp);
            return func;
        }
    }
    fclose(fp);
    return NULL;
}

void lista_all_func(void)
{
    FILE* fp;
    Funcionario* novo_func;
    Funcionario* lista;
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) 
    {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1);
    }
    lista = NULL;
    novo_func = (Funcionario*) malloc(sizeof(Funcionario));
    if (novo_func == NULL) 
    {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1); 
    }
    char nome [52] = "NOME";
    char cpf [13] = "CPF";
    char profissao [52] = "PROFISSAO";
    char telefone [52] = "TELEFONE";
    printf ( "%-52s || %-13s || %-52s ||%-13s\n" , nome, cpf, profissao, telefone);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    while(fread(novo_func, sizeof(Funcionario), 1, fp) == 1) 
    {
        novo_func->prox = NULL;
        if ((lista == NULL) || (strcmp(novo_func->nome, lista->nome) < 0)) 
        {
            novo_func->prox = lista;
            lista = novo_func;
        } else {
            Funcionario* ant = lista;
            Funcionario* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, novo_func->nome) < 0) 
            {
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = novo_func;
            novo_func->prox = atual;
        }
        novo_func = (Funcionario*)malloc(sizeof(Funcionario));
        if (novo_func == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
    }
    fclose(fp);
    novo_func = lista;
    while(novo_func != NULL) 
    {
        exibe_cadastro_func_tabela(novo_func);
        novo_func = novo_func->prox;
    }
    novo_func = lista;
    while (lista != NULL) 
    {
        lista = lista->prox;
        free(novo_func);
        novo_func = lista;
    }
}

void lista_month_func(void)
{
    FILE* fp;
    Funcionario* func;
    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    int maior_contador_funcionario = comparar_contadores();
    if (maior_contador_funcionario == 0) 
    {
        printf("\nCONTADORES ZERADOS\n");
    } else {
        char nome [52] = "NOME";
        char cpf [13] = "CPF";
        char profissao [52] = "PROFISSAO";
        char telefone [52] = "TELEFONE";
        printf ( "%-52s || %-13s || %-52s ||%-13s\n" , nome, cpf, profissao, telefone);
        printf("------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        while(fread(func, sizeof(Funcionario), 1, fp)) 
        {
            if (func->count==maior_contador_funcionario && (strcmp(func->status, "ativo")==0)) {
                exibe_cadastro_func_tabela(func);
            }
        }
    }
    fclose(fp);
    free(func);
}

int comparar_contadores(void)
{
    FILE* fp;
    Funcionario* func;
    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    int maior_count_func=0;
    while(fread(func, sizeof(Funcionario), 1, fp)) 
    {
        if ((strcmp(func->status, "ativo")==0))
        {
            int count = func->count;
            if (count > maior_count_func) 
            {
                maior_count_func = count;
            }
        }
    }
    fclose(fp);
    free(func);
    return maior_count_func;
}

Funcionario* tela_atualiza_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR FUNCIONARIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Funcionario* func = busca_func();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return func;
}

Funcionario* tela_deleta_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR FUNCIONARIO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Funcionario* func = busca_func();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return func;
}

//OP ZERADOR DE CONTADORES
void z_cont(void) 
{
	char op3;
	do 
    {
		op3 = confirma_zcont();
		switch(op3) 
        {
			case '1': 	
            mostra_zcont();
            break;
        } 		
	} while (op3 != '0');
}

char confirma_zcont(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                ZERAR CONTADORES                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                 1. SIM                                   {}\n");
    printf("{}                                 0. VOLTAR                                {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;
}

//FUNCAO EM DESENVOLVIMENTO
void mostra_zcont(void)
{
    zera_func_count();
    zera_eqp_count();
    tela_mostra_zcont();
}

void zera_func_count(void) 
{
    FILE* fp;
    Funcionario* func;
    fp = fopen("funcionarios.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    func = (Funcionario*) malloc(sizeof(Funcionario));
    while (fread(func, sizeof(Funcionario), 1, fp) == 1) 
    {
        fseek(fp, -sizeof(Funcionario), SEEK_CUR);
        func->count = 0;
        fwrite(func, sizeof(Funcionario), 1, fp);
        //move o ponteiro para o proximo registro
        fseek(fp, 0, SEEK_CUR); //sugerido pelo chatgpt
    }
    fclose(fp);
    free(func);
}

//TELA CONTADORES ZERADOS
void tela_mostra_zcont(void)
{
    system("clear||cls");
    printf("\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                             CONTADORES ZERADOS                           {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}