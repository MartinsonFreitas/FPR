/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR
	2022/1  -  Turma: Noite
	
	Data: 30/05/2022
	
	Ponteiros
*/

//importa��o de bibliotecas
#include <stdio.h>

//main 
void main ()
{
	//declara��o de vari�veis
	int v[5] = {1,2,3,4,5};
	int i, *x;

	x = v;
	
	for (i=0;i<5;i++)
	{
		printf ("%d ", *(x+i));	
	}
}
