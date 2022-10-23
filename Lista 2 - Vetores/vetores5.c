/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	considerando um vetor com 'tam' n�meros inteiros, determinar o maior e o menor elementos do conjunto.

	Exemplo:	vetor:  10 21 3 4 52 1 4 9 10 1 36
						maior: 52  /  menor: 1
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <limits.h>

//defini��o de constantes
#define TAM 100

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

void determinarMaiorMenor (int vetor[], int tamanho, int *maior, int *menor);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	int maior, menor;
	
	//preenchendo o vetor, e exibindo-o
	preencherAleatorio (v, TAM);
	exibir (v, TAM);
	
	//chamando a fun��o
	determinarMaiorMenor (v, TAM, &maior, &menor);
	
	//exibindo o resultado
	printf ("\nMaior: %d   -   Menor = %d", maior, menor);
}

//implementa��o das demais fun��es
void preencherAleatorio (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//gerando um novo n�mero aleat�rio e armazenando-o no vetor
		vetor[i] = 1 + rand()%50;
	}
}
void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nVetor: ");
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//exibindo os valores do vetor
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n");
}

void determinarMaiorMenor (int vetor[], int tamanho, int *maior, int *menor)
{
	//declara��o de vari�veis
	int i,
	    ma = INT_MIN,   //menor n�mero inteiro armazen�vel
	    me = INT_MAX;	//maior n�mero inteiro armazen�vel
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se um n�mero maior foi encontrado
		if (vetor[i] > ma)
		{
			ma = vetor[i];
		}
		else
		{
			//verificando se um n�mero menor foi encontrado
			if (vetor[i] < me)
			{
				me = vetor[i];
			}			
		}
	}
	
	//retornando os valores
	*maior = ma;
	*menor = me;
}
