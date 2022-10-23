/*
	FAC - 2021/1
	Data: 01/07/2021
	
	Lista de Exerc�cios X

	QUEST�O 09:
	Implementar a fun��o de inser��o de determinado elemento em um vetor ordenado 
	crescentemente (dica: utilizar a fun��o do item 08 para auxiliar).
	
	Exemplos:
	
	vetor:   1   3   8   8   10   12   13   15
	         0   1   2   3   4    5    6    7 
	x: 8
			fun��o buscar: retorna a posi��o 2

	inserir: descloca todos da posi��o 2 em diante uma posi��o para a direita
	
	vetor:   1   3  |8|  8   8   10   12   13   15
	         0   1   2   3   4    5    6    7 
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define CAP 5

#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
void exibirVetor (float vetor[], int quant);

int buscar (float vetor[], int quant, float x);
int inserir (float vetor[], int *quant, int capacidade, float x);

//main
void main()
{
	//declara��o de vari�veis
	float vet[CAP];
	int quantidade = 0;
	
	int sair = FALSE;
	char opcao;
	float numero;
	
	//inserindo valores at� que o usu�rio opte por parar
	do
	{
		printf ("\n\nEntre com o elemento que deseja inserir: ");
		scanf ("%f", &numero);
		
		//inserindo o elemento no vetor
		if (inserir (vet, &quantidade, CAP, numero) == TRUE)
		{
			printf ("\n\tO numero %.1f foi inserido com sucesso.\n", numero);
			
			//exibindo o vetor
			exibirVetor (vet, quantidade);			
			
			//verificando se o usu�rio deseja inserir mais valores no vetor
			printf ("\nDeseja inserir um novo valor [S/N]? ");
			fflush (stdin);
			scanf ("%c", &opcao);
			opcao = toupper (opcao);			
		}
		else
		{
			printf ("\n\tERRO: nao ha mais espaco no vetor!\n");
			sair = TRUE;
		}
	}
	while ((opcao == 'S') && (sair == FALSE));
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

int inserir (float vetor[], int *quant, int capacidade, float x)
{
	//declara��o de vari�veis
	int i, pos;
	
	//verificando se o vetor est� 'cheio'
	if (*quant == capacidade)
	{
		return FALSE;
	} 
	else
	{
		//se chegou aqui, h� espa�o no vetor para inserir o elemento
		
		//buscar em que posi��o o elemento ser� inserido
		pos = buscar (vetor, *quant, x);	
		
		//deslocar para a direita todos os elementos da posi��o 'pos' ao final do vetor
		for (i=*quant-1;i>=pos;i--)
		{
			vetor[i+1] = vetor[i];
		}
		
		//inserindo o elemento 'x' na posi��o 'pos'
		vetor[pos] = x;
		
		//atualizando a quantidade de elementos no vetor
		(*quant)++;
		
		return TRUE;
	}
}
