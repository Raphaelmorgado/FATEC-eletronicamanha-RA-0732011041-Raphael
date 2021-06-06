
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

#include<stdio.h>

int main(int argc , char const *argv [])
{
	for (int c = 1 ; c <= 9 ; ++c)
	{
		for (int d = 0 ; d <=9 ; ++d)
		{
			if (d >0&&d%2-0)
			{
				printf("Aperte enter para continuar\n");
				fflush(stdout); // evita erros no meu compilador
				getchar();

			}
			for (int u = 0; u <= 9; ++u)
			{
				printf ("%d (%d*%d*%d)\n", (c*d*u),c,d,u);
			}
		}
	}



	return 0;
}
