/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR
	2022/1  -  Turma: Noite
	
	Data: 30/05/2022
	
	Ponteiros
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//main 
void main ()
{
	//declara��o de vari�veis
	int *v;			//declara��o do vetor (sem alocar mem�ria para o mesmo)
	int tamanho;
	
	//leitura da tamanho de elementos do vetor
	printf ("Entre com o tamanho do vetor: ");
	scanf ("%d", &tamanho);
	
	//alocar mem�ria para o vetor j� declarado
	v = (int*) malloc (tamanho*sizeof(int));    ///memory alocation	
	
	if (v == NULL)
	{
		printf ("\nNao foi possivel alocar a memoria solicitada!");
	}
	else
	{
		.
		.
		.
	}
}
