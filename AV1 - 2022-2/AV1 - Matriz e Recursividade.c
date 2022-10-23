/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Manh�
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - Parte I - 19/10/2022
	
	Quest�o 02 [2,5 pontos]:
	Pede-se o desenvolvimento de uma fun��o recursiva que, dada 
	uma matriz M de L linhas e C colunas, onde L e C s�o 
	constantes, e tr�s linhas L1, L2 e L3, altere os 
	elementos de L3, de forma que cada um consista na soma 
	dos elementos de L1 e L2, conforme ilustrado no 
	exemplo abaixo:
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 8
#define C 4

//prot�tipos das fun��es
void somaLinhas (int matriz[L][C], int linha0, int linha1, int linha2, int j);

void exibirMatriz (int M[L][C]);

//main
void main ()
{
	int matriz[L][C] = {{1, 5, 9, 2},
	                    {0, 3, 4, 8},
	                    {1, 1, 3, 7},
	                    {7, 9, 6, 5},
	                    {1, 3, 2, 4},
	                    {8, 6, 8, 7},
	                    {9, 7, 2, 1},
	                    {4, 6, 7, 8}};

	//exibindo a matriz antes da chamada � fun��o
	exibirMatriz (matriz);
	
	//chamandao a fun��o
	somaLinhas (matriz, 6, 1, 3, 0);
	
	//exibindo a matriz ap�s a chamada � fun��o
	exibirMatriz (matriz);
}
	
//implementa��o das fun��es
void somaLinhas (int matriz[L][C], int linha0, int linha1, int linha2, int j)
{	
    if(j<=C){
    	matriz[linha0][j] = ( (matriz[linha1][j]) + (matriz[linha2][j]) );
    	somaLinhas(matriz, linha0, linha1, linha2, j+1);
	}	
}

void exibirMatriz (int M[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("Elementos da matriz:\n\n");
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%3d ", M[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

