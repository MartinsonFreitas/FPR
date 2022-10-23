/*
	FAC - 03/07/2021
	
	Lista XI 
	
	Quest�o 04:
	
	Implementar o algoritmo de busca bin�ria apresentado na quest�o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 1000

//prot�tipo das fun��es
int buscaBinaria (int vetor[], int quant, int valor);

void exibirVetor (int vetor[], int quant);
void preencheVetorOrdenado (int vetor[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[TAM];
	int numero, posicao;
	
	//inicializando o vetor
	preencheVetorOrdenado (vet, TAM);
	
	//exibindo o vetor
	exibirVetor (vet, TAM);		
	
	//perguntando ao usu�rio o valor a ser buscado
	printf ("\n\nQual valor deseja buscar? ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	posicao = buscaBinaria (vet, TAM, numero);
	
	//testando se o elemento n�o foi encontrado
	if (posicao == -1)
	{
		printf ("\nO valor %d nao se encontra no vetor!\n", numero);
	}
	else
	{
		printf ("\nO valor %d se encontra na posicao %d do vetor!\n", numero, posicao);
	}	
}

//implementa��o das fun��es
void exibirVetor (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("\n%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencheVetorOrdenado (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//inserindo o primeiro elemento do vetor
	vetor[0] = (rand()%10)+1;    //o primeiro valor receber� um n�mero entre 1 e 10
	
	//gerando n�meros aleat�rios com a fun��o 'rand' para as demais posi��es
	for (i=1;i<quant;i++)
	{
		vetor[i] = vetor[i-1] + (rand()%3) + 1; //gerando n�meros aleat�rios em fun��o do anterior
	}		
}

int buscaBinaria (int vetor[], int quant, int valor)
{
	//declara��o de vari�veis
	int comeco, fim, meio;
	
	//inicializa��o
	comeco = 0;
	fim = quant-1;
	
	//enquanto existirem posi��es a serem percorridas e comparadas como valor...
	while (comeco <= fim)
	//for (comeco=0,fim=quant-1;comeco<=fim;)
	{
		//determinando a posi��o do elemento do meio
		meio = (comeco+fim)/2;
		
		//para visualizar os valores de comeco, meio e fim
		printf ("\n\t\tcomeco = %d, meio = %d, fim = %d", comeco, meio, fim);
		
		//verificando se o elemento do meio � o valor sendo buscado
		if (vetor[meio] == valor)
		{
			return meio;
		}
		else
		{
			//se o elemento do meio for maior do que o valor sendo buscado ...
			if (vetor[meio] > valor)		//ocorre na primeira rodada do exemplo com valor = 13
			{
				//atualiza o valor de 'fim'
				fim = meio-1;
			}
			else
			{								//ocorre na primeira rodada do exemplo com valor = 28
				//vetor[meio] < valor
				comeco = meio+1;
			}
		}		
	}
	
	//elemento n�o existe no vetor
	return -1;
}
