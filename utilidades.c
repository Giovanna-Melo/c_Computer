/////////////////////////////////UTILIDADES///////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilidades.h"
//FUNCOES EM DESENVOLVIMENTO
// faltando 9
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
  int tam;
  
  tam = strlen(nome);
  for (int i = 0; i < tam-1; i++) {
    if (!eh_letra(nome[i])) {
      return 0;
    }
  }
  return 1;  
}
// FUNCAO DESENVOLVIDA POR FLAVIUS GORGONIO

int valida_cnpj(char* cpf_cnpj)
{
  return 1;   
}

int valida_cpf(char* cpf)
{
  return 1;   
}

int valida_tipo(char* tipo)
{
  return 1;
}

int valida_email(char* email)
{
  return 1;
}

int valida_tel(char* telefone)
{
  return 1; 
}

int valida_endereco(char* endereco)
{
  return 1;
}

// Recebe um ano e verifica se o mesmo é bissexto
// Retorna 1 se o ano é bissexto ou 0 caso contrário
// 
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

//
// Recebe uma data no formato (dd, mm, aaaa) e valida a mesma
// Retorna 1 se a data é válida ou 0 caso contrário
// 
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
  return 1;
}

int valida_alphanum(char* nome_eqp)
{
  return 1;
}

int valida_nao_vazio(char* observacoes)
{
  return 1;
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
  int tam;
  
  tam = strlen(salario);
  for (int i = 0; i < tam-1; i++) {
    if (!eh_num(salario[i])) {
      return 0;
    }
  }
  return 1; 
}

int valida_existe(char* responsavel)
{
  return 1;
}

/*
int valida_existe_cli(char* cpf_cnpj)
{
    if (cpf_cnpj in (clientes)) {
    return 1;
  } else {
    return 0;
  }
  return 1;
}

int valida_existe_func(char* cpf)
{
    if (cpf in (func)) {
    return 1;
  } else {
    return 0;
  }
  return 1;
}

int valida_existe_atend(char* cod_atend)
{
    if (cod_atend in (atendimentos)) {
    return 1;
  } else {
    return 0;
  }
  return 1;
}

int valida_existe_equipe(char* equipe)
{
    if (equipe in (equipes)) {
    return 1;
  } else {
    return 0;
  }
  return 1;
}

int valida_existe_responsavel(char* responsavel)
{
    if (responsavel in (equipes)) {
  return 1;
  } else if (responsavel in (func)){
  } else {
    return 0;
  } 
  return 1;
}*/