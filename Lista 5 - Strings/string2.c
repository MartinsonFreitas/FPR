/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 11/10/2021
	
	STRINGS
	
	Exerc�cio 2: Determinar o n�mero de ocorr�ncias de um caracter em determinada string.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos/cabe�alhos das fun��es
int numOcorrencias (char str[], char caracter);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	char caracter, frase[30];
	int quant;
	
	fflush (stdin);  //standard input - entrada padr�o
	
	//leitura de uma string
	printf ("Entre com uma frase: ");
	gets (frase);  //get string
	
	fflush (stdin);  //standard input - entrada padr�o
	
	//leitura de um caracter
	printf ("Entre com o caracter a ser buscado: ");
	//scanf ("%c", &caracter);
	caracter = getche();   //get character
	
	//chamando a fun��o
	quant = numOcorrencias (frase, caracter);
	
	//exibindo o resultado
	printf ("\nForam encontradas %d ocorrencias do caracter %c na string %s", quant, caracter, frase);
}

//implementa��o das demais fun��es
int numOcorrencias (char str[], char caracter)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo a string
	for (i=0;str[i]!='\0';i++)
	{
		//verificando se o 'caracter' foi encontrado em 'str'
		if (str[i] == caracter)
		{
			cont++;
		}
	}	
	
	//retornando o resultado
	return cont;
}
