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
    float tempC, novaTemp;

    printf("ENTRE COM A TEMPERATURA (C): ");
    scanf("%f",&tempC);

    novaTemp = converte(tempC);
    
    printf("%.1f Celsius para:\n %.1f Fahrenheit",tempC, novaTemp);
}
//implementa��o das fun��es
float converte(float tempC)
{
    float tempF;

    tempF = (tempC*9/5)+32;

    return tempF;
}


