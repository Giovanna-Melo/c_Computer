////////////////////////////////RELATORIOS///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorios.h"
#include "op_modulo_cli.h"
#include "op_modulo_func.h"
#include "op_modulo_equipes.h"
#include "op_modulo_atend.h"
#include "utilidades.h"

void f_clientes(void) 
{
	char op3;
	do 
    {
		op3 = filtros_clientes();
		switch(op3) 
        {
            case '1': 
            todos_clientes();
            break;

			case '2': 
            todos_clientes_pf();
            break;

			case '3': 
            todos_clientes_pj();
            break;

			case '4': 
            atendimentos_do_cliente();
            break;
        } 		
	} while (op3 != '0');
}

void f_atendimentos(void) 
{
	char op3;
	do 
    {
		op3 = filtros_atendimentos();
		switch(op3) 
        {
			case '1': 	
            atendimentos_ord_mais_antigos();
            break;

			case '2': 	
            atendimentos_ord_mais_recentes();
            break;

			case '3': 	
            atendimentos_concluidos();
            break;

			case '4': 
            atendimentos_pendentes();
            break;            
		} 		
	} while (op3 != '0');
}
                
void f_planos(void) 
{
	char op3;
	do 
    {
		op3 = filtros_planos();
		switch(op3) 
        {
			case '1': 	
            planos_semanais();
            break;

			case '2': 	
            planos_mensais();
            break;

            case '3': 	
            planos_anuais();
            break;

            case '4': 	
            planos_vencidos();
            break;
            
        } 		
	} while (op3 != '0');
}

void f_funcionarios(void) 
{
	char op3;
	do 
    {
		op3 = filtros_func();
		switch(op3) 
        {
			case '1': 	
            todos_funcionarios();
            break;

			case '2':
            funcionario_do_mes();
            break;

			case '3': 
            atendimentos_do_funcionario();
            break;            
		} 		
	} while (op3 != '0');
}

void f_equipes(void) 
{
	char op3;
	do 
    {
		op3 = filtros_equipes();
		switch(op3) 
        {
			case '1': 	
            todas_equipes();
            break;

			case '2': 	
            equipe_do_mes();
            break; 

			case '3': 
            atendimentos_da_equipe();
            break;           
		} 		
	} while (op3 != '0');
}

char menu_relatorios(void)
{
    char op2;
    char op2_list [11];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU RELATORIOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CLIENTES                                 {}\n");
    printf("{}                              2. ATENDIMENTOS                             {}\n");
    printf("{}                              3. PLANOS                                   {}\n");
    printf("{}                              4. FUNCIONARIOS                             {}\n");
    printf("{}                              5. EQUIPES                                  {}\n");
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
void todos_clientes (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS OS CLIENTES\n\n");
    lista_all_cli();
    printf("Tecle ENTER para continuar");
    getchar();
}

void todos_clientes_pf (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS OS CLIENTES PF\n\n");
    lista_pf();
    printf("Tecle ENTER para continuar");
    getchar();
}

void todos_clientes_pj (void)
{
    system("clear||cls");
    printf("\n");	
    printf("TODOS OS CLIENTES PJ\n\n");
    lista_pj();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_do_cliente (void) //.h
{
    system("clear||cls");
    printf("\n");	
    printf("BUSCA DOS ATENDIMENTOS POR CLIENTE\n\n");
    exibe_atendimentos_cli();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_ord_mais_antigos (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS ATENDIMENTOS\n");
    printf("ORDENAR: MAIS ANTIGOS\n\n");
    lista_atend_ant();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_ord_mais_recentes (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS ATENDIMENTOS\n\n");
    printf("ORDENAR: MAIS RECENTES\n");
    //lista_atend_rec(); //DESENVOLVER LISTA DINAMICA INVERSA
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_concluidos (void)
{
    system("clear||cls");
    printf("\n");
    printf("ATENDIMENTOS CONCLUIDOS\n");
    printf("ORDENAR: MAIS ANTIGOS\n\n");
    lista_atendc();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_pendentes (void)
{	
    system("clear||cls");
    printf("\n");
    printf("ATENDIMENTOS PENDENTES\n");
    printf("ORDENAR: MAIS ANTIGOS\n\n");
    lista_atendp();
    printf("Tecle ENTER para continuar");
    getchar();
}

void em_desenvolvimento (void)
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

void planos_semanais (void)
{
    em_desenvolvimento();
    /*system("clear||cls");
    printf("\n");
    printf("PLANOS SEMANAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();*/
}
void planos_mensais (void)
{	
    em_desenvolvimento ();
    /*system("clear||cls");
    printf("\n");
    printf("PLANOS MENSAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();*/
}
void planos_anuais (void)
{	
    em_desenvolvimento();
    /*system("clear||cls");
    printf("\n");
    printf("PLANOS ANUAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();*/
}
void planos_vencidos (void)
{
    em_desenvolvimento();
    /*system("clear||cls");
    printf("\n");
    printf("PLANOS VENCIDOS\n");
    printf("Tecle ENTER para continuar");
    getchar();*/
}

void todos_funcionarios (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS OS FUNCIONARIOS\n");
    lista_all_func();
    printf("Tecle ENTER para continuar");
    getchar();
}

void funcionario_do_mes (void)
{
    system("clear||cls");
    printf("\n");
    printf("FUNCIONARIO DO MES\n");
    lista_month_func();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_do_funcionario (void) //.h
{
    system("clear||cls");
    printf("\n");	
    printf("BUSCA DOS ATENDIMENTOS POR FUNCIONARIO\n\n");
    exibe_atendimentos_func();
    printf("Tecle ENTER para continuar");
    getchar();
}

void todas_equipes (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODAS AS EQUIPES\n");
    lista_all_equipes();
    printf("Tecle ENTER para continuar");
    getchar();
}

void equipe_do_mes (void)
{
    system("clear||cls");
    printf("\n");
    printf("EQUIPES DO MES\n");
    lista_month_eqp();
    printf("Tecle ENTER para continuar");
    getchar();
}

void atendimentos_da_equipe (void) //.h
{
    system("clear||cls");
    printf("\n");	
    printf("BUSCA DOS ATENDIMENTOS POR EQUIPE\n\n");
    exibe_atendimentos_eqp();
    printf("Tecle ENTER para continuar");
    getchar();
}

//TELAS
char filtros_clientes(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("                          _______________________                             \n");
    printf("                         /           O           \\                            \n");
    printf(" _______________________/                         \\__________________________ \n");    
    printf("|  ____________________|                           |_______________________ | \n");
    printf("| |                    |___________________________|                      | | \n");    
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                     FILTROS RELATORIO CLIENTES                        | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                1. TODOS OS CLIENTES                                   | | \n");
    printf("| |                2. TODOS OS CLIENTES PF                                | | \n"); 
    printf("| |                3. TODOS OS CLIENTES PJ                                | | \n");
    printf("| |                4. ATENDIMENTOS DO CLIENTE                             | | \n");  
    printf("| |                0. VOLTAR                                              | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                    __________________________                         | | \n");
    printf("| |                   |    __________________    |                        | | \n");
    printf("| |                   |   | ****  ******** **|   |                        | | \n"); 
    printf("| |                   |   | @*************   |   |                        | | \n"); 
    printf("| |                   |   |        !         |   |                        | | \n");
    printf("| |                   |   |--------O---------|   |                        | | \n"); 
    printf("| |                   |__________________________|                        | | \n");
    printf("| |                              |   |                                    | | \n"); 
    printf("| |_____________________________/     \\___________________________________| | \n");
    printf("|___________________________________________________________________________| \n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;

}

char filtros_atendimentos(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("                          _______________________                             \n");
    printf("                         /           O           \\                            \n");
    printf(" _______________________/                         \\__________________________ \n");    
    printf("|  ____________________|                           |______________________  | \n");
    printf("| |                    |___________________________|                      | | \n");    
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                   FILTROS RELATORIO ATENDIMENTOS                      | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                1. ATENDIMENTOS (ORDENAR: MAIS ANTIGOS)                | | \n");
    printf("| |                2. ATENDIMENTOS (ORDENAR: MAIS RECENTES)               | | \n");
    printf("| |                3. ATENDIMENTOS CONCLUIDOS                             | | \n"); 
    printf("| |                4. ATENDIMENTOS PENDENTES                              | | \n"); 
    printf("| |                0. VOLTAR                                              | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                    __________________________                         | | \n");
    printf("| |                   |    __________________    |                        | | \n");
    printf("| |                   |   | ****  ******** **|   |                        | | \n"); 
    printf("| |                   |   | @*************   |   |                        | | \n"); 
    printf("| |                   |   |        !         |   |                        | | \n");
    printf("| |                   |   |--------O---------|   |                        | | \n"); 
    printf("| |                   |__________________________|                        | | \n");
    printf("| |                              |   |                                    | | \n"); 
    printf("| |_____________________________/     \\___________________________________| | \n");
    printf("|___________________________________________________________________________| \n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;
    
}

char filtros_planos(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("                          _______________________                             \n");
    printf("                         /           O           \\                            \n");
    printf(" _______________________/                         \\__________________________ \n");    
    printf("|  ____________________|                           |______________________  | \n");
    printf("| |                    |___________________________|                      | | \n");    
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                       FILTROS RELATORIO PLANOS                        | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                1. PLANOS SEMANAIS                                     | | \n"); 
    printf("| |                2. PLANOS MENSAIS                                      | | \n");
    printf("| |                3. PLANOS ANUAIS                                       | | \n"); 
    printf("| |                4. PLANOS VENCIDOS                                     | | \n");
    printf("| |                0. VOLTAR                                              | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                    __________________________                         | | \n");
    printf("| |                   |    __________________    |                        | | \n");
    printf("| |                   |   | ****  ******** **|   |                        | | \n"); 
    printf("| |                   |   | @*************   |   |                        | | \n"); 
    printf("| |                   |   |        !         |   |                        | | \n");
    printf("| |                   |   |--------O---------|   |                        | | \n"); 
    printf("| |                   |__________________________|                        | | \n");
    printf("| |                              |   |                                    | | \n"); 
    printf("| |_____________________________/     \\___________________________________| | \n");
    printf("|___________________________________________________________________________| \n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;    
}

char filtros_func(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("                          _______________________                             \n");
    printf("                         /           O           \\                            \n");
    printf(" _______________________/                         \\__________________________ \n");    
    printf("|  ____________________|                           |______________________  | \n");
    printf("| |                    |___________________________|                      | | \n");    
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                   FILTROS RELATORIO FUNCIONARIOS                      | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                1. TODOS OS FUNCIONARIOS                               | | \n"); 
    printf("| |                2. FUNCIONARIO DO MES                                  | | \n");
    printf("| |                3. ATENDIMENTOS DO FUNCIONARIO                         | | \n");
    printf("| |                0. VOLTAR                                              | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                    __________________________                         | | \n");
    printf("| |                   |    __________________    |                        | | \n");
    printf("| |                   |   | ****  ******** **|   |                        | | \n"); 
    printf("| |                   |   | @*************   |   |                        | | \n"); 
    printf("| |                   |   |        !         |   |                        | | \n");
    printf("| |                   |   |--------O---------|   |                        | | \n"); 
    printf("| |                   |__________________________|                        | | \n");
    printf("| |                              |   |                                    | | \n"); 
    printf("| |_____________________________/     \\___________________________________| | \n");
    printf("|___________________________________________________________________________| \n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;    
}

char filtros_equipes(void)
{
    char op3;
    char op3_list [11];
    system("clear||cls");
    printf("\n");
    printf("                          _______________________                             \n");
    printf("                         /           O           \\                            \n");
    printf(" _______________________/                         \\__________________________ \n");    
    printf("|  ____________________|                           |______________________  | \n");
    printf("| |                    |___________________________|                      | | \n");    
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n");
    printf("| |                     FILTROS RELATORIO EQUIPES                         | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");  
    printf("| |                1. TODAS AS EQUIPES                                    | | \n"); 
    printf("| |                2. EQUIPE DO MES                                       | | \n");
    printf("| |                3. ATENDIMENTOS DA EQUIPE                              | | \n");
    printf("| |                0. VOLTAR                                              | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                                                                       | | \n");
    printf("| |                                                                       | | \n"); 
    printf("| |                    __________________________                         | | \n");
    printf("| |                   |    __________________    |                        | | \n");
    printf("| |                   |   | ****  ******** **|   |                        | | \n"); 
    printf("| |                   |   | @*************   |   |                        | | \n"); 
    printf("| |                   |   |        !         |   |                        | | \n");
    printf("| |                   |   |--------O---------|   |                        | | \n"); 
    printf("| |                   |__________________________|                        | | \n");
    printf("| |                              |   |                                    | | \n"); 
    printf("| |_____________________________/     \\___________________________________| | \n");
    printf("|___________________________________________________________________________| \n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    fgets (op3_list, 11, stdin);
    if (strlen(op3_list) == 2) {
        op3 = op3_list[0];
    } else {
        op3 = 'a';
    }
    return op3;
}