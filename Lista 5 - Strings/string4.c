/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 11/10/2021
	
	STRINGS
	
	Exerc�cio 4: Inverter uma string.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos/cabe�alhos das fun��es
//void inverteString (char *string);  ou
void inverteString (char string[]);

int contandostring (char str[]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	char string[30];	
	
	fflush (stdin);  //standard input - entrada padr�o
	
	//leitura de uma string
	printf ("Entre com uma string: ");
	gets (string);  //get string
	
	//chamando a fun��o
	inverteString (string);
	
	//exibindo o resultado
	printf ("\n\nApos inversao: %s", string);
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

void inverteString (char string[])
{
	//declara��o de vari�veis
    int i,j;
    char aux;
    
    //j apontando para o �ltimo caracter
    j=contandostring(string)-1;    
    
    for (i=0;i<j;i++,j--)
    {
    	//troca de posi��es os caracteres string[i] e string[j]
        aux=string[i];
        string[i]=string[j];
        string[j]=aux;
    }    
}
