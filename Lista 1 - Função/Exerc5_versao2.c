/*
	FAC - 2021/1
	Data: 29/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 05:
	Fazer uma fun��o que calcule o MMC (m�nimo m�ltiplo comum) entre dois n�meros.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es

int mmc (int num1, int num2);
int calculaMaior (int a, int b);

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
	resp = mmc(valor1,valor2);
	
	//exibindo o resultado
	printf ("MMC (%d,%d) = %d", valor1, valor2, resp);
}

//implementa��o das fun��es
int mmc (int num1, int num2)
{
	//declara��o de vari�veis
	int maior, i;
	
	//determinando o maior valor entre num1 e num2
	maior = calculaMaior (num1, num2);

	//variando de 'maior' at� ser encontrado um n�mero que seja m�tiplo de 'num1' e 'num2'; este ser� o MMC
	for (i=maior;;i++)
	{
		//verificando se 'i' � um m�ltiplo comum de 'num1' e 'num2'
		if ((i%num1==0) && (i%num2==0))
		{
			return i;
		}	
	}
	
	/*
	Observa��o: notem que omitimos a condi��o de perman�ncia do FOR. Se n�o existisse
	o comando 'return' dentro do FOR, este ficaria rodando infinitamente por n�o ter uma 
	condi��o que o fa�a parar! Como sabemos que existir� o MMC dos dois n�meros (no pior
	dos casos, o MMC ser� o produto entre os dois valores), temos a certeza de que o return
	ser� executado! 
	*/
}

int calculaMaior (int a, int b)
{
	//determinando quem � o menor entre 'a' e 'b'
	/*if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}*/
	
	return (a>b)?a:b;
}
