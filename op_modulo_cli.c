
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

void grava_cliente(Cliente* cli) //.h
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

void cadastro_cli(void)
{
    // função ainda em desenvolvimento
    // ler os dados do cliente
    Cliente *cli = tela_cadastro_cli();
    exibe_cadastro(cli);
    printf("Tecle ENTER para continuar"); //mudar isso em todos os modulos e tirar o tipo resp de atendimento
    getchar();
    grava_cliente(cli);

    // gravar o registro no arquivo de clientes
    //gravar_cliente(cli);

    // liberar o espaço de memória da estrutura 
    free(cli);
}

void exibe_cli(void)
{

    Cliente *cli = tela_exibe_cli();
    exibe_cadastro(cli);
    printf("Tecle ENTER para continuar");
    getchar();
    // liberar o espaço de memória da estrutura 
    free(cli);
}

void atualiza_cli(void)
{
    tela_atualiza_cli();
}

void deleta_cli(void)
{
    tela_deleta_cli();
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
    strncpy(cli->nome, nome, sizeof(cli->nome));//, cli->nome;
    le_tipo(tipo);
    strncpy(cli->tipo, tipo, sizeof(cli->tipo));//, cli->tipo;
    le_cpf_cnpj(cpf_cnpj);
    strncpy(cli->cpf_cnpj, cpf_cnpj, sizeof(cli->cpf_cnpj));//, cli->cpf_cnpj;
    le_email(email);
    strncpy(cli->email, email, sizeof(cli->email));//, cli->email;
    le_telefone(telefone);
    strncpy(cli->telefone, telefone, sizeof(cli->telefone));//, cli->telefone;
    le_endereco(endereco);
    strncpy(cli->endereco, endereco, sizeof(cli->endereco));//, cli->endereco;
    strncpy(cli->status, status, sizeof(cli->status));//, cli->status;
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
    while (!valida_cpf(cpf_cnpj) && !valida_cnpj(cpf_cnpj)) //em utilidades
    {
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

Cliente* tela_exibe_cli(void) //.h
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

Cliente* busca_cliente(void) //.h
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
    while (!valida_existe(cpf_cnpj)) //em utilidades
    {
        printf("{}                       Informe o CPF/CNPJ novamente:                      {}\n");
        fgets(cpf_cnpj, 16, stdin);
    } 
}

void lista_pf(void) //.h
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
  while(fread(cli, sizeof(Cliente), 1, fp)) {
    if ((strcmp(cli->tipo, "PF\n") == 0) && (strcmp(cli->status, "ativo")==0)) {
      exibe_cadastro(cli);
    }
  }
  fclose(fp);
  free(cli);
}

void lista_pj(void) 
{ //.h
  FILE* fp;
  Cliente* cli;
  cli = (Cliente*) malloc(sizeof(Cliente));
  fp = fopen("clientes.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Nao e possivel continuar este programa...\n");
    exit(1);
  }
  while(fread(cli, sizeof(Cliente), 1, fp)) {
    if ((strcmp(cli->tipo, "PJ\n") == 0) && (strcmp(cli->status, "ativo")==0)) {
      exibe_cadastro(cli);
    }
  }
  fclose(fp);
  free(cli);
}

void tela_atualiza_cli(void)
{
    char cpf_cnpj[16];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             ATUALIZAR CLIENTES                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_cpf_cnpj(cpf_cnpj);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_deleta_cli(void)
{
    char cpf_cnpj[16];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              DELETAR CLIENTES                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_cpf_cnpj(cpf_cnpj);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}