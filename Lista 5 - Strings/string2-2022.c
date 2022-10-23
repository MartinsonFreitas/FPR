/*	FAETERJ-Rio
	FPR - Fundamentos de Programa��o			2022/1
	Professor Leonardo Vianna
	Data: 14/03/2022
	
	STRINGS
	
	Exemplo 2: Desenvolver uma fun��o que, dada uma string 's', determine o n�mero
	de caracteres em 's'
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos de fun��es
int numChar (char s[]);

//main
void main ()
{	
	//declara��o de vari�veis
	char palavra[20];	//string
	int quant;
	
	//leitura dos dados de entrada
	printf ("Entre com a palavra: ");
	fflush (stdin);
	//scanf ("%s", palavra);
	gets (palavra);
	
	//chamando a fun��o
	quant = numChar (palavra);
	
	//exibindo o resultado 
	printf ("\nA string %s possui %d caracteres.", palavra, quant);
}

//implementa��o das fun��es
int numChar (char s[])
{
	//declara��o de vari�veis
	int i, qtChar = 0;
	
	//percorrendo toda a string
    for (i=0;s[i]!='\0';i++)
    {
        qtChar++;
    }

	//retornando a quantidade de caracteres da string
    return qtChar;
}
