/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 01/11/2021
	
	Recursividade
	
	Lista de Exerc�cios VI
	
	Quest�o 05:
	Dada uma string s, desenvolver uma fun��o recursiva que determine se s � ou 
	n�o um pal�ndromo.
	
	Exemplo:
			ABCDCBA
			
			ABCDCBX	
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int palindromo (char s[]);
int palindromo_aux (char s[], int pos1, int pos2);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int resp;
	char string[30];
	
	//armazenando um valor na string
	strcpy (string, "NATAN");
	
	//chamando a fun��o
	resp = palindromo (string);
	
	//testando o retorno
	if (resp == 1)
	{
		printf ("\nA string %s e' um palindromo.", string);
	}
	else
	{
		printf ("\nA string %s nao e' um palindromo.", string);
	}
}

//implementa��es das fun��es
int palindromo (char s[])
{
	return palindromo_aux (s, 0, strlen(s)-1);	
}

int palindromo_aux (char s[], int pos1, int pos2)
{
	if (pos1 < pos2)
	{	
		if (s[pos1] != s[pos2])
		//if (toupper(s[pos1]) != toupper(s[pos2]))		Se quiser desconsiderar ma�usculos/min�sculos
		{
			return 0;
		}
		else
		{
			return palindromo_aux (s, pos1+1, pos2-1);
		}
	}
	else
	{
		return 1;
	}
}
