/*
	FAC - 2021/1
	Data: 24/06/2021
	
	Lista de Exerc�cios X

	QUEST�O 03:
	Pede-se a implementa��o de uma fun��o que, dado um vetor contendo n�meros reais, 
	determine se o mesmo encontra-se ordenado de forma crescente.	
*/

//importa��o de bibliotecas
#include<stdio.h>

//prot�tipos das fun��es
void exibirVetor (float vetor[], int quant);

int verificaOrdenacao (float vetor[], int quant);

//main
void main()
{
	//declara��o de vari�veis
	float vet1[5] = {1,2,3,4,5};
	float vet2[8] = {1,2,3,4,5,6,8,7};
	int resultado;
	
	//trabalhando com o primeiro vetor
	exibirVetor (vet1, 5);
	
	resultado = verificaOrdenacao (vet1, 5);
	
	if (resultado == 0)
	{
		printf ("vet1 nao esta ordenado!\n");
	}
	else
	{
		printf ("vet1 esta ordenado!\n");
	}


	//trabalhando com o segundo vetor
	exibirVetor (vet2, 8);
	
	resultado = verificaOrdenacao (vet2, 8);
	
	if (resultado == 0)
	{
		printf ("vet2 nao esta ordenado!\n");
	}
	else
	{
		printf ("vet2 esta ordenado!\n");
	}
}

//implementa��o das fun��es
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

int verificaOrdenacao (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i, j;
	
	//comparando os elementos do vetor
	for (i=0, j=1;j<quant;i++,j++)
	{
		//verificando o erro!
		if (vetor[i] > vetor[j])
		{
			return 0;
		}
	}
	
	//vetor est� ordenado
	return 1;
}
