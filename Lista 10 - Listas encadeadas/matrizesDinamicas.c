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
	int **m;			//declara��o do vetor (sem alocar mem�ria para o mesmo)
	int linha, coluna, i;
	
	//leitura das dimens�es da matriz
	printf ("Entre com o numero de linhas: ");
	scanf ("%d", &linha);
	
	printf ("Entre com o numero de colunas: ");
	scanf ("%d", &coluna);

	//alocando mem�ria dinamicamente para a matriz
	
	//1. Alocando o n�mero de linhas da matriz
	m = (int**) malloc (linha*sizeof(int*));
	
	//2. Para cada linha da matriz, alocar a quantidade de colunas
	for (i=0;i<linha;i++)
	{
		m[i] = (int*) malloc (coluna*sizeof(int));	
	}	
	
	.
	.
	.
}
