/*
	FAC - 2021/1
	Data: 01/07/2021
	
	Lista de Exerc�cios X

	QUEST�O 08:
	Dados um vetor de reais (cujos elementos est�o ordenados crescentemente) e 
	um n�mero x, retornar a posi��o da primeira ocorr�ncia de x (caso encontre-se 
	no vetor) ou a posi��o na qual deveria estar (caso contr�rio).
	
	Exemplos:
	
	vetor:   1   3   8   8   10   12   13   15
	         0   1   2   3   4    5    6    7 
	x: 8
			elemento encontrado: retornar a posi��o 2
				
	
	vetor:   1   3   8   8   10   12   13   15
	         0   1   2   3   4    5    6    7 
	x: 9
			elemento n�o encontrado: deveria estar na posi��o 4
	
	
	vetor:   1   3   8   8   10   12   13   15  
	         0   1   2   3   4    5    6    7  
	x: 20
			elemento n�o encontrado: deveria estar na posi��o 8
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAM 20

//prot�tipos das fun��es
void exibirVetor (float vetor[], int quant);
void preencheVetorOrdenado (float vetor[], int quant);

int buscar (float vetor[], int quant, float x);

//main
void main()
{
	//declara��o de vari�veis
	float vet[TAM];
	float num;
	int result;
	
	//preenchendo o vetor aleatoriamente
	preencheVetorOrdenado (vet, TAM);
		
	//exibindo o vetor original
	exibirVetor (vet, TAM);
	
	//obtendo o valor a ser buscado
	printf ("Qual valor deseja buscar? ");
	scanf ("%f", &num);
	
	//chamando a fun��o de remo��o
	result = buscar (vet, TAM, num);

	//exibindo o resultado
	printf ("\nPosicao retornada: %d", result);	
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
		printf ("\n%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencheVetorOrdenado (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//inserindo o primeiro elemento do vetor
	vetor[0] = (float)(rand()%10)+1;    //o primeiro valor receber� um n�mero entre 1 e 10
	
	//gerando n�meros aleat�rios com a fun��o 'rand' para as demais posi��es
	for (i=1;i<quant;i++)
	{
		vetor[i] = vetor[i-1] + (float)(rand()%3); //gerando n�meros aleat�rios em fun��o do anterior
	}		
}

int buscar (float vetor[], int quant, float x)
{
	//declara��o de vari�veis
	int i;
		
	//percorrendo todas as posi��es do vetor
	for (i=0;i<quant;i++)
	{
		//verificando se o elemento foi encontrado
		if (vetor[i] == x)
		{
			return i;
		}
		else
		{
			//se encontrar um valor maior do que x, conclui-se que este n�o est� no vetor
			if (vetor[i] > x)
			{
				return i;				
			}
		}
	}
	
	//se chegou neste ponto, � pq o 'x' � maior do que todos os elementos
	return quant;
}
