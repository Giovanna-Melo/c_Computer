////////////////////////////////MODULO PLANOS///////////////////////////////////
///////////////////////////MODULO EM DESENVOLVIMENTO////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include "op_modulo_cli.h"
#include "op_modulo_planos.h"
//#include "utilidades.h"

void modulo_planos(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                                MENU PLANOS                               {}\n");
        printf("{}                            EM DESENVOLVIMENTO                            {}\n");
		op3 = padrao_crud(); //ja declarado em op_modulo_cli
		switch(op3) 
        {
			case '1': 	
            cadastro_planos();
            break;
			case '2': 	
            exibe_planos();
            break;
			case '3': 	
            atualiza_planos();
            break;
			case '4': 	
            deleta_planos();
            break;
		} 		
	} while (op3 != '0');
}

//FUNCOES EM DESENVOLVIMENTO
void cadastro_planos(void)
{
    tela_cadastro_planos();
}

void exibe_planos(void)
{
    tela_exibe_planos();
}

void atualiza_planos(void)
{
    tela_atualiza_planos();
}

void deleta_planos(void)
{
    tela_deleta_planos();
}

//TELAS CRUD
void tela_cadastro_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                 EM BREVE...                               |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")          23/09/2023.: MODULO EM DESENVOLVIMENTO, PASSIVO DE               (\n");
    printf(")            FINALIZACAO POS ENTREGA ACADEMICA DE PROJETO,                  (\n");
    printf(")          VISTO QUE EXCEDE A QUANTIDADE DE MODULOS PROPOSTA                (\n");
    printf(")       E REPRESENTA UM AGRAVANTE PARA NAO CUMPRIMENTO DE ENTREGAS          (\n");
    printf(")                                 NO PRAZO.                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                           __________________________                      (\n");
    printf(")                          |    __________________    |                     (\n");
    printf(")                          |   | ****  ******** **|   |                     (\n");
    printf(")                          |   | @*************   |   |                     (\n");
    printf(")                          |   |        !         |   |                     (\n");
    printf(")                          |   |--------O---------|   |                     (\n");
    printf(")                          |__________________________|                     (\n");
    printf(")                                      |   |                                (\n");
    printf("|                                     /     \\                               |\n");
    printf("_____________________________________________________________________________\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

/*void tela_cadastro_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               CADASTRAR PLANOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF/CNPJ (somente numeros):                        {}\n");
    printf("{}                       Quantidade de equipamentos:                        {}\n");
    printf("{}                       Observacoes:                                       {}\n");
    printf("{}                       Periodicidade:                                     {}\n");
    printf("{}                       Data para visita:                                  {}\n");
    printf("{}                       Flexibilidade de data:                             {}\n");
    printf("{}                       Validade do plano (aaaa-mm-dd):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}*/
//Se anual data para visita marcar dia e mes, se mensal marcar dia, se semanal escrever o dia da semana  INSTRUCAO

void tela_exibe_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                 EM BREVE...                               |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")          23/09/2023.: MODULO EM DESENVOLVIMENTO, PASSIVO DE               (\n");
    printf(")            FINALIZACAO POS ENTREGA ACADEMICA DE PROJETO,                  (\n");
    printf(")          VISTO QUE EXCEDE A QUANTIDADE DE MODULOS PROPOSTA                (\n");
    printf(")       E REPRESENTA UM AGRAVANTE PARA NAO CUMPRIMENTO DE ENTREGAS          (\n");
    printf(")                                 NO PRAZO.                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                           __________________________                      (\n");
    printf(")                          |    __________________    |                     (\n");
    printf(")                          |   | ****  ******** **|   |                     (\n");
    printf(")                          |   | @*************   |   |                     (\n");
    printf(")                          |   |        !         |   |                     (\n");
    printf(")                          |   |--------O---------|   |                     (\n");
    printf(")                          |__________________________|                     (\n");
    printf(")                                      |   |                                (\n");
    printf("|                                     /     \\                               |\n");
    printf("_____________________________________________________________________________\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

/*void tela_exibe_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 EXIBIR PLANOS                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de adesao de plano                    {}\n");
    printf("{}                   para exibir (periodicidade+CPF/CNPJ):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}*/

void tela_atualiza_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                 EM BREVE...                               |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")          23/09/2023.: MODULO EM DESENVOLVIMENTO, PASSIVO DE               (\n");
    printf(")            FINALIZACAO POS ENTREGA ACADEMICA DE PROJETO,                  (\n");
    printf(")          VISTO QUE EXCEDE A QUANTIDADE DE MODULOS PROPOSTA                (\n");
    printf(")       E REPRESENTA UM AGRAVANTE PARA NAO CUMPRIMENTO DE ENTREGAS          (\n");
    printf(")                                 NO PRAZO.                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                           __________________________                      (\n");
    printf(")                          |    __________________    |                     (\n");
    printf(")                          |   | ****  ******** **|   |                     (\n");
    printf(")                          |   | @*************   |   |                     (\n");
    printf(")                          |   |        !         |   |                     (\n");
    printf(")                          |   |--------O---------|   |                     (\n");
    printf(")                          |__________________________|                     (\n");
    printf(")                                      |   |                                (\n");
    printf("|                                     /     \\                               |\n");
    printf("_____________________________________________________________________________\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

/*void tela_atualiza_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               ATUALIZAR PLANOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de adesao de plano                    {}\n");
    printf("{}                  para atualizar (periodicidade+CPF/CNPJ):                {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}*/

void tela_deleta_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                 EM BREVE...                               |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")          23/09/2023.: MODULO EM DESENVOLVIMENTO, PASSIVO DE               (\n");
    printf(")            FINALIZACAO POS ENTREGA ACADEMICA DE PROJETO,                  (\n");
    printf(")          VISTO QUE EXCEDE A QUANTIDADE DE MODULOS PROPOSTA                (\n");
    printf(")       E REPRESENTA UM AGRAVANTE PARA NAO CUMPRIMENTO DE ENTREGAS          (\n");
    printf(")                                 NO PRAZO.                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                           __________________________                      (\n");
    printf(")                          |    __________________    |                     (\n");
    printf(")                          |   | ****  ******** **|   |                     (\n");
    printf(")                          |   | @*************   |   |                     (\n");
    printf(")                          |   |        !         |   |                     (\n");
    printf(")                          |   |--------O---------|   |                     (\n");
    printf(")                          |__________________________|                     (\n");
    printf(")                                      |   |                                (\n");
    printf("|                                     /     \\                               |\n");
    printf("_____________________________________________________________________________\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

/*void tela_deleta_planos(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                DELETAR PLANOS                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de adesao de plano                    {}\n");
    printf("{}                  para deletar (periodicidade+CPF/CNPJ):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}*/