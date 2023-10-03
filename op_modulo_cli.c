
/////////////////////////////////MODULO PF///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "utilidades.h"

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
    scanf("%c", &op2);
    getchar();
    return op2;
}

char padrao_crud(void)
{
    char op3;
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
    scanf("%c", &op3);
    getchar();
    return op3;

}

//FUNCOES EM DESENVOLVIMENTO
void cadastro_cli(void)
{
    tela_cadastro_cli();
}

void exibe_cli(void)
{
    tela_exibe_cli();
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
void tela_cadastro_cli(void)
{
    char nome[52];
    char tipo[4];
    char cpf_cnpj[16];
    char email[258];
    char telefone[13];
    char endereco[102];
  
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              CADASTRAR CLIENTES                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_nome(nome);
    le_tipo(tipo);
    le_cpf_cnpj(cpf_cnpj);
    le_email(email);
    le_telefone(telefone);
    le_endereco(endereco);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Nome: %s\n", nome);
    printf("Tipo: %s\n", tipo);
    printf("CPF/CNPJ: %s\n", cpf_cnpj);
    printf("Email: %s\n", email);
    printf("Telefone: %s\n", telefone);
    printf("Endereco: %s\n", endereco);
    printf("Tecle ENTER para continuar");
    getchar();
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
        printf("{}                       Informe o email novamente:                          {}\n");
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

void tela_exibe_cli(void)
{
    char cpf_cnpj[16];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                EXIBIR CLIENTES                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_cpf_cnpj(cpf_cnpj);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
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