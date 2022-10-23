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

//main
void main()
{
	//declara��o de vari�veis
	int vet[TAMANHO] = {5,4,6,5,1};
	int resultado;
	
	//chamando a fun��o
	resultado = numOcorrencias (3, vet);
	
	//exibindo o resultado
	printf ("Foram encontradas %d ocorrencias do numero.", resultado);
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
