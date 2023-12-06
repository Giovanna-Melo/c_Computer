/////////////////////////////////UTILIDADES///////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "utilidades.h"
#include "op_modulo_func.h"
#include "op_modulo_equipes.h"

//FUNCOES EM DESENVOLVIMENTO

int eh_letra(char c) 
{
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else if (c == ' ' || c == 13) {
    return 1;
  } else {
    return 0;
  }  
}
// FUNCAO DESENVOLVIDA POR FLAVIUS GORGONIO

int valida_nome(char* nome) 
{
  if (valida_nao_vazio(nome)) {
    int tam;
    
    tam = strlen(nome);
    for (int i = 0; i < tam-1; i++) {
      if (!eh_letra(nome[i])) {
        return 0;
      }
    }
    return 1;
  } else {
    return 0;
  }
}
// FUNCAO DESENVOLVIDA POR FLAVIUS GORGONIO

int valida_cnpj(char* cpf_cnpj)
{
  int tam;
  int list_one []= {5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};
  int list_two []= {6, 5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};

  tam = strlen(cpf_cnpj);
   // Verifica se o CNPJ tem 14 digitos
    if (tam != 15) {
      return 0;
    }

// Exclui opcoes invalidas
    else if ((strcmp(cpf_cnpj,"00000000000000\n") == 0) || (strcmp(cpf_cnpj,"11111111111111\n") == 0) || 
    (strcmp(cpf_cnpj,"22222222222222\n") == 0) || (strcmp(cpf_cnpj,"33333333333333\n") == 0) || 
    (strcmp(cpf_cnpj,"44444444444444\n") == 0) || (strcmp(cpf_cnpj,"55555555555555\n") == 0) || 
    (strcmp(cpf_cnpj,"66666666666666\n") == 0) || (strcmp(cpf_cnpj,"77777777777777\n") == 0) || 
    (strcmp(cpf_cnpj,"88888888888888\n") == 0) || (strcmp(cpf_cnpj,"99999999999999\n") == 0)) {
      return 0;
    }

    // Verifica se todos os caracteres sao digitos numericos
    for (int i = 0; i < tam - 1; i++) {
      if (!eh_num(cpf_cnpj[i])) {
        return 0;
      }
    }

    // Calcula o primeiro digito verificador
    
    int soma_one = 0;
    for (int i = 0; i < 12; i++) {
      soma_one+=(cpf_cnpj[i] - '0') * list_one[i];
    }

    int primeiro_digito = soma_one % 11;
    if (primeiro_digito < 2) {
      primeiro_digito = 0;
    } else {
      primeiro_digito = 11 - primeiro_digito;
    }

    // Calcula o segundo digito verificador
    int soma_two = 0;
    for (int i = 0; i < 13; i++) {
      soma_two+=(cpf_cnpj[i] - '0') * list_two[i];
    }

    int segundo_digito = soma_two % 11;
    if (segundo_digito < 2) {
      segundo_digito = 0;
    } else {
      segundo_digito = 11 - segundo_digito;
    }

    // Verifica se os digitos verificadores sao iguais aos fornecidos
    if (cpf_cnpj[12] - '0' == primeiro_digito && cpf_cnpj[13] - '0' == segundo_digito) {
        return 1;
    } else {
        return 0;
    }
}

int valida_cpf(char* cpf_cnpj)
{
  int tam;

  tam = strlen(cpf_cnpj);
   // Verifica se o CPF tem 11 digitos
    if (tam != 12) {
      return 0;
    }

// Exclui opcoes invalidas
    else if ((strcmp(cpf_cnpj,"00000000000\n") == 0) || (strcmp(cpf_cnpj,"11111111111\n") == 0) || 
    (strcmp(cpf_cnpj,"22222222222\n") == 0) || (strcmp(cpf_cnpj,"33333333333\n") == 0) || 
    (strcmp(cpf_cnpj,"44444444444\n") == 0) || (strcmp(cpf_cnpj,"55555555555\n") == 0) || 
    (strcmp(cpf_cnpj,"66666666666\n") == 0) || (strcmp(cpf_cnpj,"77777777777\n") == 0) || 
    (strcmp(cpf_cnpj,"88888888888\n") == 0) || (strcmp(cpf_cnpj,"99999999999\n") == 0)) {
      return 0;
    }

    // Verifica se todos os caracteres sao digitos numericos
    for (int i = 0; i < tam - 1; i++) {
      if (!eh_num(cpf_cnpj[i])) {
        return 0;
      }
    }

    // Calcula o primeiro digito verificador
    int soma = 0;
    for (int i = 0; i < 9; i++) {
      soma += (cpf_cnpj[i] - '0') * (10 - i);
    }

    int primeiro_digito = (soma * 10) % 11;
    if (primeiro_digito >= 10) {
      primeiro_digito = 0;
    }

    // Calcula o segundo digito verificador
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf_cnpj[i] - '0') * (11 - i);
    }
    int segundo_digito = 11 - (soma % 11);
    if (segundo_digito >= 10) {
        segundo_digito = 0;
    }

    // Verifica se os digitos verificadores sao iguais aos fornecidos
    if (cpf_cnpj[9] - '0' == primeiro_digito && cpf_cnpj[10] - '0' == segundo_digito) {
        return 1;
    } else {
        return 0;
    }
}
//FUNCAO ADAPTADA DO CHATGPT

int valida_tipo(char* tipo)
{
    char s_one []= "PF\n";
    char s_two []= "PJ\n";
    int result_one = strcmp(tipo,s_one);
    int result_two = strcmp(tipo,s_two); 
  if (result_one == 0) {
    return 1;
  } else if (result_two == 0) {
    return 1;
  } else {
    return 0;
  }
}

int valida_email(char* email)
{
// Encontre o indice do '@'
    char *at_symbol = strchr(email, '@');
    
    // Verifique se existe '@' e se nao e o primeiro caractere nem o ultimo
    if (at_symbol == NULL || at_symbol == email || at_symbol[strlen(at_symbol) - 1] == '@') {
        return 0;
    }

    // Verifique se a parte antes do '@' contem apenas caracteres permitidos
    for (char* p = email; p < at_symbol; p++) {
        if (!eh_alphanum(*p) && *p != '.' && *p != '-' && *p != '_') {
            return 0;
        }
    }

    // Verifique se a parte apos o '@' contem pelo menos um '.'
    char *after_at = at_symbol + 2;
    if (strchr(after_at, '.') == NULL) {
      return 0;
    }

    // Verifique se apos o '.' contem pelo menos um caracter
    int tam;
    tam = strlen(email);
    if (email [tam-2]=='.'){
      return 0;
    }
    return 1;
}
//FUNCAO ADAPTADA DO CHATGPT

int valida_tel(char* telefone)
{
  int tam;
  
  tam = strlen(telefone);
  if (!valida_strnum(telefone) || tam!=12) {
    return 0;
  } else {
    return 1; 
  }
}

int valida_endereco(char* endereco)
{
  int tam;
  
  tam = strlen(endereco);
  for (int i = 0; i < tam-1; i++) {
    if (!eh_alphanum(endereco[i]) && endereco[i] != ',' && endereco[i] != '-' && endereco[i] != ' ') {
      return 0;
    }
  }
  return 1;
}

int eh_bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}
// FUNCAO DESENVOLVIDA POR FLAVIUS GORGONIO

int valida_data(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (eh_bissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || 
             mm == 9 || mm == 11) {
               maiorDia = 30;
  } else
    maiorDia = 31;

  if (dd < 1 || dd > maiorDia)
    return 0;

  return 1;
}
// FUNCAO DESENVOLVIDA POR FLAVIUS GORGONIO

int eh_alphanum(char c) 
{
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else if (c >= '0' && c <= '9') {
    return 1;
  } else if (c == 13) {
    return 1;
  } else {
    return 0;
  } 
}

int valida_alphanum(char* nome_eqp)
{
  if (valida_nao_vazio(nome_eqp)) {
    int tam;
    
    tam = strlen(nome_eqp);
    for (int i = 0; i < tam-1; i++) {
      if (!eh_alphanum(nome_eqp[i])) {
        return 0;
      }
    }
    return 1; 
  } else {
    return 0;
  }
}

int valida_nao_vazio(char* observacoes)
{
  int tam;
  
  tam = strlen(observacoes);
  if (tam <= 1) {
    return 0;
  } else {
    return 1;
  }
}

int valida_situacao(char* situacao)
{
    char s_one []= "pendente\n";
    char s_two []= "concluido\n";
    int result_one = strcmp(situacao,s_one);
    int result_two = strcmp(situacao,s_two); 
  if (result_one == 0) {
    return 1;
  } else if (result_two == 0) {
    return 1;
  } else {
    return 0;
  }  
}

int valida_salario(char* salario)
{
  if (valida_nao_vazio(salario)) {
    int tam;
    
    tam = strlen(salario);
    for (int i = 0; i < tam-1; i++) {
      if (!eh_num(salario[i]) && salario[i] != ',' && salario[i] != '.') {
        return 0;
      }
    }
    return 1;
  } else {
    return 0;
  }
}

int eh_num(char c) 
{
  if (c >= '0' && c <= '9') {
    return 1;
  } else if (c == 13) {
    return 1;
  } else {
    return 0;
  }  
}

int valida_strnum(char* salario)
{
  if (valida_nao_vazio(salario)) {
    int tam;
    
    tam = strlen(salario);
    for (int i = 0; i < tam-1; i++) {
      if (!eh_num(salario[i])) {
        return 0;
      }
    }
    return 1;
  } else {
    return 0;
  }
}

char* date_time(void) {
    // Obter o tempo atual
    time_t tempo_atual;
    time(&tempo_atual);

    // Converter o tempo para struct tm
    struct tm *info_tempo = localtime(&tempo_atual);

    // Alocar espaço para a string de data/hora
    static char data_hora[20];

    // Formatando a string de data para dia/mes/ano e hora:minutos:segundos
    strftime(data_hora, sizeof(data_hora), "%d/%m/%Y %H:%M:%S", info_tempo);

    return data_hora;
}
// TRECHO ADAPTADO DO CHATGPT

int valida_responsavel(char* responsavel) 
{
  if (valida_nome(responsavel)) 
  {
  //busca em equipe
    Equipe* eqp = busca_resp_equipe(responsavel);
    if ((eqp == NULL) || (strcmp(eqp->status, "inativo")==0))
    {
      if (eqp != NULL)
      {
        free(eqp);
      }
      printf("{}                             Responsavel inexistente                      {}\n");
      printf("{}                                Informe novamente                         {}\n");
      return 0;
    } else {
      free(eqp);
      return 1;
    }
  }
  else if (valida_strnum(responsavel)) 
  {
  //busca em func
    Funcionario* func = busca_resp_func(responsavel);
    if ((func == NULL) || (strcmp(func->status, "inativo")==0)) 
    {
      if (func != NULL)
      {
        free(func);
      }
      printf("{}                             Responsavel inexistente                      {}\n");
      printf("{}                                Informe novamente                         {}\n");
      return 0;
    } else {
      free(func);
      return 1;
    }
  } else {
    return 0;
  }
}