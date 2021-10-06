/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	desenvolver uma fun��o que preencha um vetor de tamanho 'tam' com os n�meros de 1 a 'tam'.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 10000

//prot�tipos/cabe�alhos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//preenchendo o vetor, e exibindo-o
	preencher (v, TAM);
	exibir (v, TAM);
}

//implementa��o das demais fun��es
void preencher (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
		
	//variando as demais posi��es do vetor
	for (i=1;i<=tamanho;i++)
	{
		vetor[i-1] = i;
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
