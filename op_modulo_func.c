
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
void cadastro_func(void)
{
    tela_cadastro_func();
}

void exibe_func(void)
{
    tela_exibe_func();
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
void tela_cadastro_func(void)
{
    char nome[52]; //DECLARADO EM OP_MODULO_CLI
    char cpf[13];
    char email[258]; //DECLARADO EM OP_MODULO_CLI
    char telefone[13]; //DECLARADO EM OP_MODULO_CLI
    char endereco[102]; //DECLARADO EM OP_MODULO_CLI
    char profissao[52];
    char salario[8];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR FUNCIONARIO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_nome(nome);
    le_cpf(cpf);
    le_email(email);
    le_telefone(telefone);
    le_endereco(endereco);
    le_profissao(profissao);
    le_salario(salario);
    //int count = 0;
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Nome: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Email: %s\n", email);
    printf("Telefone: %s\n", telefone);
    printf("Endereco: %s\n", endereco);
    printf("Profissao: %s\n", profissao);
    printf("Salario: %s\n", salario);
    printf("Tecle ENTER para continuar");
    getchar();
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
    fgets(salario, 8, stdin);
    while (!valida_strnum(salario)) //em utilidades
    {
        printf("{}                       Informe o salario novamente:                       {}\n");
        fgets(salario, 8, stdin);
    } 
}

void tela_exibe_func(void)
{
    char cpf[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR FUNCIONARIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_func(cpf);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
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