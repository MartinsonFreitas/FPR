/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	desenvolver uma fun��o que preencha um vetor com n�meros rand�micos/aleat�rios
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define TAM 10000

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//preenchendo o vator com n�meros aleat�rios, e exibindo o vetor
	preencherAleatorio (v, TAM);
	exibir (v, TAM);
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
		vetor[i] = 1 + rand()%100;   // % : resto da divis�o
		//rand(): gerando aleatoriamente um n�mero inteiro positivo
		//rand()%100: gerando aleatoriamente um n�mero inteiro positivo no intervalo de 0 a 99
		//1 + rand()%100: gerando aleatoriamente um n�mero inteiro positivo no intervalo de 1 a 100
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
