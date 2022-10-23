/********************************************************************************************

	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII
	
	Quest�o 01:
	Desenvolver uma fun��o recursiva que determine o n�mero de caracteres comuns entre 
	duas strings s1 e s2.
	
	Observa��o: n�o se preocupar se o mesmo caracter aparecer mais de uma vez na string s1.
	
	Exemplo:
	
		s1:	CASA
		s2:	CADERNO	
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int caracteresComuns_aux (char s1[], char s2[], int pos1, int pos2);
int caracteresComuns (char s1[], char s2[]);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	char str1[30], str2[30];
	int resp;
	
	//inicializando as strings
	//strcpy (str1, "CASA");
	//strcpy (str2, "CADERNO");
	
	//strcpy (str1, "CADERNO");
	//strcpy (str2, "CASA");
	
	strcpy (str1, "CAIPORA");
	strcpy (str2, "A");
	
	//chamando a fun��o
	resp = caracteresComuns (str1, str2);
	
	//exibindo o resultado
	printf ("\nForam encontrados %d caracteres comuns entre as strings %s e %s.", resp, str1, str2);
}
	
//implementa��o das fun��es
int caracteresComuns (char s1[], char s2[])
{
	return caracteresComuns_aux (s1, s2, 0, 0);
}

int caracteresComuns_aux (char s1[], char s2[], int pos1, int pos2)
{
	if (pos1 == strlen(s1))			//caso base - cheguei ao final da string s1 (ou seja, no \0)
	{
		return 0;   //cont = 0
	}
	else
	{
		if (pos2 == strlen(s2))		//caso geral 1: cheguei ao final de s2; portanto, deve-se seguir para o pr�ximo caracter de s1
		{
			return caracteresComuns_aux (s1, s2, pos1+1, 0);
		}
		else
		{
			//verificando se os caracteres s�o iguais
			if (s1[pos1] == s2[pos2])
			{
				return 1 + caracteresComuns_aux (s1, s2, pos1+1, 0);
			}
			else
			{
				return caracteresComuns_aux (s1, s2, pos1, pos2+1);
			}
		}
	}
}
