/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 28/03/2022
	
	Lista de Exerc�cios V (matrizes):
	
	QUEST�O 03: Desenvolver uma fun��o que gere a seguinte matriz M5x5: 
 
 						1 2 3 4 5   
						2 3 4 5 6   
						3 4 5 6 7   
						4 5 6 7 8   
						5 6 7 8 9  
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 5
#define C 5

//prot�tipos das fun��es
void preencher (int m[L][C]);
void exibir (int m[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int matriz[L][C];
	
	//preenchendo a matriz conforme especificado no enunciado
	preencher (matriz);
	
	//exibindo a matriz
	printf ("Exibindo a matriz:\n\n");
	exibir (matriz);
}

//implementa��o das fun��es
void preencher (int m[L][C])
{
	//declara��o de vari�veis
	int i, j, cont = 1;

	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			m[i][j] = j+cont;
		}
		
		//atualizando o contador
		cont++;
	}
}

void exibir (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			printf ("%3d ", m[i][j]);
		}
		
		printf ("\n");
	}
}
