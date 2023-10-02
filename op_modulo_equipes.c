////////////////////////////////MODULO EQUIPES///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
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
void cadastro_equipe(void)
{
    tela_cadastro_equipe();
}

void exibe_equipe(void)
{
    tela_exibe_equipe();
}

void atualiza_equipe(void)
{
    tela_atualiza_equipe();
}

void deleta_equipe(void)
{
    tela_deleta_equipe();
}

//TELAS CRUD
void tela_cadastro_equipe(void)
{
    char equipe[13];
    char quant_part[4];
    char qpc[4];
    int qp = 0;
    char nome[52];
    //int count = 0;
    char cpf[13];

    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                CADASTRAR EQUIPE                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_equipe(equipe);
    le_quant_part(quant_part);
    strncpy(qpc, &quant_part[0], 2);
    sscanf(qpc, "%d", &qp);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Equipe: %s\n", equipe);
    printf("Quantidade de participantes: %s\n\n", quant_part);
    for (int i = 0; i < qp; i++) 
    {
    le_nome(nome); //JA DECLARADO NO OP_MODULO_CLI
    le_chave_func(cpf);
    printf("Nome: %s\n", nome);
    printf("CPF: %s\n\n", cpf);
    }
    printf("Tecle ENTER para continuar");
    getchar();
}
// fazer o scanf da quantidade para solicitar o nome e o cpf de tantos func

void le_equipe(char* equipe) 
{
    printf("{}                       Equipe:                                            {}\n");
    fgets(equipe, 13, stdin);
    while (!valida_nome(equipe)) //em utilidades
    {
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
    while (!valida_existe(cpf)) //em utilidades
    {
        printf("{}                       Informe o CPF novamente:                           {}\n");
        fgets(cpf, 13, stdin);
    } 
}

void tela_exibe_equipe(void)
{
    char equipe[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 EXIBIR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_equipe(equipe);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void le_chave_equipe(char* equipe)
{
    printf("{}                       Equipe:                                            {}\n");
    fgets(equipe, 13, stdin);
    while (!valida_existe(equipe)) //em utilidades
    {
        printf("{}                       Informe a equipe novamente:                        {}\n");
        fgets(equipe, 13, stdin);
    } 
}

void tela_atualiza_equipe(void)
{
    char equipe[13];
    char cpf[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               ATUALIZAR EQUIPE                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_equipe(equipe);
    printf("{}                            Atual integrante:                             {}\n");
    le_chave_func(cpf); //JA DECLARADO EM OP_MODULO_FUNC
    //le_cpf_atualin(cpf);
    printf("{}                            Novo integrante:                             {}\n");
    le_chave_func(cpf); //JA DECLARADO EM OP_MODULO_FUNC
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
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

void tela_deleta_equipe(void)
{
    char equipe[13];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                DELETAR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_chave_equipe(equipe);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}