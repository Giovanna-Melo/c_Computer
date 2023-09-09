#include <stdio.h>
#include <stdlib.h>

// Assinatura das funcoes

char menu_principal(void);

char menu_clientes(void);
void cadastro_pf(void);
void exibe_pf(void);
void atualiza_pf(void);
void deleta_pf(void);
void cadastro_pj(void);
void exibe_pj(void);
void atualiza_pj(void);
void deleta_pj(void);

char menu_atendimentos(void);
void cadastro_atendc(void);
void exibe_atendc(void);
void atualiza_atendc(void);
void deleta_atendc(void);
void cadastro_atendl(void);
void exibe_atendl(void);
void atualiza_atendl(void);
void deleta_atendl(void);
void cadastro_planos(void);
void exibe_planos(void);
void atualiza_planos(void);
void deleta_planos(void);

char menu_funcionarios(void);
void cadastro_func(void);
void exibe_func(void);
void atualiza_func(void);
void deleta_func(void);
void cadastro_equipe(void);
void exibe_equipe(void);
void atualiza_equipe(void);
void deleta_equipe(void);
char confirma_zcont(void);
void mostra_zcont(void);

char menu_relatorios(void);
char filtros_clientes(void);
char filtros_atendimentos(void);
char filtros_planos(void);
char filtros_func(void);
char filtros_equipes(void);

char padrao_crud(void);

char menu_sobre(void);
void menu_criacao(void); 
void menu_instrucoes(void);


void op_clientes(void); 
void modulo_pf(void); 
void modulo_pj(void);

void op_atendimentos(void); 
void modulo_atendc(void); 
void modulo_atendl(void); 
void modulo_planos(void);

void op_funcionarios(void); 
void modulo_func(void); 
void modulo_equipes(void); 
void z_cont(void);

void op_relatorios(void); 
void f_clientes(void); 
void f_atendimentos(void); 
void f_planos(void); 
void f_funcionarios(void); 
void f_equipes(void);

void op_sobre(void); 


// Funcoes

char menu_principal(void)
{
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
    scanf("%c", &op1);
    getchar();
    return op1;
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
    printf("{}                              1. CLIENTES PF                              {}\n");
    printf("{}                              2. CLIENTES PJ                              {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    scanf("%c", &op2);
    getchar();
    return op2;
}

char menu_atendimentos(void)
{
    char op2;
    system("clear||cls");
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
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    scanf("%c", &op2);
    getchar();
    return op2;
}

char menu_funcionarios(void)
{
    char op2;
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                MENU FUNCIONARIOS                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                              1. FUNCIONARIOS                             {}\n");
    printf("{}                              2. EQUIPES                                  {}\n");
    printf("{}                              3. ZERAR CONTADORES                         {}\n");
    printf("{}                              0. VOLTAR                                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    scanf("%c", &op2);
    getchar();
    return op2;
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

void cadastro_pf(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR CLIENTES PF                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Nome:                                              {}\n");
    printf("{}                       CPF (somente numeros):                             {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente numeros):                        {}\n");
    printf("{}                       Endereco:                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void exibe_pf(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR CLIENTES PF                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void atualiza_pf(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR CLIENTES PF                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void deleta_pf(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR CLIENTES PF                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void cadastro_pj(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR CLIENTES PJ                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Nome:                                              {}\n");
    printf("{}                       CNPJ (somente numeros):                            {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente numeros):                        {}\n");
    printf("{}                       Endereco:                                          {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void exibe_pj(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                              EXIBIR CLIENTES PJ                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente numeros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void atualiza_pj(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR CLIENTES PJ                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente numeros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void deleta_pj(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR CLIENTES PJ                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Digite o CNPJ (somente numeros):                   {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void cadastro_atendc(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       CPF (somente numeros):                             {}\n");
    printf("{}                       Nome do equipamento:                               {}\n");
    printf("{}                       Marca:                                             {}\n");
    printf("{}                       Modelo:                                            {}\n");
    printf("{}                       Numero de serie:                                   {}\n");
    printf("{}                       Observacoes:                                       {}\n");
    printf("{}                       Previsao de entrega:                               {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void exibe_atendc(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                   para exibir (situaaco+CPF+ordem):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void atualiza_atendc(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
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

void deleta_atendc(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                  para deletar (periodicidade+CPF/CNPJ):                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void cadastro_atendl(void)
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

void exibe_atendl(void)
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

void atualiza_atendl(void)
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

void deleta_atendl(void)
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

void cadastro_planos(void)
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
}
//Se anual data para visita marcar dia e mes, se mensal marcar dia, se semanal escrever o dia da semana  INSTRUCAO

void exibe_planos(void)
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
}

void atualiza_planos(void)
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
}

void deleta_planos(void)
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
}

void cadastro_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR FUNCIONARIO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Nome:                                              {}\n");
    printf("{}                       CPF (somente numeros):                             {}\n");
    printf("{}                       E-mail:                                            {}\n");
    printf("{}                       Telefone (somente numeros):                        {}\n");
    printf("{}                       Endereco:                                          {}\n");
    printf("{}                       Profissao:                                         {}\n");
    printf("{}                       Salario:                                           {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void exibe_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR FUNCIONaRIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void atualiza_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR FUNCIONARIO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void deleta_func(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR FUNCIONARIO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                     Digite o CPF (somente numeros):                      {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void cadastro_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                CADASTRAR EQUIPE                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                       Equipe:                                            {}\n");
    printf("{}                       Quantidade de participantes:                       {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}
// fazer o scanf da quantidade para solicitar o nome e o cpf de tantos func

void exibe_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                 EXIBIR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                  Equipe:                                 {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void atualiza_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               ATUALIZAR EQUIPE                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}          Equipe:                                                         {}\n");
    printf("{}          Digite o CPF do atual integrante (somente numeros):             {}\n");
    printf("{}          Digite o CPF do novo integrante (somente numeros):              {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

void deleta_equipe(void)
{
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                DELETAR EQUIPE                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                 Equipe:                                  {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

char confirma_zcont(void)
{
    char op3;
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                ZERAR CONTADORES                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                                 1. SIM                                   {}\n");
    printf("{}                                 0. VOLTAR                                {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Selecione o servico desejado, informando seu digito correspondente:");
    scanf("%c", &op3);
    getchar();
    return op3;
}

void mostra_zcont(void)
{
    system("clear||cls");
    printf("\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    printf("{}                             CONTADORES ZERADOS                           {}\n");
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Tecle ENTER para continuar");
    getchar();
}

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

char menu_sobre(void)
{
    char op2;
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
    scanf("%c", &op2);
    getchar();
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
    printf(")                                relatorios                                 (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")     *Projeto submetido a avaliacao institucional, possuindo valor         (\n");
    printf(")     academico  para o componente curricular DCT1106 - Programacao         (\n");
    printf(")         do curso Sistemas de Informacao da Universidade Federal           (\n");
    printf(")               do Rio Grande do Norte Campus Caico (CERES).                (\n");
    printf(")                                                                           (\n");
    printf(")                                                                           (\n");
    printf(")               Desenvolvido por: Giovanna Kailany de Melo                  (\n");
    printf(")               Colaboradores:                                              (\n");
    printf(")               Referencias:                                                (\n");
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
    printf(")          Padronize uma forma de escrita;                                  (\n");//detalhar mais dps
    printf(")          Por ter quantidade de integrantes definida no cadastro de        (\n");
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
            modulo_pf();
			break;
			case '2': 	
            modulo_pj();
			break;
		} 		
	} while (op2 != '0');
}

void modulo_pf(void) 
{
	char op3;
	do 
    {
        system("clear||cls"); 
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                              MENU CLIENTES PF                            {}\n");	
		op3 = padrao_crud();
		switch(op3) 
        {
			case '1': 	
            cadastro_pf();
            break;
			case '2': 	
            exibe_pf();
            break;
			case '3': 	
            atualiza_pf();
            break;
			case '4': 	
            deleta_pf();
            break;
		} 		
	} while (op3 != '0');
}

void modulo_pj(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                              MENU CLIENTES PJ                            {}\n");
		op3 = padrao_crud();
		switch(op3) 
        {
			case '1': 	
            cadastro_pj();
            break;
			case '2': 	
            exibe_pj();
            break;
			case '3': 	
            atualiza_pj();
            break;
			case '4': 	
            deleta_pj();
            break;
		} 		
	} while (op3 != '0');
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
            modulo_atendc();
			break;
			case '2': 
            modulo_atendl();
			break;
            case '3':
            modulo_planos();
            break;
		} 		
	} while (op2 != '0');
}

void modulo_atendc(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                              MENU ATENDIMENTO                            {}\n");	
		op3 = padrao_crud();
		switch(op3) 
        {
			case '1': 	
            cadastro_atendc();
            break;
			case '2': 	
            exibe_atendc();
            break;
			case '3': 	
            atualiza_atendc();
            break;
			case '4': 	
            deleta_atendc();
            break;
		} 		
	} while (op3 != '0');
}

void modulo_atendl(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                          MENU ATENDIMENTO IN LOCO                        {}\n");
		op3 = padrao_crud();
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

void modulo_planos(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                                MENU PLANOS                               {}\n");
		op3 = padrao_crud();
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
		} 		
	} while (op2 != '0');
}

void modulo_func(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                             MENU FUNCIONARIOS                            {}\n");
		op3 = padrao_crud();
		switch(op3) 
        {
			case '1': 	
            cadastro_func();
            break;
			case '2': 	
            exibe_func();
            break;
			case '3': 	
            atualiza_func();
            break;
			case '4': 	
            deleta_func();
            break;
		} 		
	} while (op3 != '0');
}

void modulo_equipes(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                               MENU EQUIPES                               {}\n");
		op3 = padrao_crud();
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

void z_cont(void) 
{
	char op3;
	do 
    {
		op3 = confirma_zcont();
		switch(op3) 
        {
			case '1': 	
            mostra_zcont();
            break;
		} 		
	} while (op3 != '0');
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

void f_clientes(void) 
{
	char op3;
	do 
    {
		op3 = filtros_clientes();
		switch(op3) 
        {
			case '1': 
            system("clear||cls");
            printf("\n");
            printf("TODOS OS CLIENTES PF\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
			case '2': 
            system("clear||cls");
            printf("\n");	
            printf("TODOS OS CLIENTES PJ\n");
            printf("Tecle ENTER para continuar");
            getchar();
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
            system("clear||cls");
            printf("\n");
            printf("ATENDIMENTOS CONCLUIDOS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
			case '2': 
            system("clear||cls");
            printf("\n");	
            printf("ATENDIMENTOS IN LOCO CONCLUIDOS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
            case '3': 	
            system("clear||cls");
            printf("\n");
            printf("ATENDIMENTOS PENDENTES\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
            case '4': 	
            system("clear||cls");
            printf("\n");
            printf("ATENDIMENTOS IN LOCO PENDENTES\n");
            printf("Tecle ENTER para continuar");
            getchar();
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
            system("clear||cls");
            printf("\n");
            printf("PLANOS SEMANAIS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
			case '2': 	
            system("clear||cls");
            printf("\n");
            printf("PLANOS MENSAIS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
            case '3': 	
            system("clear||cls");
            printf("\n");
            printf("PLANOS ANUAIS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
            case '4': 	
            system("clear||cls");
            printf("\n");
            printf("PLANOS VENCIDOS\n");
            printf("Tecle ENTER para continuar");
            getchar();
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
            system("clear||cls");
            printf("\n");
            printf("TODOS OS FUNCIONARIOS\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
			case '2':
            system("clear||cls");
            printf("\n"); 	
            printf("FUNCIONARIO DO MES\n");
            printf("Tecle ENTER para continuar");
            getchar();
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
            system("clear||cls");
            printf("\n");
            printf("TODAS AS EQUIPES\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;
			case '2': 	
            system("clear||cls");
            printf("\n");
            printf("EQUIPES DO MES\n");
            printf("Tecle ENTER para continuar");
            getchar();
            break;            
		} 		
	} while (op3 != '0');
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

// Programa principal

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