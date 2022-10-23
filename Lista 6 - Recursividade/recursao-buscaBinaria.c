/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 23/10/2021 (aula extra)
	
	Recursividade
	
	Exemplo 5: Busca bin�ria (busca de um n�mero inteiro n em um vetor ordenado 
	crescentemente, retornando a sua posi��o (caso encontrado)).
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 1000

//prot�tipos das fun��es
int buscaBinaria (int numero, int vetor[], int inicio, int fim);

void preencher(int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//implementa��o da fun��o main
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
	resp = buscaBinaria (num, vetor, 0, TAM-1);	  //inicialmente, a busca considerar� todas as posi��es do vetor; ou seja, da posi��o 0 � posi��o TAM-1
	
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
int buscaBinaria (int numero, int vetor[], int inicio, int fim)
{
	int meio;	//armazenar� a posi��o do elemento do meio do vetor
	
	//verificando se ainda h� posi��es a serem percorridas
	if (inicio <= fim)
	{	
		//calculando a posi��o 'meio'
		meio = (inicio + fim)/2;
		
		//verificando se o elemento do meio � aquele buscado
		if (vetor[meio] == numero)		//caso base 1
		{
			return meio;	
		}	
		else
		{
			//verificando se o elemento do meio � maior do que o numero
			if (vetor[meio] > numero)
			{
				//'fim' deve ser ajustado, de modo que o espa�o de busca do vetor
				//passe a ser o subvetor � esquerda da posi��o 'meio'
				fim = meio-1;
				
				return buscaBinaria (numero, vetor, inicio, fim);
			}
			else
			{
				//o elemento do meio � menor do que o numero
			
				//'inicio' deve ser ajustado, de modo que o espa�o de busca do vetor
				//passe a ser o subvetor � direita da posi��o 'meio'
				inicio = meio+1;
				
				return buscaBinaria (numero, vetor, inicio, fim);
			}
		}
	}
	else		//caso base 2
	{
		//ou seja, 'inicio' � maior do que 'fim'
		return -1; //o elemento n�o encontra-se no vetor
	}
}
