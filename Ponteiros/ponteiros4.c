/*
	FAETERJ-Rio
	FPR - Noite		Professor Leonardo Vianna
	Data: 29/11/2021
	
	Ponteiros
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int i;
	char vetor[5] = {'R', 'G', 'Y', 'O', 'F'};
	char *p;
	
	//vetor: endere�o de mem�ria inicial do vetor
	//ou: endere�o da posi��o vetor[0]
	
	p = vetor;
	
	for (i=0;i<5;i++)
	{
		printf ("%c (endere�o %p)", *p, p);
		p++;
	}
}
