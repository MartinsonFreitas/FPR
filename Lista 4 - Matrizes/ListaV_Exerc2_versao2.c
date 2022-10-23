/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 28/03/2022
	
	Lista de Exerc�cios V (matrizes):
	
	QUEST�O 02: Desenvolver uma fun��o que, dada uma matriz M15�20, 
	determine se um n�mero X se encontra na linha L da matriz.  
	
	vers�o 2: mais eficiente, pois percorre apenas os elementos da linha 
	desejada.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 15
#define C 20

//prot�tipos das fun��es
int verificaOcorrencia (int m[L][C], int linha, int numero);

void preencher (int m[L][C]);
void exibir (int m[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int matriz[L][C], resp;
	
	//preenchendo a matriz com n�meros aleat�rios
	preencher (matriz);
	
	//exibindo a matriz
	printf ("Exibindo a matriz:\n\n");
	exibir (matriz);
	
	//chamando a fun��o
	resp = verificaOcorrencia (matriz, 3, 10);
	
	//exibindo o resultado
	if (resp == 1)
	{
		printf ("\n\nElemento encontrado na linha desejada.");
	}
	else
	{
		printf ("\n\nElemento nao encontrado na linha desejada.");
	}
}

//implementa��o das fun��es
int verificaOcorrencia (int m[L][C], int linha, int numero)
{
	//declara��o de vari�veis
	int j;
	
	//varrendo as colunas da matriz
	for (j=0;j<C;j++)
	{
		//verificando se o elemento foi encontrado
		if (m[linha][j] == numero)
		{
			return 1;
		}
	}
	
	//se chegou neste ponto, o numero nao foi encontrado.
	return 0;
}

void preencher (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;

	//garantindo que as sequ�ncias aleat�rias s�o diferentes
	srand (time(NULL));
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			m[i][j] = rand()%20 + 1;
		}
	}
}

void exibir (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			printf ("%3d ", m[i][j]);
		}
		
		printf ("\n");
	}
}
