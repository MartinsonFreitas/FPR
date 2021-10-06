/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 27/09/2021
	
	Lista de Exerc�cios IV - Matrizes
	
	QUEST�O 02:
	Desenvolver uma fun��o que, dada uma matriz M15�20, determine se um n�mero X se encontra na linha L 
	da matriz.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 15
#define C 20

#define TRUE 1
#define FALSE 0

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int matriz[L][C]);
void exibir (int matriz[L][C]);

int buscaNumero (int matriz[L][C], int linha, int numero);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	int valor, linha;
	
	//preenchendo a matriz com n�meros aleat�rios
	preencherAleatorio (m);
	
	//exibindo a matriz
	exibir (m);	
	
	//perguntando o n�mero a ser buscado na matriz
	printf ("\n\nQual numero deseja buscar? ");
	scanf ("%d", &valor);
	
	//perguntando em qual linha o elemento ser� buscado
	printf ("\n\nEm qual linha deseja buscar? ");
	scanf ("%d", &linha);
		
	//chamando a fun��o e exibindo o resultado
	if (buscaNumero (m, linha, valor) == TRUE)
	{
		printf ("\nO valor %d foi encontrado na linha %d da matriz", valor, linha);
	}
	else
	{
		printf ("\nO valor %d nao foi encontrado na linha %d da matriz", valor, linha);
	}
}

//implementa��o das demais fun��es
void preencherAleatorio (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	srand (time(NULL));
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			matriz[i][j] = 1+rand()%100; //preenchendo a matriz com valores aleat�rios no intervalo de 1 a 100
		}
	}
}


void exibir (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			printf ("%3d ", matriz[i][j]);
		}
		printf ("\n");
	}	
	printf ("\n\n");
}

int buscaNumero (int matriz[L][C], int linha, int numero)
{
    //declara��o de vari�veis
	int j;
    
    //percorrendo a linha da matriz
    for (j=0;j<C;j++)
    {
       	//verificando se est� na linha desejada
        if (matriz[linha][j]==numero)
        {
        	return TRUE;
        }
    }
    
	return FALSE;
}
