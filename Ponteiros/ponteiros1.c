/*
	FAETERJ-Rio
	FPR - Noite		Professor Leonardo Vianna
	Data: 29/11/2021
	
	Ponteiros
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int a, b;		//armazenam n�meros inteiros
	int *p, *q;		//armazenam endere�os de mem�rias nos quais encontramos n�meros inteiros
	
	...
	
	a = b;		//v�lido; o valor armazenado em 'b' � copiado para 'a'
	a = p;		//inv�lido, pois s�o de tipos diferentes/incompat�veis
	p = b;		//inv�lido, pois s�o de tipos diferentes/incompat�veis
	p = q;		//v�lido; o endere�o de mem�ria armazenado em 'q' � copiado para 'p'
	
	...
}
