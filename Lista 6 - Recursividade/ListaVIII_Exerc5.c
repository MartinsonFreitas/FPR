/*
	FAETERJ-Rio
	Fundamentos de Programa��o - 2022/1 - Turma: Noite
	Data: 23/05/2022
	
	Lista de Exerc�cios VIII (Recursividade)
	
	Quest�o 05:
	Dada uma string s, desenvolver uma fun��o recursiva que 
	determine se s � ou n�o um pal�ndromo.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de prot�tipos
int palindromo (char string[]);		//a fun��o que ser� chamada na main
int verificarPalindromo (char string[], int inicio, int fim); //a fun��o recursiva

//main
void main ()
{
	//declara��o de vari�veis
	char s[30];
	int resultado;
	
	//leitura dos dados de entrada
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (s);
	
	//chamando a fun��o
	resultado = palindromo (s);
	
	//testando o resultado
	if (resultado == TRUE)
	{
		printf ("\n\nA string %s e' um palindromo!", s);
	}
	else
	{
		printf ("\n\nA string %s nao e' um palindromo!", s);
	}
}

//implementa��o das fun��es
int verificarPalindromo (char string[], int inicio, int fim)
{
	if (inicio < fim)  //caso geral: ainda h� caracteres a serem comparados
	{
		//verificando se os caracteres s�o diferentes (e, portanto, a string n�o � um pal�ndromo)
    	if (string[inicio] != string[fim])
    	{
    		return FALSE;
    	} 
		else 
		{
			//chamando a fun��o recursivamente, para fazer compara��o
			//dos pr�ximos caracteres
			return verificarPalindromo (string, inicio+1, fim-1);
    	}
  	}
  	else	//caso base: n�o h� mais caracteres a comparar
  	{
  		return TRUE;
	}
}

int palindromo (char string[])
{
	return verificarPalindromo (string, 0, strlen(string)-1);
}
