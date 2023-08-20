#include <stdio.h>
#include <locale.h>
// Funções

void menu_principal(void) 
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU PRINCIPAL                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("|                                                                            |\n");
    printf("|                               1. CLIENTES                                  |\n");
    printf("|                               2. ATENDIMENTOS                              |\n");
    printf("|                               3. FUNCIONÁRIOS                              |\n");
    printf("|                               4. RELATÓRIOS                                |\n");
    printf("|                               5. SOBRE                                     |\n");
    printf("|                               0. SAIR                                      |\n");
    printf("|                                                                            |\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");

}

void menu_sobre(void)
{
        printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                   MENU SOBRE                                 \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("|                                                                            |\n");
    printf("|                               1. CRIAÇÃO                                   |\n");
    printf("|                               2. INSTRUÇÕES                                |\n");
    printf("|                               0. VOLTAR                                    |\n");
    printf("|                                                                            |\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
}

void menu_criacao(void) 
{
    printf("\n");
    printf(" ___________________________________________________________________________\n");
    printf("|                                 CRIAÇÃO                                   |\n");
    printf(" ---------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")                                                                           (\n");
    printf(")     O c_Computer é um sistema de gestão para empresa de manutenção de     (\n");
    printf(")   computadores. Esse sistema foi desenvolvido em linguagem C e projeta    (\n");
    printf(")    o registro de clientes, atendimentos e funcionários e a emissão de     (\n");
    printf(")                                relatórios                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")     *Projeto submetido à avaliação institucional, possuindo valor         (\n");
    printf(")     acadêmico  para o componente curricular DCT1106 - Programação         (\n");
    printf(")         do curso Sistemas de Informação da Universidade Federal           (\n");
    printf(")               do Rio Grande do Norte Campus Caicó (CERES).                (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")               Desenvolvido por: Giovanna Kailany de Melo                  (\n");
    printf(")               Colaboradores:                                              (\n");
    printf(")               Referências:                                                (\n");
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
    printf(" ---------------------------------------------------------------------------\n");

}

void menu_instrucoes(void) 
{
    printf("\n");
    printf("_____________________________________________________________________________\n");
    printf("|                                INSTRUÇÕES                                 |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")        19/08/2023.: TELA DE DESENVOLVIMENTO SIMULTÂNEO AO PROJETO         (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");    
    printf("|___________________________________________________________________________|\n");

}
// Programa principal

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    menu_principal();
    menu_sobre();
    menu_criacao();
    menu_instrucoes();
    
    return 0;
}