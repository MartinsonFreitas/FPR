/*
	FAETERJ-Rio
	Fundamentos de Programa��o - 2022/1 - Turma: Noite
	Data: 23/05/2022
	
	Lista de Exerc�cios IX (Recursividade + strings)
	
	Quest�o 04:
	Desenvolver uma fun��o recursiva que, dada uma string, exiba-a 
	invertida.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//declara��o de prot�tipos
void exibirInvertida (char string[]);		//essa ser� chamada pela main
void funcao (char string[], int posicao);	//a fun��o recursiva

//main
void main ()
{
	//declara��o de vari�veis
	char str[30];
	
	//leitura dos dados de entrada
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (str);
	
	//chamando a fun��o
	exibirInvertida (str);
}

//implementa��o das fun��es
void exibirInvertida (char string[])
{
  	funcao (string, strlen (string) - 1);
}

void funcao (char string[], int posicao)
{
	if (posicao >= 0)	//caso geral
	{
    	printf ("%c", string[posicao]);
    
		//chamando a fun��o recursivamente
		funcao (string, posicao-1);
  	}
}
