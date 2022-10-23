/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 04/04/2022
	
	Lista de Exerc�cios V (matrizes):
	
	QUEST�O 04:
	Fazer uma fun��o que, dada uma matriz M6�6, determine se ela � 
	sim�trica.
	
	vers�o 2: diminuindo o n�mero de compara��es, percorrendo apenas
	a matriz triangular superior.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 6
#define C 6

//prot�tipos das fun��es
int verificarSimetria (int m[L][C]);

void preencher (int m[L][C]);
void exibir (int m[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int m1[L][C], 
	    m2[L][C] = { {1,3,6,4,7,8},
		             {3,7,5,6,9,8},
		             {6,5,2,5,3,4},
		             {4,6,5,1,7,8},
		             {7,9,3,7,4,1},
		             {8,8,4,8,1,9} },
		resp;
	
	//preenchendo a matriz m1 com n�meros aleat�rios
	preencher (m1);
	
	//exibindo a matriz m1
	printf ("Exibindo a matriz m1:\n\n");
	exibir (m1);
	
	//chamando a fun��o
	resp = verificarSimetria (m1);
	
	//exibindo o resultado
	if (resp == 1)
	{
		printf ("\n\nA matriz m1 eh simetrica.");
	}
	else
	{
		printf ("\n\nA matriz m1 nao eh simetrica.");
	}

	
	//exibindo a matriz m2
	printf ("\n\n\nExibindo a matriz m2:\n\n");
	exibir (m2);
	
	//chamando a fun��o
	resp = verificarSimetria (m2);
	
	//exibindo o resultado
	if (resp == 1)
	{
		printf ("\n\nA matriz m2 eh simetrica.");
	}
	else
	{
		printf ("\n\nA matriz m2 nao eh simetrica.");
	}
}

//implementa��o das fun��es
int verificarSimetria (int m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo todas as linhas da matriz
	for (i=0;i<L-1;i++)
	{
		//percorrendo todas as colunas da matriz
		for (j=i+1;j<C;j++)
		{
			//verificando se mij � diferente de mji (e, portanto, a matriz n�o � sim�trica
			if (m[i][j] != m[j][i])
			{
				return 0;			
			}
		}
	}
	
	//se chegou at� aqui, � porque todo mij = mji
	return 1;
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
