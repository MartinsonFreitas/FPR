/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 09/05/2022
	
	Recursividade
	
	Busca bin�ria: buscar um elemento (e retornar a sua posi��o, caso encontrado) em um vetor cujos elementos 
	est�o ordenados crescentemente. Caso o elemento n�o se encontre no vetor, o valor -1 ser� retornado.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 100

//prot�tipos das fun��es
int buscaBinaria (int v[], int tamanho, int numero);
int buscaBinariaAux (int v[], int numero, int inicio, int fim);

void preencher(int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int vetor[TAM], resp, num;
	
	//preenchendo o vetor com valores aleat�rios
	preencher (vetor, TAM);
	
	//exibindo o vetor
    exibir (vetor, TAM);
	
	//lendo o valor a ser buscado
	printf ("Entre com o numero a ser buscado: ");
	scanf ("%d", &num);
	
	//buscando o elemento no vetor
	resp = buscaBinaria (vetor, TAM, num);	
	
	//verificando o retorno da fun��o
	if (resp == -1)
	{
		printf ("O valor %d nao foi encontrado no vetor\n", num);
	}
	else
	{
		printf ("O valor %d foi encontrado na posicao %d do vetor\n", num, resp);
	}	
}
	
//implementa��o das fun��es

int buscaBinaria (int v[], int tamanho, int numero)
{
	return buscaBinariaAux (v, numero, 0, tamanho-1);	
}

int buscaBinariaAux (int v[], int numero, int inicio, int fim)
{
	//declara��o de vari�veis
	int meio;
	
	//caso base
	if (inicio > fim)
	{
		return -1;
	}
	else
	{
		//caso geral
		
		//determinando a posi��o do elemento do meio do vetor
		meio = (inicio + fim)/2;
		
		//verificando se o elemento buscado est� no meio do vetor
		if (v[meio] == numero)
		{
			return meio;
		}
		else
		{
			//verificando se a busca deve continuar no subvetor � esquerda da posi��o meio
			if (v[meio] > numero)
			{
				return buscaBinariaAux (v, numero, inicio, meio-1);			
			}
			else
			{
				//... ou � direita da posi��o meio
				return buscaBinariaAux (v, numero, meio+1, fim);
			}
		}
	}
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //armazenando na primeira posi��o um valor de 1 a 10
    vetor[0] = 1 + rand()%10;
    
    //corpo da fun��o
    for(i = 1; i < tamanho; i++)
	{
		vetor[i] = vetor[i-1] + rand()%5; //garantindo que o vetor estar� ordenado crescentemente
    }
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
