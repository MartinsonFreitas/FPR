/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna
	Data: 11/10/2021
	
	STRINGS
	
	Exerc�cio 3: Verificar se uma string � um pal�ndromo.
	
	Exemplos: ovo, osso, marias sairam, ... 
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos/cabe�alhos das fun��es
int palindromo (char str[]);

void eliminarCaracteres (char original[], char nova[]);
int contandostring (char str[]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	char string[30];
	int resultado;
	
	fflush (stdin);  //standard input - entrada padr�o
	
	//leitura de uma string
	printf ("Entre com uma string: ");
	gets (string);  //get string
	
	//chamando a fun��o
	resultado = palindromo (string);
	
	//exibindo o resultado
	if (resultado == TRUE)
	{
		printf ("\n\nA string %s e' um palindromo", string);
	}
	else
	{
		printf ("\n\nA string %s nao e' um palindromo", string);
	}
}

//implementa��o das demais fun��es
int contandostring (char str[])
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo os caracteres da string
	for (i=0;str[i]!='\0';i++);
		
	return i;
}

int palindromo (char str[])
{
	//declara��o de vari�veis
	int i, j;
	char nova[50];
	
	//eliminando da string os caracteres que n�o s�o letras
	eliminarCaracteres (str, nova);
	
	for (i=0,j=contandostring(nova)-1;i<j;i++,j--)
	{
		//verificando se dois caracteres distintos foram encontrados
		if (nova[i] != nova[j])
		{
			return FALSE;  //conclui-se que a string n�o representa um pal�ndromo
		}
	}	
	
	//conclui-se que � um pal�ndromo
	return TRUE;
}

void eliminarCaracteres (char original[], char nova[])
{
	//declara��o de vari�veis
	int i, posicao=0;
	char maiuscula;
	
	//percorrendo a string original
	for (i=0;original[i]!='\0';i++)
	{
		//verificando se � uma letra
		maiuscula = toupper(original[i]);
		if ((maiuscula >= 'A') && (maiuscula <= 'Z'))
		{
			nova[posicao] = original[i];
			posicao++;
		}
	}
	
	//terminando a string nova
	nova[posicao] = '\0';
}
