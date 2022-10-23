/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 30/08/2021
	
	Revis�o - FAC
	
	Desenolver uma fun��o que troque os conte�dos de duas vari�veis
	
	[IMPLEMENTA��O CORRIGIDA - USOU PONTEIROS - PAR�METROS POR REFER�NCIA]
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos/cabe�alhos das fun��es
void trocar (int *a, int *b);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int valor1, valor2;
	
	//lendo os valores de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &valor1);
	
	printf ("Entre com outro numero: ");
	scanf ("%d", &valor2);
	
	//exibindo os n�meros antes de chamar a fun��o
	printf ("\nAntes da chamada: %d e %d\n", valor1, valor2);
	
	//chamando a fun��o
	trocar (&valor1, &valor2);
	
	//exibindo os n�meros depois de chamar a fun��o
	printf ("Depois da chamada: %d e %d\n", valor1, valor2);	
}

//implementa��o das demais fun��es
void trocar (int *a, int *b)
{
	//declara��o de vari�veis
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
