/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	desenvolver uma fun��o que inverta os elementos de um vetor.

	Exemplo:
			vetor antes da invers�o:
			1  2  3  4  5  6  7  8  9  10
			
			vetor depois da invers�o:
			10  9  8  7  6  5  4  3  2  1	           

*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 100

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

void inverter (int vetor[], int tamanho);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
		
	//preenchendo o vetor, e exibindo-o
	preencherAleatorio (v, TAM);
	exibir (v, TAM);
	
	//chamando a fun��o
	inverter (v, TAM);
	
	//exibindo o vetor ap�s a invers�o
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

void inverter (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, j, aux;
	
	for (i=0,j=tamanho-1;i<j;i++,j--)
	{
		//trocando os elementos que est�o nas posi��es 'i' e 'j'
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
}
