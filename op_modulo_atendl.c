
////////////////////////////////MODULO ATENDL///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "op_modulo_pf.h"
#include "op_modulo_atendl.h"
//#include "utilidades.h"

void modulo_atendl(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                          MENU ATENDIMENTO IN LOCO                        {}\n");
		op3 = padrao_crud(); //ja declarado em op_modulo_pf
		switch(op3) 
        {
			case '1': 	
            cadastro_atendl();
            break;
			case '2': 	
            exibe_atendl();
            break;
			case '3': 	
            atualiza_atendl();
            break;
			case '4': 	
            deleta_atendl();
            break;
		} 		
	} while (op3 != '0');
}

//FUNCOES EM DESENVOLVIMENTO
void cadastro_atendl(void)
{
    tela_cadastro_atendl();
}

void exibe_atendl(void)
{
    tela_exibe_atendl();
}

void atualiza_atendl(void)
{
    tela_atualiza_atendl();
}

void deleta_atendl(void)
{
    tela_deleta_atendl();
}

//TELAS CRUD
void tela_cadastro_atendl(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF/CNPJ (somente numeros):                        {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       Numero de serie:                                   {}\n");
    printf("{}                       Observacoes:                                       {}\n");
    printf("{}                       Data de visita:                                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_exibe_atendl(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                para exibir (situacao+CPF/CNPJ+ordem):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_atualiza_atendl(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}               para atualizar (situacao+CPF/CNPJ+ordem):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_deleta_atendl(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                para deletar (situacao+CPF/CNPJ+ordem):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}