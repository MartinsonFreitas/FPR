/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 30/08/2021
	
	Revis�o - FAC
	
	Desenvolver uma fun��o que calcule a soma dos n�meros de 'num1' a 'num2'
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos/cabe�alhos das fun��es
int somaNumeros (int num1, int num2);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int valor1, valor2, resultado;
	
	//lendo os valores que representam o intervalo
	printf ("\n\n\nEntre com um numero: ");
	scanf ("%d", &valor1);
	
	printf ("Entre com outro numero: ");
	scanf ("%d", &valor2);
	
	//chamando a fun��o
	resultado = somaNumeros (valor1, valor2);
	
	//exibe o resultado
	printf ("\n\nSoma = %d", resultado);
}

//implementa��o das demais fun��es
int somaNumeros (int num1, int num2)
{
	//declara��o de vari�veis
	int i, soma = 0;
	
	//variando os valores de 'num1' a 'num2' e somando-os
	for (i=num1;i<=num2;i++)
	{
		soma = soma+i;   // soma += i;
	}
	
	//retornar o resultado
	return soma;
}
