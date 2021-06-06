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

/*Desenvolva sistema que controle seta de um veiculo e luz de emergencia. */

// -- Bibliotecas -- 

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

// -- Defines Gerais -- 


// -- Variaveis globais -- 

char valorCarro;

int main ()
{
    
// Insiro temperatura Atual
  setlocale (LC_ALL, "Portuguese");
  printf ("\n--------------------------------------------");
  printf ("\n VERIFICAÇÃO VEICULO");
  printf ("\n ----------------OPÇÕES----------------------: ");
  printf ("\n (1) Seta para direita ");
  printf ("\n (2) Seta para esquerda");
  printf ("\n (3) Luz de Emergência");
  printf ("\n\ Digite a opção: ");
  scanf ("%c", &valorCarro);
  
  switch(valorCarro)
  {
      case '1':
        printf ("\n--------------------------------------------");
        printf ("\n Opção Seta para direita");
      break;
      
      case '2':
        printf ("\n--------------------------------------------");
        printf ("\n Opção Seta para esquerda");
      break;     
      
      case '3':
        printf ("\n--------------------------------------------");
        printf ("\n Luz de Emergência");
      break;
      
      default:
        printf ("\n--------------------------------------------");
        printf("\n Opção inválida!");
      break;
  }
  system("PAUSE");
  return 0;

}
