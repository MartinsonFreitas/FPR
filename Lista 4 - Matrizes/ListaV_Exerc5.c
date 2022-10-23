/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 04/04/2022
	
	Lista de Exerc�cios V (matrizes):
	
	QUEST�O 05:
	
	Implementar uma fun��o que, dada uma matriz M10�8, gere um vetor V 
	de tamanho 8, onde cada elemento do vetor consiste na soma dos 
	elementos de uma coluna de M. Ou seja, o elemento V[0] consiste na 
	soma dos elementos da primeira coluna de M, o elemento V[1] consiste 
	na soma dos elementos da segunda coluna de M, e assim por diante.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 10
#define C 8

//prot�tipos das fun��es
void calcularVetorSoma (int m[L][C], int v[C]);

void preencher (int m[L][C]);
void exibirMatriz (int m[L][C]);
void exibirVetor (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int matriz[L][C], vetor[C];
	
	//preenchendo a matriz com n�meros aleat�rios
	preencher (matriz);
	
	//exibindo a matriz 
	printf ("Exibindo a matriz:\n\n");
	exibirMatriz (matriz);
	
	//chamando a fun��o
	calcularVetorSoma (matriz, vetor);
	
	//exibindo o resultado
	exibirVetor (vetor, C);
}

//implementa��o das fun��es
void calcularVetorSoma (int m[L][C], int v[C])
{
	//declara��o de vari�veis
	int i, j, soma;
	
	//varrendo as colunas da matriz
	for (j=0;j<C;j++)
	{
		//para cada coluna da matriz, zerar o somat�rio
		soma = 0;
		
		//varrendo as linhas da matriz
		for (i=0;i<L;i++)
		{
			soma = soma + m[i][j];
		}
		
		//armazenando o somat�rio no vetor
		v[j] = soma;
	}
}


void preencher (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;

	//garantindo que as sequ�ncias aleat�rias s�o diferentes
	srand (time(NULL));
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			m[i][j] = rand()%20 + 1;
		}
	}
}

void exibirMatriz (int m[L][C])
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

void exibirVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
}
