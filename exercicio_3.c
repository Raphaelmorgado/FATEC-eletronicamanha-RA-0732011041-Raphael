/*******************************************************************************
  FileName:         Exercício - linguagem e tecnicas de programação  Semestre/2021
  Dependencies:     Veja a seção de includesProcessor:      
  Processor:        replit
  Compiler:         replit
  Company:          FATEC Santo Andre
  Author:           RAPHAEL MORGADO SILVA 
  Date:             06/06/2021
  Software License Agreement: Somente para fins didáticos
*******************************************************************************/

// -- Bibliotecas -- 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// -- ProtC3tipo funC'C5es auxiliares -- 

void imprimirArray ();

// -- Defines Gerais -- 

//Defino tamanho ARRAY

#define TAM 5

// -- VariC!veis Globais -- 

int i, aux, troca, numero[TAM];

// -- Funcao main -- 

int main ()
{
  setlocale (LC_ALL, "Portuguese");
  printf ("\n--------------------------------------------");
  printf ("\n ORDENACAO DESCRESCENTE - VETOR");
  printf ("\n--------------------------------------------");
  printf("\nInicializando o Array");
  
  //Inicializa Array com valores zerados 
  for(i = 0; i < TAM; i++)
  {
        numero[i] = 0;
  }
  
  //Insercao de dados no Array 
  printf("\n--------------------------------------------");
  for(i = 0; i < TAM; i++)
  {
      printf("\n|Posição %d |Digite um número: \t", i);
      scanf("%d%*c",&numero[i]);
      
  }
  
  printf("\n--------------------------------------------");
  printf("\nValores armazenados no array");
  //Chamo função indicando os valores armazenados no VETOR
  imprimirArray();
  
  troca = 1;
  
  //Algoritmo bubble sort DESCRESCENTE
  while(troca == 1)
  {
      troca = 0;
      for(i = 0; i <= TAM -2; i++)
      {
          if(numero[i]< numero[i + 1])
          {
              troca = 1;
              aux = numero[i];
              numero[i] = numero[i + 1];
              numero[i + 1] = aux;
          }
      }
  }
  // Exibição de vetor com valores organizados
    printf("\n--------------------------------------------");
    printf("\nValores ordenados de forma DESCRESCENTE");
    imprimirArray();
    printf("\n--------------------------------------------");
    return 0;
  
}

// -- Funções Auxiliares -- 

void
imprimirArray ()
{
  printf ("\n--------------------------------------------");
  for (i = 0; i < TAM; i++)
    {
    printf ("\n|Posicao: %d | NC:mero: %d|", i, numero[i]);
        
    }
}
