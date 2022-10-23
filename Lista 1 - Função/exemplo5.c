/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 30/08/2021
	
	Revis�o - FAC
	
	Desenvolver uma fun��o que exiba os n�meros de 'num1' a 'num2'
	
	[SOLU��O RECOMENDADA!!!] POIS USA PAR�METROS!!!
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos/cabe�alhos das fun��es
void exibeNumeros (int num1, int num2);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int valor1, valor2;
	
	//1� exemplo de chamada � fun��o
	exibeNumeros (10, 50);
	
	//2� exemplo de chamada � fun��o
	printf ("\n\n\nEntre com um numero: ");
	scanf ("%d", &valor1);
	
	printf ("Entre com outro numero: ");
	scanf ("%d", &valor2);
	
	exibeNumeros (valor1, valor2);
}

//implementa��o das demais fun��es
void exibeNumeros (int num1, int num2)
{
	//declara��o de vari�veis
	int i;
	
	//variando os valores de 'num1' a 'num2' e exibindo-os
	for (i=num1; i<=num2; i++)
	{
		printf ("%d  ", i);
	}
}

