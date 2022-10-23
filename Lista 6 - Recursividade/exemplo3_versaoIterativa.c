/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 23/10/2021 (aula extra)
	
	Desenvolver uma fun��o recursiva que retorne a quantidade de ocorr�ncias de um n�mero 
	em um vetor de inteiros.
	
	[VERS�O ITERATIVA, A PEDIDO DOS ALUNOS]
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int numOcorrencias (int numero, int vetor[], int quant);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int vet[10] = {1,8,1,2,6,4,1,3,6,1};
	int cont, numero = 1;
	
	//chamando a fun��o
	cont = numOcorrencias (numero, vet, 10);	
	
	//exibindo o resultado
	printf ("Foram encontradas %d ocorrencias do numero %d no vetor.", cont, numero);
}

//implementa��o
int numOcorrencias (int numero, int vetor[], int quant)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		//comparando cada elemento com o n�mero sendo buscado
		if (vetor[i] == numero)
		{
			cont++;
		}
	}
	
	//retornando o n�mero de ocorr�ncia
	return cont;
}
