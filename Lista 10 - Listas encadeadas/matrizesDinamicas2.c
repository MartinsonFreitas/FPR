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
	
	//1. Alocando o n�mero de linhas da matriz
	m = (int**) malloc (10*sizeof(int*));
	
	//2. Para cada linha da matriz, alocar a quantidade de colunas
	for (i=0;i<linha;i++)
	{
		m[i] = (int*) malloc ((i+1)*sizeof(int));	
	}	
	
	.
	.
	.
}
