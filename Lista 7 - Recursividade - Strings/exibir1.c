/********************************************************************************************

	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Exibindo n�meros de maneira recursiva	
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibir (int n);

//main
void main ()
{
	//chamando a fun��o
	exibir (20);
}

//implementa��o das fun��es
void exibir (int n)
{
	if (n > 0)
	{
		printf ("%d ", n);
		exibir (n-1);
	}
}
