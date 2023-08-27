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
    printf("                                MENU FUNCIONÁRIOS                             \n");
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
    printf("                                MENU RELATÓRIOS                               \n");
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
    printf("{}                       CPF (somente números):                             {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente números):                        {}\n");
    printf("{}                       Endereço:                                          {}\n");
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
    printf("{}                     Digite o CPF (somente números):                      {}\n");
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
    printf("{}                     Digite o CPF (somente números):                      {}\n");
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
    printf("{}                     Digite o CPF (somente números):                      {}\n");
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
    printf("{}                       CNPJ (somente números):                            {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente números):                        {}\n");
    printf("{}                       Endereço:                                          {}\n");
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
    printf("{}                       Digite o CNPJ (somente números):                   {}\n");
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
    printf("{}                       Digite o CNPJ (somente números):                   {}\n");
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
    printf("{}                       Digite o CNPJ (somente números):                   {}\n");
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
    printf("{}                       CPF (somente números):                             {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       Número de série:                                   {}\n");
    printf("{}                       Observações:                                       {}\n");
    printf("{}                       Previsão de entrega:                               {}\n");
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
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                   para exibir (situação+CPF+ordem):                      {}\n");
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
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                   para exibir (situação+CPF+ordem):                      {}\n");
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
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                   para exibir (situação+CPF+ordem):                      {}\n");
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
    printf("{}                       CPF/CNPJ (somente números):                        {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       Número de série:                                   {}\n");
    printf("{}                       Observações:                                       {}\n");
    printf("{}                       Data de visita:                                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void exibe_atendl(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("                                   IN LOCO                                    \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                para exibir (situação+CPF/CNPJ+ordem):                    {}\n");
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
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                para exibir (situação+CPF/CNPJ+ordem):                    {}\n");
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
    printf("{}                    Digite o código de atendimento                        {}\n");
    printf("{}                para exibir (situação+CPF/CNPJ+ordem):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void cadastro_planos(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               CADASTRAR PLANOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF/CNPJ (somente números):                        {}\n");
    printf("{}                       Quantidade de equipamentos:                        {}\n");
    printf("{}                       Observações:                                       {}\n");
    printf("{}                       Periodicidade:                                     {}\n");
    printf("{}                       Data para visita:                                  {}\n");
    printf("{}                       Flexibilidade de data:                             {}\n");
    printf("{}                       Validade do plano (aaaa-mm-dd):                    {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}
//Se anual data para visita marcar dia e mês, se mensal marcar dia, se semanal escrever o dia da semana  INSTRUÇÃO

void exibe_planos(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 EXIBIR PLANOS                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o código de adesão de plano                    {}\n");
    printf("{}                   para exibir (periodicidade+CPF/CNPJ):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void atualiza_planos(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               ATUALIZAR PLANOS                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o código de adesão de plano                    {}\n");
    printf("{}                  para atualizar (periodicidade+CPF/CNPJ):                {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

void deleta_planos(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                DELETAR PLANOS                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o código de adesão de plano                    {}\n");
    printf("{}                  para deletar (periodicidade+CPF/CNPJ):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("\n");
}

//telas crud plano in módulo 2 atendimento
//módulo funcionários and relatórios

void menu_sobre(void)
{
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                   MENU SOBRE                                 \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                               1. CRIAÇÃO                                 {]\n");
    printf("{}                               2. INSTRUÇÕES                              {}\n");
    printf("{}                               0. VOLTAR                                  {}\n");
    printf("{}                                                                          {}\n");
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
    printf(")          Padronize uma forma de escrita;                                  (\n");//detalhar mais dps
    printf(")                                                                           (\n");    
    printf("|___________________________________________________________________________|\n");

}

// ADICIONAR A CADA MENU NO PROGRAMA PRINCIPAL DEPOIS DE TER PASSADO DA ETAPA DE NAVEGAÇÃO DOS MÓDULOS ANTES DA CHAMADA DO PADRAO_CRUD
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
    cadastro_planos();
    exibe_planos();
    atualiza_planos();
    deleta_planos();
    padrao_crud();
    menu_sobre();
    menu_criacao();
    menu_instrucoes();
    
    return 0;
}