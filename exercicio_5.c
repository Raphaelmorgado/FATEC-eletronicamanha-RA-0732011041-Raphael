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

/*Desenvolva um sistema que monitore a temperatura do radiador, caso atinja a temperatura de
90oC, a ventoinha deve ser acionada, atC) atingir a temperatura de 70oC, para ser desligado. */

// -- Bibliotecas -- 

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

// -- Defines Gerais -- 

#define TEMP_MAX 90
#define TEMP_MIN 70

// -- Variaveis globais -- 

char saiProg = 'N';
int temperatura;



int main ()
{
    
// Insiro temperatura Atual
  setlocale (LC_ALL, "Portuguese");
  printf ("\n--------------------------------------------");
  printf ("\n VERIFICAÇÃO TEMPERATURA - RADIADOR");
  printf ("\n Digite o valor da Temperatura Atual: ");
  scanf ("%d", &temperatura);
  printf ("\n--------------------------------------------");

// Enquanto sairProg for diferente de S prog fica rodando
  while (saiProg != 'S')
  {
      //Se temperatura >= TEMP_MAX  ligo ventoinha
      if (temperatura >= TEMP_MAX)
        {
            printf ("\n--------------------------------------------");
            printf ("\n ACIONANDO VENTOINHA");
            temperatura--;
	  }
	  
	  //Se temperatura <= TEMP_MIN desligo VENTOINHA (incremento temperatura)
	  
	  else if (temperatura <= TEMP_MIN)
	  {
	      printf ("\n--------------------------------------------");
	      printf ("\n DESLIGANDO VENTOINHA");
	      temperatura++;
	      
	  }
	  
	  // Leitura temperatura Atual
	 printf ("\n Temperatura Atual: %d", temperatura);
    
    //Verifica se deseja sair do programa.
    // Aguarda 1s e verifica variavel sai do programa
     sleep(1);
     printf ("\n--------------------------------------------");
     printf ("\n Deseja sair do programa (S) ou (N)?: ");
     scanf ("%c", &saiProg);
  }

  return 0;
}
