#include <stdio.h>
#include <locale.h>
// Fun��es

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
    printf("|                               3. FUNCION�RIOS                              |\n");
    printf("|                               4. RELAT�RIOS                                |\n");
    printf("|                               5. SOBRE                                     |\n");
    printf("|                               0. SAIR                                      |\n");
    printf("|                                                                            |\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");

}

void menu_clientes(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 MENU CLIENTES                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CLIENTES PF                              {}\n");
    printf("{}                              2. CLIENTES PJ                              {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
   
}

void menu_atendimentos(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU ATENDIMENTOS                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. ATENDIMENTO                              {}\n");
    printf("{}                              2. ATENDIMENTO IN LOCO                      {}\n");
    printf("{}                              3. PLANOS                                   {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
}

void menu_funcionarios(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU FUNCION�RIOS                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CLIENTES PF                              {}\n");
    printf("{}                              2. CLIENTES PJ                              {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
}

void menu_relatorios(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU RELAT�RIOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. CLIENTES PF                              {}\n");
    printf("{}                              2. CLIENTES PJ                              {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
}
void padrao_crud(void)
{
    printf("\n");
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
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");

}

void cadastro_pf(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR CLIENTES PF                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Nome:                                              {}\n");
    printf("{}                       CPF (somente n�meros):                             {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente n�meros):                        {}\n");
    printf("{}                       Endere�o:                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void exibe_pf(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR CLIENTES PF                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente n�meros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void atualiza_pf(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR CLIENTES PF                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente n�meros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void deleta_pf(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR CLIENTES PF                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente n�meros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void cadastro_pj(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR CLIENTES PJ                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Nome:                                              {}\n");
    printf("{}                       CNPJ (somente n�meros):                            {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente n�meros):                        {}\n");
    printf("{}                       Endere�o:                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void exibe_pj(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              EXIBIR CLIENTES PJ                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente n�meros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void atualiza_pj(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR CLIENTES PJ                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente n�meros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void deleta_pj(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR CLIENTES PJ                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente n�meros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void cadastro_atendc(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF (somente n�meros):                             {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       N�mero de s�rie:                                   {}\n");
    printf("{}                       Observa��es:                                       {}\n");
    printf("{}                       Previs�o de entrega:                               {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void exibe_atendc(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                   para exibir (situa��o+CPF+ordem):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void atualiza_atendc(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                   para exibir (situa��o+CPF+ordem):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void deleta_atendc(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                   para exibir (situa��o+CPF+ordem):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void cadastro_atendl(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF/CNPJ (somente n�meros):                        {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       N�mero de s�rie:                                   {}\n");
    printf("{}                       Observa��es:                                       {}\n");
    printf("{}                       Data de visita:                                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

//telas crud plano in m�dulo 2 atendimento
//m�dulo funcion�rios and relat�rios
void exibe_atendl(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                para exibir (situa��o+CPF/CNPJ+ordem):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void atualiza_atendl(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                para exibir (situa��o+CPF/CNPJ+ordem):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void deleta_atendl(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o c�digo de atendimento                        {}\n");
    printf("{}                para exibir (situa��o+CPF/CNPJ+ordem):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void menu_sobre(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                   MENU SOBRE                                 \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                               1. CRIA��O                                 {]\n");
    printf("{}                               2. INSTRU��ES                              {}\n");
    printf("{}                               0. VOLTAR                                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
}

void menu_criacao(void) 
{
    printf("\n");
    printf(" ___________________________________________________________________________\n");
    printf("|                                 CRIA��O                                   |\n");
    printf(" ---------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")                                                                           (\n");
    printf(")     O c_Computer � um sistema de gest�o para empresa de manuten��o de     (\n");
    printf(")   computadores. Esse sistema foi desenvolvido em linguagem C e projeta    (\n");
    printf(")    o registro de clientes, atendimentos e funcion�rios e a emiss�o de     (\n");
    printf(")                                relat�rios                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")     *Projeto submetido � avalia��o institucional, possuindo valor         (\n");
    printf(")     acad�mico  para o componente curricular DCT1106 - Programa��o         (\n");
    printf(")         do curso Sistemas de Informa��o da Universidade Federal           (\n");
    printf(")               do Rio Grande do Norte Campus Caic� (CERES).                (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")               Desenvolvido por: Giovanna Kailany de Melo                  (\n");
    printf(")               Colaboradores:                                              (\n");
    printf(")               Refer�ncias:                                                (\n");
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
    printf("|                                INSTRU��ES                                 |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("|                                                                           |\n");
    printf(")!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!(\n");
    printf(")        19/08/2023.: TELA DE DESENVOLVIMENTO SIMULT�NEO AO PROJETO         (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");    
    printf("|___________________________________________________________________________|\n");

}

// ADICIONAR A CADA MENU NO PROGRAMA PRINCIPAL DEPOIS DE TER PASSADO DA ETAPA DE NAVEGA��O DOS M�DULOS ANTES DA CHAMADA DO PADRAO_CRUD
//    printf("\n");
//    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
//    printf("{}                               MENU ALL NAMES                             {}\n");


// Programa principal

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    menu_principal();
    menu_clientes();
    cadastro_pf();
    exibe_pf();
    atualiza_pf();
    deleta_pf();
    cadastro_pj();
    exibe_pj();
    atualiza_pj();
    deleta_pj();
    menu_atendimentos();
    cadastro_atendc();
    exibe_atendc();
    atualiza_atendc();
    deleta_atendc();
    cadastro_atendl();
    exibe_atendl();
    atualiza_atendl();
    deleta_atendl();
    padrao_crud();
    menu_sobre();
    menu_criacao();
    menu_instrucoes();
    
    return 0;
}