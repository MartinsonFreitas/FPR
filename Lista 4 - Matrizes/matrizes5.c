/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 20/09/2021
	
	MATRIZES
	
	Exemplo 5: Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero na linha L 
			   de uma matriz M50x20
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 50
#define C 20

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int matriz[L][C]);
void exibir (int matriz[L][C]);

int buscaNumero (int matriz[L][C], int linha, int numero);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	int valor, qdade, linha;
	
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
		
	//chamando a fun��o
	qdade = buscaNumero (m, linha, valor);
	
	//exibindo o resultado
	printf ("\nO valor %d foi encontrado %d vezes na linha %d da matriz", valor, qdade, linha);
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
	int i,j,qtvezes=0;
    
    //percorrendo a matriz
    for ( i = 0; i < L; i++)
    {
        for ( j = 0; j < C; j++)
        {
        	//verificando se est� na linha desejada
        	if (i == linha)		//solu��o muito cara, pois percorre sem necessidade toda a matriz (ao inv�s de percorrer apenas a linha desejada)
        	{
        		if (matriz[i][j]==numero)
        		{
            		qtvezes++;
        		}
        	}
        }        
    }
    
	return qtvezes;
}
