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
	int vetor[5] = {5,1,8,9,7};
		
	//vetor: endere�o de mem�ria inicial do vetor
	//ou: endere�o da posi��o vetor[0]
			
	for (i=0;i<5;i++)
	{
		printf ("%d ", *(vetor+i));  //vetor[i]  =   *(vetor+i)
	}
}
