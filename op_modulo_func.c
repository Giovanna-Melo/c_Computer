
/////////////////////////////////MODULO FUNC///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>//tirar
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

void grava_func(Funcionario* func) //.h
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

void cadastro_func(void)
{
    // ler os dados do funcionario
    Funcionario *func = tela_cadastro_func();
    exibe_cadastro_func(func);
    printf("Tecle ENTER para continuar");
    getchar();
    grava_func(func);
    // liberar o espaço de memória da estrutura 
    free(func);
}

void exibe_func(void)
{
    Funcionario *func = tela_exibe_func();
    exibe_cadastro_func(func);
    printf("Tecle ENTER para continuar");
    getchar();
    // liberar o espaço de memória da estrutura 
    free(func);
}

void atualiza_func(void)
{
    tela_atualiza_func();
}

void deleta_func(void)
{
    tela_deleta_func();
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
    while (!valida_cpf(cpf)) //em utilidades
    {
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

Funcionario* tela_exibe_func(void) //.h
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

Funcionario* busca_func(void) //.h
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

//busca_resp_func
Funcionario* busca_resp_func(char* responsavel) //.h
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

void lista_all_func(void) //.h
{
  FILE* fp;
  Funcionario* func;
  func = (Funcionario*) malloc(sizeof(Funcionario));
  fp = fopen("funcionarios.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(func, sizeof(Funcionario), 1, fp)) {
    if (strcmp(func->status, "ativo")==0) {
      exibe_cadastro_func(func);
    }
  }
  fclose(fp);
  free(func);
}

void tela_atualiza_func(void)
{
    char cpf[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR FUNCIONARIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_func(cpf);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_deleta_func(void)
{
    char cpf[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR FUNCIONARIO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_func(cpf);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
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
    tela_mostra_zcont();
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