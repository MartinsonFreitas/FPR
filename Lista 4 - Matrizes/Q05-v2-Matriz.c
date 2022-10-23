/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna
	Data: 27/09/2021
	
	Lista de Exerc�cios IV - Matrizes
	
	QUEST�O 05:
	Implementar uma fun��o que, dada uma matriz M10�8, gere um vetor V de tamanho 8, onde cada elemento 
	do vetor consiste na soma dos elementos de uma coluna de M. Ou seja, o elemento V[0] consiste na soma 
	dos elementos da primeira coluna de M, o elemento V[1] consiste na soma dos elementos da segunda 
	coluna de M, e assim por diante.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 10
#define C 8

//prot�tipos/cabe�alhos das fun��es
void geraSomaColuna (int matriz [L][C], int v[C]);

void exibirMatriz (int matriz[L][C]);
void exibirVetor (int vetor[], int tamanho);
void preencherAleatorio (int matriz[L][C]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	int vet[C];

	//gerando a matriz aleatoriamente
	preencherAleatorio (m);
	
	//exibindo a matriz m
	exibirMatriz (m);
	
	//chamando a fun��o 
	geraSomaColuna (m, vet);
	
	//exibindo o vetor resultado
	exibirVetor (vet, C);
}

//implementa��o das demais fun��es
void exibirMatriz (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("\n\n");
	
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

void exibirVetor (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\n");
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)			
	{
		printf ("%3d ", vetor[i]);
	}

	printf ("\n\n");
}


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

void geraSomaColuna (int matriz [L][C], int v[C])
{
	//declara��o de vari�veis
    int i,j;
    
    //calculando as somas, como descrito no enunciado    
    for (j=0;j<C;j++)
    {
    	v[j] = 0;
        for (i=0;i<L;i++)
        {
            v[j]+=matriz[i][j];   //v[j] = v[j] + matriz[i][j];
        }
    }    
}
