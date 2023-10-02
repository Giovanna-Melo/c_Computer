
/////////////////////////////////MODULO ATENDC///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "op_modulo_cli.h"
#include "op_modulo_atend.h"
#include "op_modulo_planos.h"
#include "utilidades.h"

void modulo_atend(void) 
{
	char op3;
	do 
    {
        system("clear||cls");
        printf("\n");
        printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
        printf("{}                              MENU ATENDIMENTO                            {}\n");	
		op3 = padrao_crud(); //ja declarado em op_modulo_cli
		switch(op3) 
        {
			case '1': 	
            cadastro_atend();
            break;
			case '2': 	
            exibe_atend();
            break;
			case '3': 	
            atualiza_atend();
            break;
			case '4': 	
            deleta_atend();
            break;
		} 		
	} while (op3 != '0');
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
    printf("{}                              2. PLANOS                                   {}\n");
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
void cadastro_atend(void)
{
    tela_cadastro_atend();
    //data_atend=pega do computador
    //situacao="pendente"
    //posicao de ordem = 0
    //while (situacao+cpf/cnpj+ordem in cad_atend) {posico de ordem+=1}
}

void exibe_atend(void)
{
    tela_exibe_atend();
}

void atualiza_atend(void)
{
    tela_atualiza_atend();
}

void deleta_atend(void)
{
    tela_deleta_atend();
}

//TELAS CRUD
void tela_cadastro_atend(void)
{
    char cpf_cnpj[16];
    char nome_eqp[52];
    char marca[22];
    char modelo[32];
    char nserie[22];
    char observacoes[502];
    char data[12];
    char responsavel[13];
    char situacao[11];

    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             CADASTRAR ATENDIMENTO                            \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_cpf_cnpj(cpf_cnpj); // JA DECLARO EM MODULO CLI
    le_nome_eqp(nome_eqp);
    le_marca(marca);
    le_modelo(modelo);
    le_nserie(nserie);
    le_observacoes(observacoes);
    le_data(data);
    le_responsavel(responsavel);
    le_situacao(situacao);
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("CPF/CNPJ: %s\n", cpf_cnpj);
    printf("Nome do equipamento: %s\n", nome_eqp);
    printf("Marca: %s\n", marca);
    printf("Modelo: %s\n", modelo);
    printf("Numero de serie: %s\n", nserie);
    printf("Observacoes: %s\n", observacoes);
    printf("Data: %s\n", data);
    printf("Reponsavel: %s\n", responsavel);
    printf("Situacao: %s\n", situacao);
    printf("Tecle ENTER para continuar");
    getchar();
}

void le_nome_eqp(char* nome_eqp) 
{
    printf("{}                       Nome do equipamento:                               {}\n");
    fgets(nome_eqp, 52, stdin);
    while (!valida_alphanum(nome_eqp)) //em utilidades
    {
        printf("{}                       Informe o nome do equipamento novamente:            {}\n");
        fgets(nome_eqp, 52, stdin);
    } 
}

void le_marca(char* marca) 
{
    printf("{}                       Marca:                                             {}\n");
    fgets(marca, 22, stdin);
    while (!valida_alphanum(marca)) //em utilidades
    {
        printf("{}                       Informe a marca novamente:                         {}\n");
        fgets(marca, 22, stdin);
    } 
}

void le_modelo(char* modelo) 
{
    printf("{}                       Modelo:                                            {}\n");
    fgets(modelo, 32, stdin);
    while (!valida_alphanum(modelo)) //em utilidades
    {
        printf("{}                       Informe o modelo novamente:                        {}\n");
        fgets(modelo, 32, stdin);
    } 
}

void le_nserie(char* nserie) 
{
    printf("{}                       Numero de serie:                                   {}\n");
    fgets(nserie, 22, stdin);
    while (!valida_alphanum(nserie)) //em utilidades
    {
        printf("{}                       Informe o numero de serie novamente:               {}\n");
        fgets(nserie, 22, stdin);
    } 
}

void le_observacoes(char* observacoes) 
{
    printf("{}                       Observacoes:                                       {}\n");
    fgets(observacoes, 502, stdin);
    while (!valida_nao_vazio(observacoes)) //em utilidades
    {
        printf("{}                       Informe alguma observacao:                         {}\n");
        fgets(observacoes, 502, stdin);
    } 
}

void le_data(char* data) 
{
    int dia, mes, ano;
    char dd[3], mm[3], aa[5];
    
        printf("{}                       Data entrega/visita (dd/mm/aaaa):                     {}\n");
    fgets(data, 12, stdin);
    
    strncpy(dd, &data[0], 2);
    sscanf(dd, "%d", &dia);
    
    strncpy(mm, &data[3], 2);
    sscanf(mm, "%d", &mes);

    strncpy(aa, &data[6], 4);
    sscanf(aa, "%d", &ano);

    while (!valida_data(dia, mes, ano)) {
        printf("Data invalida: %d/%d/%d\n", dia, mes, ano);
    printf("{}                       Informe novamente a data entrega/visita:            {}\n\n");
        fgets(data, 12, stdin);
        strncpy(dd, &data[0], 2);
        sscanf(dd, "%d", &dia);
        strncpy(mm, &data[3], 2);
        sscanf(mm, "%d", &mes);
        strncpy(aa, &data[6], 4);
        sscanf(aa, "%d", &ano);
  } 
}

void le_responsavel(char* responsavel) 
{
    printf("{}                       Funcionario (CPF)/equipe responsavel:              {}\n");
    fgets(responsavel, 13, stdin);
    while (!valida_existe(responsavel)) //em utilidades // escrever nas orientacoes q a equipe deve ser unico e ter apenas caracteres alfabeticos de ate 11 digitos e sem acentuacao como tudo no programa
    {
        printf("{}                       Informe o responsavel novamente:                   {}\n");
        fgets(responsavel, 13, stdin);
    } 
}

void le_situacao(char* situacao) 
{
    printf("{}                       Situacao (pendente/concluido):                     {}\n");
    fgets(situacao, 11, stdin);
    while (!valida_situacao(situacao)) //em utilidades
    {
        printf("{}                       Situacao (pendente/concluido):                     {}\n");
        fgets(situacao, 11, stdin);
    } 
}

void tela_exibe_atend(void)
{
    char cod_atend[30];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                               EXIBIR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_codigoatend(cod_atend); 
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Codigo de atendimento: %s\n", cod_atend);
    printf("Tecle ENTER para continuar");
    getchar();
}

void le_codigoatend(char* cod_atend) 
{
    printf("{}                    Digite o codigo de atendimento                        {}\n");
    printf("{}                 para exibir (situacao+CPF/CNPJ+ordem):                   {}\n");
    fgets(cod_atend, 30, stdin);
    while (!valida_existe(cod_atend)) //em utilidades
    {
    printf("{}                Digite novamente o codigo de atendimento                  {}\n");
    printf("{}                 para exibir (situacao+CPF/CNPJ+ordem):                   {}\n");
        fgets(cod_atend, 30, stdin);
    } 
}

void tela_atualiza_atend(void)
{
    char cod_atend[30];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                            ATUALIZAR ATENDIMENTO                             \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_codigoatend(cod_atend); 
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Codigo de atendimento: %s\n", cod_atend);
    printf("Tecle ENTER para continuar");
    getchar();
}

void tela_deleta_atend(void)
{
    char cod_atend[30];
    system("clear||cls");
    printf("\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                             DELETAR ATENDIMENTO                              \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
    printf("{}                                                                          {}\n");
    le_codigoatend(cod_atend); 
    printf("{}                                                                          {}\n");
    printf("{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\n");
    printf("Codigo de atendimento: %s\n", cod_atend);
    printf("Tecle ENTER para continuar");
    getchar();
}