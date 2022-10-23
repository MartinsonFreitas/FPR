/*
	FAC - 2021/1
	Data: 24/06/2021
	
	Lista de Exerc�cios X

	QUEST�O 06:
	Fa�a uma fun��o que, dado um vetor de reais, altere todas as ocorr�ncias do 
	n�mero A pelo n�mero B.
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAM 50

//prot�tipos das fun��es
void exibirVetor (float vetor[], int quant);
void preencheVetor (float vetor[], int quant);

int alterar (float vetor[], int quant, float numA, float numB);

//main
void main()
{
	//declara��o de vari�veis
	float vet[TAM];
	float num1, num2;
	int result;
	
	//preenchendo o vetor com n�meros aleat�rios
	preencheVetor (vet, TAM);
	
	//exibindo o vetor para o usu�rio
	exibirVetor (vet, TAM);
	
	//perguntando os valores ao usu�rio
	printf ("\n\nQual valor deseja alterar? ");
	scanf ("%f", &num1);
	
	printf ("\nPor qual valor deseja alterar? ");
	scanf ("%f", &num2); 	
	
	//chamando a fun��o alterar
	result = alterar (vet, TAM, num1, num2);
	
	//exibindo o vetor depois da altera��o
	exibirVetor (vet, TAM);

	//exibindo a quantidade de altera��es realizadas
	printf ("\nForam realizadas %d substituicoes de %.1f pelo %.1f.\n", result, num1, num2);
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

int alterar (float vetor[], int quant, float numA, float numB)
{
	//declara��o de vari�veis
	int i, cont=0;
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<quant;i++)
	{
		//verificando se o numA foi encontrado
		if (vetor[i] == numA)
		{
			vetor[i] = numB;
			cont++;
		}
	}
	
	//retornando a quantidade de altera��es realizadas
	return cont;
}
