/*
	FAC - 2021/1
	Data: 20/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 02:
	Implementar uma fun��o que converta determinada temperatura em graus Celsius 
	para graus Fahrenheit.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
float converte (float tempC);

//main
void main()
{
	int temp;
	
	printf ("Celsius\tFahrenheit\n");
	printf ("--------------\n");
	for (temp=0;temp<=100;temp++)
	{
		printf ("%d C\t%.1f F\n", temp, converte(temp));
	}
}
//implementa��o das fun��es
float converte(float tempC)
{
    return (tempC*9/5)+32;
}


