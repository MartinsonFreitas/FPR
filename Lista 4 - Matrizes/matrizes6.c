/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 20/09/2021
	
	MATRIZES
	
	Exemplo 6: Com quais valores � preenchida a matriz pela fun��o "preencher"?
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define L 15
#define C 15

//declara��o de prot�tipos
void preencher (int matriz[L][C]);
void exibir (int matriz[L][C]);

//main
void main ()
{
	//declara��o da matriz
	int m[L][C];
		
	//preenchendo a matriz
	preencher (m);
	
	//exibindo a matriz
	exibir (m);
}

//implementa��o das fun��es
void preencher (int matriz[L][C])    //O que � feito por esta fun��o???
{
	//declara��o de vari�veis
	int i, j;
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			if (i==j)			//se o n� da linha for igual ao n� da coluna (ou seja, se o elemento pertencer � diagonal principal), esta posi��o armaxenar� o valor 0
			{
				matriz[i][j] = 0;  
			}
			else
			{
				if (i>j)		//se o n� da linha for maior do que n� da coluna (ou seja, se o elemento estiver abaixo da diagonal principal), esta posi��o armaxenar� o valor -1
				{
					matriz[i][j] = -1;
				}
				else
				{
					matriz[i][j] = 1;   //se o n� da linha for menor do que n� da coluna (ou seja, se o elemento estiver acima da diagonal principal), esta posi��o armaxenar� o valor 1
				}
			}
		}
	}
}

void exibir (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("\n\nElementos da matriz:\n");
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%3d ", matriz[i][j]);
		}
		
		printf ("\n");
	}
}
