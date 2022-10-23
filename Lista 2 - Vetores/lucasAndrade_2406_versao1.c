#include <stdio.h>
#define TAM 5
/*

	"Desenvolver uma fun��o que, dado um vetor com tam valores inteiros, 
	determine o maior e o menor dentre eles."

*/

void maiorMenor (int vetor[], int quant, int *maior, int *menor)
{
	//declara��o de variaveis
	int i;
	
	//rodando o vetor inteiro
	for (i=0;i<quant;i++)
	{
		//verificando se o valor da posi��o do vetor � maior do que o valor guardado
		if(vetor[i]>=*maior)
		{
			*maior=vetor[i];
		}
		else
		{
			//Se entrou aqui, a condi��o if � falsa
			//Logo, o valor � menor.
			if (vetor[i] < *menor)
			{
				*menor=vetor[i];
			}
		}
	}
}

void main()
{
	int maior=-999999, menor=999999, 
	vetor[TAM] = {1,5,1,3,2}; // Vetor sendo inicializado
	
	/*
		Chamando a fun��o e retornando os valores menor e maior
		por refer�ncia aos endere�os de mem�ria das respectivas 
		vari�veis declaradas na main
	*/
	
	maiorMenor (vetor, TAM, &maior, &menor);
	
	printf("\nMaior valor: %d \n", maior);
	printf("\nMenor valor: %d", menor);
}
