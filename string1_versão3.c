/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 04/10/2021
	
	STRINGS
	
	Exerc�cio 1: Determinar o n�mero de caracteres de uma string.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos/cabe�alhos das fun��es
int contandostring (char str[]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	char frase[30];
	int quant;
	
	fflush (stdin);  //standard input - entrada padr�o
	
	//leitura de uma string
	printf ("Entre com uma frase: ");
	gets (frase);  //get string
	
	//chamando a fun��o
	quant = contandostring (frase);
	
	//exibindo o resultado
	printf ("\nA frase %s possui %d caracteres", frase, quant);
}

//implementa��o das demais fun��es
int contandostring (char str[])
{
	//declara��o de vari�veis
	int i;//, cont = 0;
	
	//percorrendo os caracteres da string
	for (i=0;str[i]!='\0';i++);
	//{
		//cont++;
	//}
	
	return i;//cont;
}

