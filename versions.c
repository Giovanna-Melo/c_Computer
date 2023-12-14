#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "op_modulo_atend.h"
#include "op_modulo_planos.h"
#include "op_modulo_func.h"
#include "op_modulo_equipes.h"
#include "relatorios.h"
#include "utilidades.h"

#define true 1
#define false 0

// Assinatura das funcoes

char menu_principal(void);

char menu_sobre(void);
void menu_criacao(void); 
void menu_instrucoes(void);

void op_clientes(void);
void op_atendimentos(void);
void op_funcionarios(void); 
void op_relatorios(void);
void op_sobre(void); 


// Funcoes

char menu_principal(void)
{
    char op1_list [11];
    char op1;
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU PRINCIPAL                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("|                                                                            |\n");
    printf("|                               1. CLIENTES                                  |\n");
    printf("|                               2. ATENDIMENTOS                              |\n");
    printf("|                               3. FUNCIONARIOS                              |\n");
    printf("|                               4. RELATORIOS                                |\n");
    printf("|                               5. SOBRE                                     |\n");
    printf("|                               0. SAIR                                      |\n");
    printf("|                                                                            |\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op1_list, 11, stdin);
    if (strlen(op1_list) == 2) {
        op1 = op1_list[0];
    } else {
        op1 = 'a';
    }
    return op1;
}

char menu_sobre(void)
{
    char op2;
    char op2_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                   MENU SOBRE                                 \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                               1. CRIACAO                                 {]\n");
    printf("{}                               2. INSTRUCOES                              {}\n");
    printf("{}                               0. VOLTAR                                  {}\n");
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

void menu_criacao(void) 
{
    system("clear||cls");
    printf("\n");
    printf(" ___________________________________________________________________________\n");
    printf("|                                 CRIACAO                                   |\n");
    printf(" ---------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")                                                                           (\n");
    printf(")     O c_Computer e um sistema de gestao para empresa de manutencao de     (\n");
    printf(")   computadores. Esse sistema foi desenvolvido em linguagem C e projeta    (\n");
    printf(")    o registro de clientes, atendimentos e funcionarios e a emissao de     (\n");
    printf(")                                relatorios.                                (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")     *Projeto submetido a avaliacao institucional, possuindo valor         (\n");
    printf(")     academico  para o componente curricular DCT1106 - Programacao         (\n");
    printf(")         do curso Sistemas de Informacao da Universidade Federal           (\n");
    printf(")               do Rio Grande do Norte Campus Caico (CERES).                (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")               Desenvolvido por: Giovanna Kailany de Melo                  (\n");
    printf(")               Colaboradores: Flavius Gorgonio, Marlison                   (\n");
    printf(")               Soares, Beatriz Costa e chatGPT.                            (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
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
    printf(" ---------------------------------------------------------------------------\n\n");
    printf("Tecle ENTER para continuar");
    getchar();

}

void menu_instrucoes(void) 
{
    system("clear||cls");
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                INSTRUCOES                                 |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")        19/08/2023.: TELA DE DESENVOLVIMENTO SIMULTANEO AO PROJETO         (\n");
    printf(")                                                                           (\n");
    printf(")          * Padronize uma forma de escrita, atentando a nao inserir        (\n");
    printf(")          acentos em nenhum dado;                                          (\n");
    printf(")          * Para realizar um atendimento e necessario ja ter cadastrado    (\n");
    printf(")          o cliente, bem como algum funcionario ou equipe;                 (\n");
    printf(")          * Ha um limite de 11 caracteres para o nome da equipe;           (\n");
    printf(")          * Ha um limite de 20 membros por equipe;                         (\n");
    printf(")          * Por ter quantidade de integrantes definida no cadastro de      (\n");
    printf(")          equipe, so e possivel trocar um integrante por outro             (\n");
    printf(")          funcionario ou deletar a equipe inteira;                         (\n");
    printf(")                                                                           (\n");    
    printf("|___________________________________________________________________________|\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

// NAVEGACAO
// CLIENTES

void op_clientes(void) 
{
	char op2;
	do 
    {
		op2 = menu_clientes();
		switch(op2) 
        {
			case '1':
            modulo_cli();
			break;
		} 		
	} while (op2 != '0');
}

// ATENDIMENTOS

void op_atendimentos(void) 
{
	char op2;
	do 
    {
		op2 = menu_atendimentos();
		switch(op2) 
        {
			case '1': 
            modulo_atend();
			break;

			case '2': 
            modulo_planos();
			break;
		} 		
	} while (op2 != '0');
}

// FUNCIONARIOS

void op_funcionarios(void) 
{
	char op2;
	do 
    {
		op2 = menu_funcionarios();
		switch(op2) 
        {
			case '1': 
            modulo_func();
			break;

			case '2': 	
            modulo_equipes();
			break;

            case '3':
            z_cont();
            break;
		} 		
	} while (op2 != '0');
}

// RELATORIOS

void op_relatorios(void) 
{
	char op2;
	do 
    {
		op2 = menu_relatorios();
		switch(op2) 
        {
			case '1': 
            f_clientes();
			break;

			case '2': 
            f_atendimentos();
			break;

            case '3': 
            f_planos();
            break;

            case '4': 
            f_funcionarios();
            break;

            case '5': 
            f_equipes();
            break;
		} 		
	} while (op2 != '0');
}

// SOBRE

void op_sobre(void) 
{
	char op2;
	do 
    {
		op2 = menu_sobre();
		switch(op2) 
        {
			case '1': 
            menu_criacao();
			break;

			case '2': 
            menu_instrucoes();
			break;
		} 		
	} while (op2 != '0');
}

// PROGRAMA PRINCIPAL

int main(void)
{
    char op1;
	do 
    {
		op1 = menu_principal();
        switch(op1) 
        {
            case '1': 	
            op_clientes();
            break;

            case '2': 	
            op_atendimentos();
            break;

            case '3': 	
            op_funcionarios();
            break;

            case '4': 	
            op_relatorios();
            break;

            case '5': 	
            op_sobre();
            break;
                    }
	} while (op1 != '0');
    printf("Ate logo!");
    return 0;
}