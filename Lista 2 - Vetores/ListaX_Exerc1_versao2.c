/*
	FAC - 2021/1
	Data: 24/06/2021
	
	Lista de Exerc�cios X
	
	QUEST�O 01:
	Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero 
	inteiro x em um vetor A.
*/

//importa��o de bibliotecas
#include<stdio.h>

//defini��o de constantes
#define TAMANHO 5

//prot�tipos das fun��es
int numOcorrencias (int numero, int vetor[TAMANHO]);
void preencheVetor (int vetor[TAMANHO]);

//main
void main()
{
	//declara��o de vari�veis
	int vet[TAMANHO];
	int resultado, valor;
	
	//preenchendo o vetor
	preencheVetor (vet);
	
	//perguntando ao usu�rio o valor a ser buscado
	printf ("\n\nQual valor deseja buscar no vetor? ");
	scanf ("%d", &valor);
	
	//chamando a fun��o
	resultado = numOcorrencias (valor, vet);
	
	//exibindo o resultado
	printf ("Foram encontradas %d ocorrencias do numero %d no vetor.", resultado, valor);
}

//implementa��o das fun��es
int numOcorrencias (int numero, int vetor[TAMANHO])
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrer todas as posi��es do vetor
	//for (i=0;i<=TAMANHO-1;i++)
	for (i=0;i<TAMANHO;i++)
	{
		//comparar o numero sendo buscado com cada valor do vetor
		if (numero == vetor[i])
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}

void preencheVetor (int vetor[TAMANHO])
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<TAMANHO;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &vetor[i]);
	}
}
