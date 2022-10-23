/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	1. desenvolver uma fun��o que leia 100 valores para um vetor
	
	[vers�o 2: implementando a fun��o de forma que possa receber vetores de diferentes tamanhos.]
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM1 5
#define TAM2 10

//prot�tipos/cabe�alhos das fun��es
void leitura (float vetor[], int tamanho);
void exibir (float vetor[], int tamanho);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	float v1[TAM1], v2[TAM2];
	
	//lendo valores para o vetor v1, e exibindo o vetor
	leitura (v1, TAM1);
	exibir (v1, TAM1);
	
	//lendo valores para o vetor v2, e exibindo o vetor
	leitura (v2, TAM2);
	exibir (v2, TAM2);
}

//implementa��o das demais fun��es
void leitura (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//leitura dos valores
		printf ("Entre com um numero: ");
		scanf ("%f", &vetor[i]);
	}
}

void exibir (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nVetor: ");
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//exibindo os valores do vetor
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n");
}
