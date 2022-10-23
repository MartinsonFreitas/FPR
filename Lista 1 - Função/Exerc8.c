/*
	FAC - 2021/1
	Data: 29/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 08:
	Desenvolver uma fun��o que exiba todos os n�meros primos inferiores a 
	determinado valor inteiro N.
*/

//importa��o de bibliotecas
#include<stdio.h>

//prot�tipos das fun��es
void primo (int n);

//main
void main()
{
	//declara��o de vari�veis
	int n;
	
	//leitura do valor de entrada
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	//chamando a fun��o
	printf("\nNumeros classifcados como primos menores que %d: ", n);
	primo(n);
}

//implementa��o das fun��es
void primo (int n)
{
	//declara��o de vari�veis
	int i, j, cont;

	//variando os valores no intervalo de 1 a n-1 (ou seja, n�meros inferiores a n)
	for (i=1; i<n; i++)
	{
		//zerando a quantidade de divisores do n�mero do intervalo (i)
		cont=0;

		//verificando quantos divisores o n�mero 'i' possui
		for(j=1; j<=i; j++)
		{
			//verificando se 'j' � divisor de 'i'
			if(i%j==0)
			{
				cont++;
			}
		}
		
		//verificando se 'i' � primo (ou seja, se possui 2 divisores)
		if (cont==2)
		{
			printf("%d ", i);
		}
	}
}

