
/////////////////////////////////MODULO ATENDC///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "op_modulo_cli.h"
#include "op_modulo_atend.h"
#include "op_modulo_planos.h"
#include "op_modulo_func.h"
#include "op_modulo_equipes.h"
#include "utilidades.h"

void modulo_atend(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                              MENU ATENDIMENTO                            {}\n");	
		op3 = padrao_crud(); //ja declarado em op_modulo_cli
		switch(op3) 
        {
			case '1': 	
            cadastro_atend();
            break;

			case '2': 	
            exibe_atend();
            break;

			case '3': 	
            atualiza_atend();
            break;

			case '4': 	
            deleta_atend();
            break;
            		} 		
	} while (op3 != '0');
}

char menu_atendimentos(void)
{
    char op2;
    char op2_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU ATENDIMENTOS                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. ATENDIMENTO                              {}\n");
    printf("{}                              2. PLANOS                                   {}\n");
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
void exibe_cadastro_atend(const Atendimento* atend) 
{
    if ((atend == NULL) || (strcmp(atend->status, "inativo")==0)) {
        printf("\n Atendimento Inexistente \n");
    } else {
        printf("\n Atendimento Cadastrado  \n");
        printf("\n\nCodigo de atendimento: %s\n\n", atend->codigo_atend);
        printf("%s\n", atend->data_atend);
        printf("CPF/CNPJ: %s\n", atend->cpf_cnpj);
        printf("Nome do equipamento: %s\n", atend->nome_eqp);
        printf("Marca: %s\n", atend->marca);
        printf("Modelo: %s\n", atend->modelo);
        printf("Numero de serie: %s\n", atend->nserie);
        printf("Observacoes: %s\n", atend->observacoes);
        printf("Data de visita/entrega: %s\n", atend->data);
        printf("Reponsavel: %s\n", atend->responsavel);
        printf("Situacao: %s\n", atend->situacao);
        printf("Ordem: %s\n\n", atend->ordem_s);
        printf("Status: %s\n", atend->status);
    }
}

void exibe_cadastro_atend_tabela(const Atendimento* atend) 
{
    if ((atend == NULL) || (strcmp(atend->status, "inativo")==0)) {
        printf("\n Atendimento Inexistente \n");
    } else {

        char  data_i [12];
        int tam_d;
        tam_d  =  strlen ( atend->data );
        strncpy ( data_i, atend->data, tam_d );
        for (int i = 0; i < tam_d; i++){
            if (data_i[i]=='\n'){
                data_i[i]='\0';
            }
        }

        char  responsavel_i [13];
        int tam_r;
        tam_r  =  strlen ( atend->responsavel );
        strncpy ( responsavel_i , atend->responsavel, tam_r );
        for (int i = 0; i < tam_r; i++){
            if (responsavel_i[i]=='\n'){
                responsavel_i[i]='\0';
            }
        }

        printf ( "%-53s || %-12s || %-13s\n" , atend->codigo_atend, data_i, responsavel_i);
        printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
  }
}

void exibir_atendimentos_eqp(const Atendimento* atend)
{
    if ((atend == NULL) || (strcmp(atend->status, "inativo")==0)) {
        printf("\n Atendimento Inexistente \n");
        printf("-------------------------------------------------------------------\n");
    } else {
        FILE* fpe;
        Equipe* eqp;
        eqp = (Equipe*) malloc(sizeof(Equipe));
        fpe = fopen("equipes.dat", "rb");
        if (fpe == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
        while(fread(eqp, sizeof(Equipe), 1, fpe) == 1) 
        {
            if ((strncmp(eqp->equipe, atend->responsavel, strlen(eqp->equipe))==0) && (strcmp(eqp->status, "inativo")!=0)) 
            {
                FILE* fp;
                Cliente* cli;
                cli = (Cliente*) malloc(sizeof(Cliente));
                fp = fopen("clientes.dat", "rb");
                if (fp == NULL) 
                {
                    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
                    printf("Nao e possivel continuar este programa...\n");
                    exit(1);
                }
                while(fread(cli, sizeof(Cliente), 1, fp) == 1) 
                {
                    if ((strncmp(cli->cpf_cnpj, atend->cpf_cnpj, strlen ( atend->cpf_cnpj ))==0) && (strcmp(cli->status, "inativo")!=0)) 
                    {
                        printf("\n\nCodigo de atendimento: %s\n\n", atend->codigo_atend);
                        printf("%s\n", atend->data_atend);
                        printf("Nome do cliente: %s\n", cli->nome);
                        printf("CPF/CNPJ: %s\n", atend->cpf_cnpj);
                        printf("Nome do equipamento: %s\n", atend->nome_eqp);
                        printf("Marca: %s\n", atend->marca);
                        printf("Modelo: %s\n", atend->modelo);
                        printf("Numero de serie: %s\n", atend->nserie);
                        printf("Observacoes: %s\n", atend->observacoes);
                        printf("Data de visita/entrega: %s\n", atend->data);
                        printf("Reponsavel: %s\n", eqp->equipe);
                        printf("Situacao: %s\n", atend->situacao);
                        printf("Ordem: %s\n\n", atend->ordem_s);
                        printf("Status: %s\n", atend->status);
                        printf("-------------------------------------------------------------------\n");
                    }
                }
                fclose(fp);
                free(cli);
            }
        }
        fclose(fpe);
        free(eqp);
    }
}

void exibir_atendimentos_func(const Atendimento* atend)
{
    if ((atend == NULL) || (strcmp(atend->status, "inativo")==0)) {
        printf("\n Atendimento Inexistente \n");
        printf("-------------------------------------------------------------------\n");
    } else {
        FILE* fpf;
        Funcionario* func;
        func = (Funcionario*) malloc(sizeof(Funcionario));
        fpf = fopen("funcionarios.dat", "rb");
        if (fpf == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
        while(fread(func, sizeof(Funcionario), 1, fpf) == 1) 
        {
            if ((strncmp(func->cpf, atend->responsavel, strlen(func->cpf))==0) && (strcmp(func->status, "inativo")!=0)) 
            {
                FILE* fp;
                Cliente* cli;
                cli = (Cliente*) malloc(sizeof(Cliente));
                fp = fopen("clientes.dat", "rb");
                if (fp == NULL) 
                {
                    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
                    printf("Nao e possivel continuar este programa...\n");
                    exit(1);
                }
                while(fread(cli, sizeof(Cliente), 1, fp) == 1) 
                {
                    if ((strncmp(cli->cpf_cnpj, atend->cpf_cnpj, strlen ( atend->cpf_cnpj ))==0) && (strcmp(cli->status, "inativo")!=0)) 
                    {
                        printf("\n\nCodigo de atendimento: %s\n\n", atend->codigo_atend);
                        printf("%s\n", atend->data_atend);
                        printf("Nome do cliente: %s\n", cli->nome);
                        printf("CPF/CNPJ: %s\n", atend->cpf_cnpj);
                        printf("Nome do equipamento: %s\n", atend->nome_eqp);
                        printf("Marca: %s\n", atend->marca);
                        printf("Modelo: %s\n", atend->modelo);
                        printf("Numero de serie: %s\n", atend->nserie);
                        printf("Observacoes: %s\n", atend->observacoes);
                        printf("Data de visita/entrega: %s\n", atend->data);
                        printf("Reponsavel: %s\n", func->nome);
                        printf("Situacao: %s\n", atend->situacao);
                        printf("Ordem: %s\n\n", atend->ordem_s);
                        printf("Status: %s\n", atend->status);
                        printf("-------------------------------------------------------------------\n");
                    }
                }
                fclose(fp);
                free(cli);
            }
        }
        fclose(fpf);
        free(func);
    }
}

void exibir_atendimentos_cli(const Atendimento* atend)
{
    if ((atend == NULL) || (strcmp(atend->status, "inativo")==0)) {
        printf("\n Atendimento Inexistente \n");
        printf("-------------------------------------------------------------------\n");
    } else {
        char nome_responsavel [52] = "";
        strncpy (nome_responsavel, atend->responsavel, strlen(atend->responsavel));
        if (valida_strnum(nome_responsavel))
        {
            FILE* fpf;
            Funcionario* func;
            func = (Funcionario*) malloc(sizeof(Funcionario));
            fpf = fopen("funcionarios.dat", "rb");
            if (fpf == NULL) 
            {
                printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
                printf("Nao e possivel continuar este programa...\n");
                exit(1);
            }
            while( fread(func, sizeof(Funcionario), 1, fpf) == 1) 
            {
                if ((strncmp(func->cpf, atend->responsavel, strlen(func->cpf))==0) && (strcmp(func->status, "inativo")!=0)) 
                {
                    strncpy (nome_responsavel, func->nome, strlen(func->nome));
                }
            }
            fclose(fpf);
            free(func);
        } 
        FILE* fpc;
        Cliente* cli;
        cli = (Cliente*) malloc(sizeof(Cliente));
        fpc = fopen("clientes.dat", "rb");
        if (fpc == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
        while(fread(cli, sizeof(Cliente), 1, fpc) == 1) 
        {
            if ((strncmp(cli->cpf_cnpj, atend->cpf_cnpj, strlen (atend->cpf_cnpj))==0) && (strcmp(cli->status, "inativo")!=0)) 
            {
                printf("\n\nCodigo de atendimento: %s\n\n", atend->codigo_atend);
                printf("%s\n", atend->data_atend);
                printf("Nome do cliente: %s\n", cli->nome);
                printf("CPF/CNPJ: %s\n", atend->cpf_cnpj);
                printf("Nome do equipamento: %s\n", atend->nome_eqp);
                printf("Marca: %s\n", atend->marca);
                printf("Modelo: %s\n", atend->modelo);
                printf("Numero de serie: %s\n", atend->nserie);
                printf("Observacoes: %s\n", atend->observacoes);
                printf("Data de visita/entrega: %s\n", atend->data);
                printf("Reponsavel: %s\n", nome_responsavel);
                printf("Situacao: %s\n", atend->situacao);
                printf("Ordem: %s\n\n", atend->ordem_s);
                printf("Status: %s\n", atend->status);
                printf("-------------------------------------------------------------------\n");
            }
        }
        fclose(fpc);
        free(cli);
    }
}

void grava_atend(Atendimento* atend)
{
    FILE* fp;
    fp = fopen("atendimentos.dat", "ab");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    fwrite(atend, sizeof(Atendimento), 1, fp);
    fclose(fp);
}

void atualizando_atend(Atendimento* atend)
{
    FILE* fp;
    Atendimento* arqv_atend;
    char nome_eqp[52];
    char marca[22];
    char modelo[32];
    char nserie[22];
    char observacoes[502];
    char data[12];
    char responsavel[13];
    char situacao[11];
    
    char resposta_nome_eqp[5];
    char resposta_marca[5];
    char resposta_modelo[5];
    char resposta_nserie[5];
    char resposta_observacoes[5];
    char resposta_data[5];
    char resposta_responsavel[5];
    char resposta_situacao[5];
    arqv_atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_atend, sizeof(Atendimento), 1, fp) == 1)
        {
            if (strcmp(arqv_atend->codigo_atend, atend->codigo_atend)==0)
            {
                fseek(fp, -sizeof(Atendimento), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    printf("\nDeseja atualizar o nome do equipamento (sim/nao)?");
    fgets(resposta_nome_eqp, 5, stdin);
    if (strcmp(resposta_nome_eqp, "sim\n")==0)
    {
        le_nome_eqp(nome_eqp);
        strncpy(atend->nome_eqp, nome_eqp, sizeof(atend->nome_eqp));
    }
    printf("\nDeseja atualizar a marca (sim/nao)?");
    fgets(resposta_marca, 5, stdin);
    if (strcmp(resposta_marca, "sim\n")==0)
    {
        le_marca(marca);
        strncpy(atend->marca, marca, sizeof(atend->marca));
    }
    printf("\nDeseja atualizar o modelo (sim/nao)?");
    fgets(resposta_modelo, 5, stdin);
    if (strcmp(resposta_modelo, "sim\n")==0)
    {
        le_modelo(modelo);
        strncpy(atend->modelo, modelo, sizeof(atend->modelo));
    }
    printf("\nDeseja atualizar o numero de serie (sim/nao)?");
    fgets(resposta_nserie, 5, stdin);
    if (strcmp(resposta_nserie, "sim\n")==0)
    {
        le_nserie(nserie);
        strncpy(atend->nserie, nserie, sizeof(atend->nserie));
    }
    printf("\nDeseja atualizar as observacoes (sim/nao)?");
    fgets(resposta_observacoes, 5, stdin);
    if (strcmp(resposta_observacoes, "sim\n")==0)
    {
        le_observacoes(observacoes);
        strncpy(atend->observacoes, observacoes, sizeof(atend->observacoes));
    }
    printf("\nDeseja atualizar a data entrega/visita (dd/mm/aaaa): (sim/nao)?");
    fgets(resposta_data, 5, stdin);
    if (strcmp(resposta_data, "sim\n")==0)
    {
        le_data(data);
        strncpy(atend->data, data, sizeof(atend->data));
    }
    printf("\nDeseja atualizar o responsavel (sim/nao)?");
    fgets(resposta_responsavel, 5, stdin);
    if (strcmp(resposta_responsavel, "sim\n")==0)
    {
        le_responsavel(responsavel);
        strncpy(atend->responsavel, responsavel, sizeof(atend->responsavel));
    }
    if (strcmp(atend->situacao, "pendente")==0)
    {
        printf("\nDeseja atualizar a situacao (sim/nao)?");
        fgets(resposta_situacao, 5, stdin);
        if (strcmp(resposta_situacao, "sim\n")==0)
        {
            le_situacao(situacao);
            strncpy(atend->situacao, situacao, sizeof(atend->situacao));
            if ((strcmp(atend->situacao, "concluido\n")==0) && valida_strnum(atend->responsavel))
            {
                construir_codigo_atendimento(atend->codigo_atend, "concluido", atend->cpf_cnpj, atend->ordem_s);
                Funcionario* func = busca_resp_func(atend->responsavel);
                atualizando_func_count(func);
                free(func);
            }
            else if ((strcmp(atend->situacao, "concluido\n")==0) && valida_nome(atend->responsavel))
            {
                construir_codigo_atendimento(atend->codigo_atend, "concluido", atend->cpf_cnpj, atend->ordem_s);
                Equipe* eqp = busca_resp_equipe(atend->responsavel);
                atualizando_eqp_count(eqp);
                free(eqp);

            }
        }
    }
    fwrite(atend, sizeof(Atendimento), 1, fp);
    fclose(fp);
    free(arqv_atend);
}

void deletando_atend (Atendimento* atend)
{
    FILE* fp;
    Atendimento* arq_atend;
    char status[9] = "inativo";
    int achou = 0;
    if (atend == NULL) 
    {
        printf("Ops! O atendimento informado nao existe!\n");
    } else {
        arq_atend = (Atendimento*) malloc(sizeof(Atendimento));
        fp = fopen("atendimentos.dat", "r+b");
        if (fp == NULL) 
        {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
        } 
        while(fread(arq_atend, sizeof(Atendimento), 1, fp)==1)
        {
            if ((strcmp(arq_atend->codigo_atend, atend->codigo_atend)==0) && (strcmp(arq_atend->status, "inativo")!=0))
            {
                strncpy(arq_atend->status, status, sizeof(arq_atend->status));
                fseek(fp, -1*sizeof(Atendimento), SEEK_CUR);
                fwrite(arq_atend, sizeof(Atendimento), 1, fp);
                achou = 1;
                printf("\nAtendimento excluido com sucesso!!!\n");
                break;
            } //while alterado por chatgpt
        }
        if (!achou) 
        {
            printf("\nAtendimento nao encontrado!\n");
        }
        fclose(fp);
        free(arq_atend);
  }
}

void cadastro_atend(void)
{
    Atendimento *atend = tela_cadastro_atend();
    exibe_cadastro_atend(atend);
    printf("Tecle ENTER para continuar");
    getchar();
    grava_atend(atend); 
    free(atend);
}

void exibe_atend(void)
{
    Atendimento *atend = tela_exibe_atend();
    exibe_cadastro_atend(atend);
    printf("Tecle ENTER para continuar");
    getchar();
    free(atend);
}

void exibe_atendimentos_eqp(void)
{
    FILE* fp;
    Atendimento* atend;
    char equipe[13];
    le_chave_equipe(equipe);
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while( fread(atend, sizeof(Atendimento), 1, fp) == 1)
    {
        if ((strcmp(atend->responsavel, equipe)==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            exibir_atendimentos_eqp(atend);
        }
    }
    fclose(fp);
    free(atend);
}

void exibe_atendimentos_func(void)
{
    FILE* fp;
    Atendimento* atend;
    char cpf[13];
    le_chave_func(cpf);
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(fread(atend, sizeof(Atendimento), 1, fp) == 1) 
    {
        if ((strcmp(atend->responsavel, cpf)==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            exibir_atendimentos_func(atend);
        }
    }
    fclose(fp);
    free(atend);
}

void exibe_atendimentos_cli(void)
{
    FILE* fp;
    Atendimento* atend;
    char cpf_cnpj[16];
    le_chave_cpf_cnpj(cpf_cnpj);
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(fread(atend, sizeof(Atendimento), 1, fp)==1) 
    {
        if ((strncmp(atend->cpf_cnpj, cpf_cnpj, strlen(atend->cpf_cnpj))==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            exibir_atendimentos_cli(atend);
        }
    }
    fclose(fp);
    free(atend);
}

void atualiza_atend(void)
{
    Atendimento *atend = tela_atualiza_atend();
    atualizando_atend(atend);
    exibe_cadastro_atend(atend);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(atend);
}

void deleta_atend(void)
{
    Atendimento *atend = tela_deleta_atend();
    deletando_atend(atend);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(atend);
}

//TELAS CRUD
Atendimento* tela_cadastro_atend(void)
{
    char cpf_cnpj[16];
    char nome_eqp[52];
    char marca[22];
    char modelo[32];
    char nserie[22];
    char observacoes[502];
    char data[12];
    char responsavel[13];
    char situacao[11] = "pendente";
    char ordem_s[25] = "1";
    char status[9] = "ativo";
    Atendimento *atend = (Atendimento*) malloc(sizeof(Atendimento));

    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    char* d_h_atual = date_time();
    strncpy(atend->data_atend, d_h_atual, sizeof(atend->data_atend));
    //BUSCA CLIENTE
    Cliente* cli = busca_cliente();
    while(cli==NULL)
    {
        printf("Cliente nao cadastrado\n");
        printf("Informe novamente\n");
        cli = busca_cliente();
    }
    strncpy(cpf_cnpj, cli->cpf_cnpj, sizeof(cpf_cnpj));
    cpf_cnpj[strcspn(cpf_cnpj, "\n")] = '\0';
    free(cli);
    strncpy(atend->cpf_cnpj, cpf_cnpj, sizeof(atend->cpf_cnpj));
    le_nome_eqp(nome_eqp);
    strncpy(atend->nome_eqp, nome_eqp, sizeof(atend->nome_eqp));
    le_marca(marca);
    strncpy(atend->marca, marca, sizeof(atend->marca));
    le_modelo(modelo);
    strncpy(atend->modelo, modelo, sizeof(atend->modelo));
    le_nserie(nserie);
    strncpy(atend->nserie, nserie, sizeof(atend->nserie));
    le_observacoes(observacoes);
    strncpy(atend->observacoes, observacoes, sizeof(atend->observacoes));
    le_data(data);
    strncpy(atend->data, data, sizeof(atend->data));
    le_responsavel(responsavel); //BUSCA FUNCIONARIO OU BUSCA EQUIPE
    strncpy(atend->responsavel, responsavel, sizeof(atend->responsavel));
    strncpy(atend->situacao, situacao, sizeof(atend->situacao));
    le_ordem(cpf_cnpj, ordem_s);
    strncpy(atend->ordem_s, ordem_s, sizeof(atend->ordem_s));
    construir_codigo_atendimento(atend->codigo_atend, situacao, cpf_cnpj, ordem_s);
    strncpy(atend->status, status, sizeof(atend->status));
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    return atend;
}

// Funcao para construir o codigo de atendimento
void construir_codigo_atendimento(char* codigo_atend, const char* situacao, const char* cpf_cnpj, const char* ordem_s) {
    sprintf(codigo_atend, "%s%s%s", situacao, cpf_cnpj, ordem_s);
}

void le_nome_eqp(char* nome_eqp) 
{
    printf("{}                       Nome do equipamento (desconsidere espacos):        {}\n");
    fgets(nome_eqp, 52, stdin);
    while (!valida_alphanum(nome_eqp)) //em utilidades
    {
        printf("{}                       Informe o nome do equipamento novamente:            {}\n");
        fgets(nome_eqp, 52, stdin);
    } 
}

void le_marca(char* marca) 
{
    printf("{}                       Marca (desconsidere espacos):                      {}\n");
    fgets(marca, 22, stdin);
    while (!valida_alphanum(marca)) //em utilidades
    {
        printf("{}                       Informe a marca novamente:                         {}\n");
        fgets(marca, 22, stdin);
    } 
}

void le_modelo(char* modelo) 
{
    printf("{}                       Modelo (desconsidere espacos):                     {}\n");
    fgets(modelo, 32, stdin);
    while (!valida_alphanum(modelo)) //em utilidades
    {
        printf("{}                       Informe o modelo novamente:                        {}\n");
        fgets(modelo, 32, stdin);
    } 
}

void le_nserie(char* nserie) 
{
    printf("{}                       Numero de serie (desconsidere espacos):            {}\n");
    fgets(nserie, 22, stdin);
    while (!valida_alphanum(nserie)) //em utilidades
    {
        printf("{}                       Informe o numero de serie novamente:               {}\n");
        fgets(nserie, 22, stdin);
    } 
}

void le_observacoes(char* observacoes) 
{
    printf("{}                       Observacoes:                                       {}\n");
    fgets(observacoes, 502, stdin);
    while (!valida_nao_vazio(observacoes)) //em utilidades
    {
        printf("{}                       Informe alguma observacao:                         {}\n");
        fgets(observacoes, 502, stdin);
    } 
}

void le_data(char* data) 
{
    int dia, mes, ano;
    char dd[3], mm[3], aa[5];
    
    printf("{}                       Data entrega/visita (dd/mm/aaaa):                  {}\n");
    fgets(data, 12, stdin);
    
    strncpy(dd, &data[0], 2);
    sscanf(dd, "%d", &dia);
    
    strncpy(mm, &data[3], 2);
    sscanf(mm, "%d", &mes);

    strncpy(aa, &data[6], 4);
    sscanf(aa, "%d", &ano);

    while (!valida_data(dia, mes, ano) || !valida_nao_vazio(data)) {
        printf("{}                       Informe novamente a data entrega/visita:           {}\n\n");
        fgets(data, 12, stdin);
        strncpy(dd, &data[0], 2);
        sscanf(dd, "%d", &dia);
        strncpy(mm, &data[3], 2);
        sscanf(mm, "%d", &mes);
        strncpy(aa, &data[6], 4);
        sscanf(aa, "%d", &ano);
  } 
}

void le_responsavel(char* responsavel) 
{
    printf("{}                       Funcionario (CPF)/equipe responsavel:              {}\n");
    fgets(responsavel, 13, stdin);
    while (!valida_responsavel(responsavel)) //em utilidades
    {
        printf("{}                       Funcionario (CPF)/equipe responsavel:              {}\n");
        fgets(responsavel, 13, stdin);
    }
}

void le_situacao(char* situacao) 
{
    printf("{}                       Situacao (pendente/concluido):                     {}\n");
    fgets(situacao, 11, stdin);
    while (!valida_situacao(situacao)) //em utilidades
    {
        printf("{}                       Situacao (pendente/concluido):                     {}\n");
        fgets(situacao, 11, stdin);
    } 
}

void le_ordem(char* cpf_cnpj, char* ordem_s)
{
    int ordem = 1;
    char situa_p [11] = "pendente";
    char situa_c [11] = "concluido";
    Atendimento* atend;
    do {
        //contruir codigo
        char codigop [53];
        char codigoc [53];

        construir_codigo_atendimento(codigop, situa_p, cpf_cnpj, ordem_s);
        construir_codigo_atendimento(codigoc, situa_c, cpf_cnpj, ordem_s);
        if (atend != NULL) 
        {
            free(atend);
        }
        atend = busca_atend_pec (codigop, codigoc);
        if (atend != NULL) 
        {
            ordem+=1;
            sprintf (ordem_s, "%d", ordem);
        }
    } while(atend != NULL);
}

Atendimento* tela_exibe_atend(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Atendimento* atend = busca_atend(); 
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return atend;
}

Atendimento* busca_atend(void)
{
    FILE* fp;
    Atendimento* atend;
    char codigo_atend[53];
    le_codigoatend(codigo_atend);
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(fread(atend, sizeof(Atendimento), 1, fp) == 1) 
    {
        if ((strcmp(atend->codigo_atend, codigo_atend)==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            fclose(fp);
            return atend;
        }
    }
    fclose(fp);
    return NULL;
}

Atendimento* busca_atend_pec(char* codigop, char* codigoc)
{
    FILE* fp;
    Atendimento* atend;
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(fread(atend, sizeof(Atendimento), 1, fp) == 1) 
    {
        if ((strcmp(atend->codigo_atend, codigop)==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            fclose(fp);
            return atend;
        }
        else if ((strcmp(atend->codigo_atend, codigoc)==0) && (strcmp(atend->status, "ativo")==0)) 
        {
            fclose(fp);
            return atend;
        }
    }
    fclose(fp);
    return NULL;
}

void le_codigoatend(char* codigo_atend) 
{
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                 para exibir (situacao+CPF/CNPJ+ordem):                   {}\n");
    fgets(codigo_atend, 53, stdin);
    codigo_atend[strcspn(codigo_atend, "\n")] = '\0';
}

void lista_atend_ant(void)
{
    FILE* fp;
    Atendimento* atend;
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char cod [53] = "CODIGO DE ATENDIMENTO";
    char data [12] = "AGENDAMENTO";
    char responsavel [13] = "RESPONSAVEL";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-53s || %-12s || %-13s\n" , cod, data, responsavel);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(atend, sizeof(Atendimento), 1, fp)) {
        if (strcmp(atend->status, "ativo")==0) {
            exibe_cadastro_atend_tabela(atend);
        }
    }
    fclose(fp);
    free(atend);
}

void lista_atend_rec(void)
{
    FILE* fp;
    Atendimento* novo_atend;
    Atendimento* lista;
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    lista = NULL;
    novo_atend = (Atendimento*) malloc(sizeof(Atendimento));
    if (novo_atend == NULL) 
    {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1); 
    }
    char cod [53] = "CODIGO DE ATENDIMENTO";
    char data [12] = "AGENDAMENTO";
    char responsavel [13] = "RESPONSAVEL";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-53s || %-12s || %-13s\n" , cod, data, responsavel);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(novo_atend, sizeof(Atendimento), 1, fp) == 1) 
    {
        novo_atend->prox = lista;
        lista = novo_atend;
        novo_atend = (Atendimento*) malloc(sizeof(Atendimento));
        if (novo_atend == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
    }
    fclose(fp);
    novo_atend = lista;
    while(novo_atend != NULL) 
    {
        exibe_cadastro_atend_tabela(novo_atend);
        novo_atend = novo_atend->prox;
    }
    novo_atend = lista;
    while (lista != NULL) 
    {
        lista = lista->prox;
        free(novo_atend);
        novo_atend = lista;
    }
}

void lista_atendp(void)
{
    FILE* fp;
    Atendimento* atend;
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char cod [53] = "CODIGO DE ATENDIMENTO";
    char data [12] = "AGENDAMENTO";
    char responsavel [13] = "RESPONSAVEL";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-53s || %-12s || %-13s\n" , cod, data, responsavel);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(atend, sizeof(Atendimento), 1, fp)) {
        if ((strcmp(atend->situacao, "pendente") == 0) && (strcmp(atend->status, "ativo")==0)) {
            exibe_cadastro_atend_tabela(atend);
        }
    }
    fclose(fp);
    free(atend);
}

void lista_atendc(void)
{
    FILE* fp;
    Atendimento* atend;
    atend = (Atendimento*) malloc(sizeof(Atendimento));
    fp = fopen("atendimentos.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char cod [53] = "CODIGO DE ATENDIMENTO";
    char data [12] = "AGENDAMENTO";
    char responsavel [13] = "RESPONSAVEL";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-53s || %-12s || %-13s\n" , cod, data, responsavel);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(atend, sizeof(Atendimento), 1, fp)) {
        if ((strcmp(atend->situacao, "concluido\n") == 0) && (strcmp(atend->status, "ativo")==0)) {
            exibe_cadastro_atend_tabela(atend);
        }
    }
    fclose(fp);
    free(atend);
}

Atendimento* tela_atualiza_atend(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Atendimento* atend = busca_atend(); 
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return (atend);
}

Atendimento* tela_deleta_atend(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Atendimento* atend = busca_atend();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return atend;
}