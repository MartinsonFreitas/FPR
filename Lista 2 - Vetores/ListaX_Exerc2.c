/*
	FAC - 2021/1
	Data: 24/06/2021
	
	Lista de Exerc�cios X
	
	QUEST�O 02:
	Implementar uma fun��o que, dado um vetor de reais, troque o 1� e o 2� elementos, 
	em seguida o 3� e o 4� elementos e assim sucessivamente, at� se chegar ao final 
	do vetor.
	
	Exemplos:
	
	suponha o seguinte vetor com 10 elementos
		vet: 1  2  3  4  5  6  7  8  9  0
		vet: 2  1  4  3  6  5  8  7  0  9

	suponha o seguinte vetor com 5 elementos
		vet: 1  2  3  4  5 
		vet: 2  1  4  3  5
*/

//importa��o de bibliotecas
#include<stdio.h>

//defini��o de constantes
#define TAMANHO 11

//prot�tipos das fun��es
void preencheVetor (float vetor[], int quant);
void exibirVetor (float vetor[], int quant);

void trocar (float vetor[], int quant);

//main
void main()
{
	//declara��o de vari�veis
	float vet[TAMANHO];

	//preenchendo o vetor
	preencheVetor (vet, TAMANHO);
	
	//antes da troca
	printf ("\nAntes da troca:\n");
	exibirVetor (vet, TAMANHO);
	
	//chamando a fun��o de troca
	trocar (vet, TAMANHO);

	//depois da troca
	printf ("\nDepois da troca:\n");
	exibirVetor (vet, TAMANHO);
}

//implementa��o das fun��es
void preencheVetor (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//gerando n�meros aleat�rios com a fun��o 'rand'
	for (i=0;i<quant;i++)
	{
		vetor[i] = (float)(rand()%50)+1; //gerando n�meros aleat�rios de 1 a 50
	}		
}

void exibirVetor (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}

void trocar (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i, j;
	float aux;
	
	for (i=0, j=1; j<quant; i+=2, j+=2)
	{
		//trocando os valores que est�o nas posi��es i e j
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
}
