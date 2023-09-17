////////////////////////////////RELATORIOS///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "relatorios.h"
//#include "utilidades.h"

void f_clientes(void) 
{
	char op3;
	do 
    {
		op3 = filtros_clientes();
		switch(op3) 
        {
			case '1': 
            todos_clientes_pf();
            break;
			case '2': 
            todos_clientes_pj();
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
            atendimentos_concluidos();
            break;
			case '2': 
            atendimentos_loco_concluidos();
            break;
            case '3': 	
            atendimentos_pendentes();
            break;
            case '4': 	
            atendimentos_loco_pendentes();
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
		} 		
	} while (op3 != '0');
}

char menu_relatorios(void)
{
    char op2;
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
    scanf("%c", &op2);
    getchar();
    return op2;
}

//FUNCOES EM DESENVOLVIMENTO
void todos_clientes_pf (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS OS CLIENTES PF\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void todos_clientes_pj (void)
{
    system("clear||cls");
    printf("\n");	
    printf("TODOS OS CLIENTES PJ\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void atendimentos_concluidos (void)
{
    system("clear||cls");
    printf("\n");
    printf("ATENDIMENTOS CONCLUIDOS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void atendimentos_loco_concluidos (void)
{
    system("clear||cls");
    printf("\n");	
    printf("ATENDIMENTOS IN LOCO CONCLUIDOS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void atendimentos_pendentes (void)
{	
    system("clear||cls");
    printf("\n");
    printf("ATENDIMENTOS PENDENTES\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void atendimentos_loco_pendentes (void)
{
    system("clear||cls");
    printf("\n");
    printf("ATENDIMENTOS IN LOCO PENDENTES\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void planos_semanais (void)
{
    system("clear||cls");
    printf("\n");
    printf("PLANOS SEMANAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void planos_mensais (void)
{	
    system("clear||cls");
    printf("\n");
    printf("PLANOS MENSAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void planos_anuais (void)
{	
    system("clear||cls");
    printf("\n");
    printf("PLANOS ANUAIS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void planos_vencidos (void)
{
    system("clear||cls");
    printf("\n");
    printf("PLANOS VENCIDOS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void todos_funcionarios (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODOS OS FUNCIONARIOS\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void funcionario_do_mes (void)
{
    system("clear||cls");
    printf("\n");
    printf("FUNCIONARIO DO MES\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
void todas_equipes (void)
{
    system("clear||cls");
    printf("\n");
    printf("TODAS AS EQUIPES\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void equipe_do_mes (void)
{
    system("clear||cls");
    printf("\n");
    printf("EQUIPES DO MES\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

//TELAS
char filtros_clientes(void)
{
    char op3;
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
    printf("| |                1. TODOS OS CLIENTES PF                                | | \n"); 
    printf("| |                2. TODOS OS CLIENTES PJ                                | | \n"); 
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
    scanf("%c", &op3);
    getchar();
    return op3;

}

char filtros_atendimentos(void)
{
    char op3;
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
    printf("| |                1. ATENDIMENTOS CONCLUIDOS                             | | \n"); 
    printf("| |                2. ATENDIMENTOS IN LOCO CONCLUIDOS                     | | \n");
    printf("| |                3. ATENDIMENTOS PENDENTES                              | | \n"); 
    printf("| |                4. ATENDIMENTOS IN LOCO PENDENTES                      | | \n");
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
    scanf("%c", &op3);
    getchar();
    return op3;
    
}

char filtros_planos(void)
{
    char op3;
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
    printf("| |                2. PLLANOS MENSAIS                                     | | \n");
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
    scanf("%c", &op3);
    getchar();
    return op3;    
}

char filtros_func(void)
{
    char op3;
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
    scanf("%c", &op3);
    getchar();
    return op3;    
}

char filtros_equipes(void)
{
    char op3;
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
    scanf("%c", &op3);
    getchar();
    return op3;
}