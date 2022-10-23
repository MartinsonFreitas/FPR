/*
	FAC - 2021/1
	Data: 27/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 04:
	Fazer uma fun��o que calcule o MDC (m�ximo divisor comum) entre dois n�meros.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es

int mdc (int num1, int num2);
int calculaMenor (int a, int b);

//main
void main()
{
	//declara��o de vari�veis
	int valor1, valor2, resp;
	
	//lendo os valores de entrada
	printf ("Entre com o primeiro valor: ");
	scanf ("%d", &valor1);
	
	printf ("\nEntre com o segundo valor: ");
	scanf ("%d", &valor2);
	
	//chamando a fun��o
	resp = mdc(valor1,valor2);
	
	//exibindo o resultado
	printf ("MDC (%d,%d) = %d", valor1, valor2, resp);
}

//implementa��o das fun��es
int mdc (int num1, int num2)
{
	//declara��o de vari�veis
	int menor, i, result;
	
	//determinando o menor valor entre num1 e num2
	menor = calculaMenor (num1, num2);

	//variando de 1 at� o menor, em busca do MDC
	for (i=1;i<=menor;i++)
	{
		//verificando se 'i' � um divesor comum de 'num1' e 'num2'
		if ((num1%i==0) && (num2%i==0))
		{
			result = i;
		}	
	}
	
	//retornando o resultado
	return result;	
}

int calculaMenor (int a, int b)
{
	//determinando quem � o menor entre 'a' e 'b'
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
