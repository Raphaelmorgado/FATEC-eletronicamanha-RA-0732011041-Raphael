/*
Programa: Conevresor de Metros por segundo para Km/h
Descr: Converte metros por segundo para kilomentro por hora 
Autor: Raphael Morgado Silva 
Criado em :10/05/2020
*/



#include <stdio.h>

int main(void) {

 int e_metroporsegundo,s_kilometrohora;


   printf("entre com valor em metro por segundo:");

     scanf("%d",& e_metroporsegundo);

     s_kilometrohora = 3.6 *  e_metroporsegundo;

     printf("valor em km/h: %d[km/h]",s_kilometrohora);

  
  return 0;
}