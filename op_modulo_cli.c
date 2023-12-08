
/////////////////////////////////MODULO PF///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "utilidades.h"

typedef struct cliente Cliente;

void modulo_cli(void) 
{
	char op3;
	do 
    {
        system("clear||cls"); 
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                               MENU CLIENTES                              {}\n");	
		op3 = padrao_crud();
		switch(op3) 
        {
			case '1': 	
            cadastro_cli();
            break;

			case '2': 	
            exibe_cli();
            break;

			case '3': 	
            atualiza_cli();
            break;

			case '4': 	
            deleta_cli();
            break;
            		} 		
	} while (op3 != '0');
}

char menu_clientes(void)
{
    char op2;
    char op2_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 MENU CLIENTES                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CLIENTES                                 {}\n");
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

char padrao_crud(void)
{
    char op3;
    char op3_list [11];
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CADASTRAR                                {}\n");
    printf("{}                              2. EXIBIR                                   {}\n");
    printf("{}                              3. ATUALIZAR                                {}\n");
    printf("{}                              4. DELETAR                                  {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
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

//FUNCOES EM DESENVOLVIMENTO
void exibe_cadastro(const Cliente* cli)
{
  if ((cli == NULL) || (strcmp(cli->status, "inativo")==0)) {
    printf("\n Cliente Inexistente \n");
  } else {
    printf("\n Cliente Cadastrado  \n");
    printf("Nome: %s\n", cli->nome);
    printf("Tipo: %s\n", cli->tipo);
    printf("CPF/CNPJ: %s\n", cli->cpf_cnpj);
    printf("Email: %s\n", cli->email);
    printf("Telefone: %s\n", cli->telefone);
    printf("Endereco: %s\n", cli->endereco);
    printf("Status: %s\n\n", cli->status);
  }
}

void exibe_cadastro_tabela(const Cliente* cli)
{
  if ((cli == NULL) || (strcmp(cli->status, "inativo")==0)) {
    printf("\n Cliente Inexistente \n");
  } else {
        char  nome_i [ 52 ];
        int tam_n;
        tam_n  =  strlen ( cli->nome );
        strncpy ( nome_i , cli->nome, tam_n );
        for (int i = 0; i < tam_n; i++){
            if (nome_i[i]=='\n'){
                nome_i[i]='\0';
            }
        }

        char  tipo_i [ 4 ];
        int tam_t;
        tam_t  =  strlen ( cli->tipo );
        strncpy ( tipo_i , cli->tipo, tam_t );
        for (int i = 0; i < tam_t; i++){
            if (tipo_i[i]=='\n'){
                tipo_i[i]='\0';
            }
        }

        char  cpf_cnpj_i [ 16 ];
        int tam_c;
        tam_c  =  strlen ( cli->cpf_cnpj );
        strncpy ( cpf_cnpj_i , cli->cpf_cnpj, tam_c );
        for (int i = 0; i < tam_c; i++){
            if (cpf_cnpj_i[i]=='\n'){
                cpf_cnpj_i[i]='\0';
            }
        }

        char  telefone_i [ 13 ];
        int tam_tel;
        tam_tel  =  strlen (cli->telefone);
        strncpy (telefone_i , cli->telefone, tam_tel);
        for (int i = 0; i < tam_tel; i++){
            if (telefone_i[i]=='\n'){
                telefone_i[i]='\0';
            }
        }

        printf ( "%-52s || %-4s || %-16s || %-13s\n" , nome_i , tipo_i, cpf_cnpj_i, telefone_i);
        printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
  }
}

void grava_cliente(Cliente* cli)
{
    FILE* fp;
    fp = fopen("clientes.dat", "ab");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    fwrite(cli, sizeof(Cliente), 1, fp);
    fclose(fp);
}

void atualizando_cliente(Cliente* cli)
{
    FILE* fp;
    Cliente* arqv_cli;
    char email[258];
    char telefone[13];
    char endereco[102];
    char resposta_email[5];
    char resposta_tel[5];
    char resposta_ender[5];
    arqv_cli = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "r+b");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while (fread(arqv_cli, sizeof(Cliente), 1, fp) == 1)
        {
            if (strcmp(arqv_cli->cpf_cnpj, cli->cpf_cnpj)==0)
            {
                fseek(fp, -sizeof(Cliente), SEEK_CUR);
                break;
            }
        } //Trecho do while desenvolvido pelo chatgpt
    printf("\nDeseja atualizar o e-mail (sim/nao)?");
    fgets(resposta_email, 5, stdin);
    if (strcmp(resposta_email, "sim\n")==0)
    {
        le_email(email);
        strncpy(cli->email, email, sizeof(cli->email));
    }
    printf("\nDeseja atualizar o telefone (sim/nao)?");
    fgets(resposta_tel, 5, stdin);
    if (strcmp(resposta_tel, "sim\n")==0)
    {
    le_telefone(telefone);
    strncpy(cli->telefone, telefone, sizeof(cli->telefone));
    }
    printf("\nDeseja atualizar o endereco (sim/nao)?");
    fgets(resposta_ender, 5, stdin);
    if (strcmp(resposta_ender, "sim\n")==0)
    {
    le_endereco(endereco);
    strncpy(cli->endereco, endereco, sizeof(cli->endereco));
    }
    fwrite(cli, sizeof(Cliente), 1, fp);
    fclose(fp);
    free(arqv_cli);
}

void deletando_cliente (Cliente* cli)
{
    FILE* fp;
    Cliente* arq_cli;
    char status[9] = "inativo";
    int achou = 0;
    if (cli == NULL) 
    {
        printf("Ops! O cliente informado nao existe!\n");
    } else {
        arq_cli = (Cliente*) malloc(sizeof(Cliente));
        fp = fopen("clientes.dat", "r+b");
        if (fp == NULL) 
        {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
        } 
        while(fread(arq_cli, sizeof(Cliente), 1, fp)==1)
        {
            if ((strcmp(arq_cli->cpf_cnpj, cli->cpf_cnpj)==0) && (strcmp(arq_cli->status, "inativo")!=0))
            {
                strncpy(arq_cli->status, status, sizeof(arq_cli->status));
                fseek(fp, -1*sizeof(Cliente), SEEK_CUR);
                fwrite(arq_cli, sizeof(Cliente), 1, fp);
                achou = 1;
                printf("\nCliente excluido com sucesso!!!\n");
                break;
            } //while alterado por chatgpt
        }
        if (!achou) 
        {
            printf("\nCliente nao encontrado!\n");
        }
        fclose(fp);
        free(arq_cli);
  }
}

void cadastro_cli(void)
{
    //ler os dados do cliente
    Cliente *cli = tela_cadastro_cli();
    exibe_cadastro(cli);
    printf("Tecle ENTER para continuar");
    getchar();
    grava_cliente(cli);
    //liberar o espaco de memoria da estrutura 
    free(cli);
}

void exibe_cli(void)
{

    Cliente *cli = tela_exibe_cli();
    exibe_cadastro(cli);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(cli);
}

void atualiza_cli(void)
{
    Cliente *cli = tela_atualiza_cli();
    atualizando_cliente(cli);
    exibe_cadastro(cli);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(cli);
}

void deleta_cli(void)
{
    Cliente *cli = tela_deleta_cli();
    deletando_cliente(cli);
    printf("Tecle ENTER para continuar");
    getchar(); 
    free(cli);
}

//TELAS CRUD
Cliente* tela_cadastro_cli(void)
{ 
    char nome[52];
    char tipo[4];
    char cpf_cnpj[16];
    char email[258];
    char telefone[13];
    char endereco[102];
    char status[9] = "ativo";
    
    Cliente *cli = (Cliente*) malloc(sizeof(Cliente)); 
  
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              CADASTRAR CLIENTES                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_nome(nome);
    strncpy(cli->nome, nome, sizeof(cli->nome));
    le_tipo(tipo);
    strncpy(cli->tipo, tipo, sizeof(cli->tipo));
    le_cpf_cnpj(cpf_cnpj);
    strncpy(cli->cpf_cnpj, cpf_cnpj, sizeof(cli->cpf_cnpj));
    le_email(email);
    strncpy(cli->email, email, sizeof(cli->email));
    le_telefone(telefone);
    strncpy(cli->telefone, telefone, sizeof(cli->telefone));
    le_endereco(endereco);
    strncpy(cli->endereco, endereco, sizeof(cli->endereco));
    strncpy(cli->status, status, sizeof(cli->status));
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    return cli;
}

void le_nome(char* nome) 
{
    printf("{}                       Nome:                                              {}\n");
    fgets(nome, 52, stdin);
    while (!valida_nome(nome)) //em utilidades
    {
        printf("{}                       Informe o nome novamente:                          {}\n");
        fgets(nome, 52, stdin);
    } 
}

void le_tipo(char* tipo) 
{
    printf("{}                       Tipo (PF/PJ):                                      {}\n");
    fgets(tipo, 4, stdin);
    while (!valida_tipo(tipo)) //em utilidades
    {
        printf("{}                       Informe o tipo novamente:                          {}\n");
        fgets(tipo, 4, stdin);
    } 
}

void le_cpf_cnpj(char* cpf_cnpj)
{
    printf("{}                       CPF/CNPJ (somente numeros):                        {}\n");
    fgets(cpf_cnpj, 16, stdin);
    while ((!valida_cpf(cpf_cnpj) && !valida_cnpj(cpf_cnpj))||busca_chave_cli(cpf_cnpj)) //em utilidades
    {
        if (busca_chave_cli(cpf_cnpj))
        {
            printf("{}                          Cliente ja cadastrado                           {}\n");
        }
        printf("{}                       Informe o CPF/CNPJ novamente:                      {}\n");
        fgets(cpf_cnpj, 16, stdin);
    } 
}

void le_email(char* email) 
{
    printf("{}                       E-mail:                                            {}\n");
    fgets(email, 258, stdin);
    while (!valida_email(email)) //em utilidades
    {
        printf("{}                       Informe o email novamente:                         {}\n");
        fgets(email, 258, stdin);
    } 
}

void le_telefone(char* telefone) 
{
    printf("{}                       Telefone (somente numeros):                        {}\n");
    fgets(telefone, 13, stdin);
    while (!valida_tel(telefone)) //em utilidades
    {
        printf("{}                       Informe o telefone novamente:                      {}\n");
        fgets(telefone, 13, stdin);
    } 
}

void le_endereco(char* endereco) 
{ 
    printf("{}                       Endereco:                                          {}\n");
    fgets(endereco, 102, stdin);
    while (!eh_letra(endereco[0]) || !valida_endereco(endereco)) //em utilidades
    {
        printf("{}                       Informe o endereco novamente:                      {}\n");
        fgets(endereco, 102, stdin);
    } 
}

Cliente* tela_exibe_cli(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                EXIBIR CLIENTES                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Cliente* cli = busca_cliente();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return cli;
}

Cliente* busca_cliente(void)
{
    FILE* fp;
    Cliente* cli;
    char cpf_cnpj[16];
    le_chave_cpf_cnpj(cpf_cnpj);
    cli = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) 
    {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)) 
    {
        fread(cli, sizeof(Cliente), 1, fp);
        if ((strcmp(cli->cpf_cnpj, cpf_cnpj)==0) && (strcmp(cli->status, "inativo")!=0)) 
        {
            fclose(fp);
            return cli;
        }
    }
    fclose(fp);
    return NULL;
}

void le_chave_cpf_cnpj(char* cpf_cnpj)
{
    printf("{}                       CPF/CNPJ (somente numeros):                        {}\n");
    fgets(cpf_cnpj, 16, stdin);
}

int busca_chave_cli(char* cpf_cnpj)
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
    while(!feof(fp)) 
    {
        fread(cli, sizeof(Cliente), 1, fp);
        if ((strcmp(cli->cpf_cnpj, cpf_cnpj)==0) && (strcmp(cli->status, "ativo")==0)) 
        {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    free(cli);
    return 0;
}

void lista_all_cli(void)
{
    FILE* fp;
    //Cliente* cli;
    Cliente* novo_cli;
    Cliente* lista;
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) 
    {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1);
    }
    lista = NULL;
    novo_cli = (Cliente*) malloc(sizeof(Cliente));
    if (novo_cli == NULL) 
    {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1); 
    }
    char nome [52] = "NOME";
    char cpf_cnpj [16] = "CPF/CNPJ";
    char telefone [13] = "TELEFONE";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-52s || TIPO || %-16s || %-13s\n" , nome, cpf_cnpj, telefone);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(novo_cli, sizeof(Cliente), 1, fp) == 1) 
    {
        novo_cli->prox = NULL;
        if ((lista == NULL) || (strcmp(novo_cli->nome, lista->nome) < 0)) 
        {
            novo_cli->prox = lista;
            lista = novo_cli;
        } else {
            Cliente* ant = lista;
            Cliente* atual = lista->prox;
            while ((atual != NULL) && strcmp(atual->nome, novo_cli->nome) < 0) 
            {
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = novo_cli;
            novo_cli->prox = atual;
        }
        novo_cli = (Cliente*)malloc(sizeof(Cliente));
        if (novo_cli == NULL) 
        {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Nao e possivel continuar este programa...\n");
            exit(1);
        }
    }
    fclose(fp);
    novo_cli = lista;
    while(novo_cli != NULL) 
    {
        exibe_cadastro_tabela(novo_cli);
        novo_cli = novo_cli->prox;
    }
    novo_cli = lista;
    while (lista != NULL) 
    {
        lista = lista->prox;
        free(novo_cli);
        novo_cli = lista;
    }
}

void lista_pf(void)
{
    FILE* fp;
    Cliente* cli;
    cli = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char nome [52] = "NOME";
    char cpf_cnpj [16] = "CPF/CNPJ";
    char telefone [13] = "TELEFONE";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-52s || TIPO || %-16s || %-258s\n" , nome, cpf_cnpj, telefone);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(cli, sizeof(Cliente), 1, fp)) {
        if ((strcmp(cli->tipo, "PF\n") == 0) && (strcmp(cli->status, "ativo")==0)) {
            exibe_cadastro_tabela(cli);
        }
    }
    fclose(fp);
    free(cli);
}

void lista_pj(void) 
{
    FILE* fp;
    Cliente* cli;
    cli = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Nao e possivel continuar este programa...\n");
        exit(1);
    }
    char nome [52] = "NOME";
    char cpf_cnpj [16] = "CPF/CNPJ";
    char telefone [13] = "TTELEFONE";
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf ( "%-52s || TIPO || %-16s || %-258s\n" , nome, cpf_cnpj, telefone);
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(cli, sizeof(Cliente), 1, fp)) {
        if ((strcmp(cli->tipo, "PJ\n") == 0) && (strcmp(cli->status, "ativo")==0)) {
            exibe_cadastro_tabela(cli);
        }
    }
    fclose(fp);
    free(cli);
}

Cliente* tela_atualiza_cli(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             ATUALIZAR CLIENTES                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Cliente* cli = busca_cliente();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return cli;
}

Cliente* tela_deleta_cli(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              DELETAR CLIENTES                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    Cliente* cli = busca_cliente();
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
    return cli;
}