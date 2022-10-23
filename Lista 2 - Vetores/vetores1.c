/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	1. desenvolver uma fun��o que leia 100 valores para um vetor
	
	[vers�o 1: deixando o vetor com tamanho fixo na declara��o do par�metro.
	Problema: a fun��o s� funcionar� se a main passar um vetor exatamente do tamanho definido na fun��o.]
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 100

//prot�tipos/cabe�alhos das fun��es
void leitura (int vetor[TAM]);
void exibir (int vetor[TAM]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	leitura (v);
	exibir (v);
}

//implementa��o das demais fun��es
void leitura (int vetor[TAM])
{
	//declara��o de vari�veis
	int i;
	
	//variando todas as posi��es do vetor
	for (i=0;i<TAM;i++)
	{
		//leitura dos valores
		printf ("Entre com um numero: ");
		scanf ("%f", &vetor[i]);
	}
}

void exibir (int vetor[TAM])
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nVetor: ");
	
	//variando todas as posi��es do vetor
	for (i=0;i<TAM;i++)
	{
		//exibindo os valores do vetor
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n");
}
