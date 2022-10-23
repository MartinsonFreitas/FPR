/*
	FAC - 2021/1
	Data: 20/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 01:
	Desenvolver uma fun��o que exiba os m�ltiplos de N compreendidos no intervalo 
	definido por A e B.
	
	Exemplo:
	
		N = 3
		A = 10 
		B = 25
		
		Ser�o exibidos: 12 15 18 21 24
		
		
		N = 8
		A = 20
		B = 40
		
		Ser�o exibidos: 24 32 40		
*/

//importa��o de bibliotecas
#include <stdio.h>

//implementa��o das fun��es
void exibaMultiplos (int n, int a, int b) 
{
	//declara��o de vari�veis
	int i;
	
	//variando os n�meros no intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		//verificando se 'i' � m�ltiplo de 'n'
		if (i%n==0)
		{
			printf ("%d ", i);
		}
	}
}

//main
void main ()
{
	//declara��o de vari�veis
	int numero, inf, sup;
	
	//perguntando os valores ao usu�rio
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("Entre com o intervalo: ");
	scanf ("%d %d", &inf, &sup);
		
	//chamando a fun��o
	exibaMultiplos (numero, inf, sup);
}
