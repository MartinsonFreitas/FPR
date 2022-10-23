/*
	FAC - 2021/1
	Resolu��o dos exerc�cios que n�o foram resolvidos em sala com o professor.
	
	Lista de Exerc�cios XI 
	
	Quest�o 05:
	Implementar uma fun��o que, dado um vetor contendo n�meros reais, determine 
	o maior e o segundo maior elementos.

	Nota: considerar que n�o h� repeti��o de elementos no vetor.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void maiores (float vetor[], int quant, float *maior, float *segundoMaior);

void exibirVetor (float vetor[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	float vet[10] = {5,3,2,1,4,6,9,8,7,0};
	float primeiro, segundo;
	    
	//exibindo o vetor
	exibirVetor (vet, 10);		
	
	//chamando a fun��o
	maiores (vet, 10, &primeiro, &segundo);
	
	//exibindo os resultados
	printf ("\nMaior: %.1f", primeiro);
	printf ("\nSegundo maior: %.1f", segundo);
}

//implementa��o das fun��es

//Determina o maior e o segundo maior valores do vetor, retornando-os em 'maior' e
//'segundoMaior'
void maiores (float vetor[], int quant, float *maior, float *segundoMaior)
{
	//declara��o de vari�veis
	int i;
	
	//inicializando *maior e *segundoMaior com os dois primeiros elementos do vetor
	if (vetor[0] < vetor[1])
	{
		*maior = vetor[1];
		*segundoMaior = vetor[0];
	}
	else
	{
		*maior = vetor[0];
		*segundoMaior = vetor[1];
	}
	
	//percorrendo as demais posi��es do vetor
	for (i=2;i<quant;i++)
	{
		//verificando se o elemento vetor[i] � o maior de todos
		if (vetor[i] > *maior)
		{
			//atualizando o maior e o segundo maior
			*segundoMaior = *maior;
			*maior = vetor[i];
		}
		else
		{
			//verificando se o elemento vetor[i] � o segundo maior valor do vetor
			if (vetor[i] > *segundoMaior)
			{
				//atualizando o segundo maior
				*segundoMaior = vetor[i];
			}
		}
	}
}

//Exibe na tela os elementos do vetor
void exibirVetor (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}
