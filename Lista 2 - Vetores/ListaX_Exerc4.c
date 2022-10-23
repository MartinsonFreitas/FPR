/*
	FAC - 2021/1
	Data: 24/06/2021
	
	Lista de Exerc�cios X

	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte 
	sequ�ncia:

							S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 2� 
	e 3� � igual a 2, entre o 3� e o 4� � igual a 3, e assim sucessivamente.
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAM 50

//prot�tipos das fun��es
void exibirVetor (int vetor[], int quant);

void gerarSequencia (int vetor[], int quant);

//main
void main()
{
	//declara��o de vari�veis
	int vet[TAM];
	
	//preenchendo o vetor com a sequ�ncia
	gerarSequencia (vet, TAM);
	
	//exibindo o vetor
	exibirVetor (vet, TAM);
}

//implementa��o das fun��es
void exibirVetor (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void gerarSequencia (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i, j;
	
	//atribuindo o primeiro valor da sequ�ncia � primeira posi��o do vetor
	vetor[0] = 1;
	
	//preenchendo as demais posi��es do vetor
	for (i=0,j=1;j<quant;i++,j++)
	{
		vetor[j] = vetor[i] + j;	
	}	
}

							//S = 1, 2, 4, 7, 11, 16, ...

