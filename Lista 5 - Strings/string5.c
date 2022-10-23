/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 11/10/2021
	
	STRINGS
	
	Exerc�cio 5: Remover todas as ocorr�ncias de determinado caracter em uma string.
	
	Exemplo: 	string: 		ALGORITMOS
				caracter: O		ALG RITM S
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos/cabe�alhos das fun��es
//void inverteString (char *string);  ou
void removeLetra (char string[], char letra);

int contandostring (char str[]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	char string[30];	
	char caracter;
		
	fflush (stdin);  //standard input - entrada padr�o	
	//leitura de uma string
	printf ("Entre com uma string: ");
	gets (string);  //get string
	
	fflush (stdin);  //standard input - entrada padr�o	
	//leitura de um caracter
	printf ("Entre com o caracter a ser removido: ");
	caracter = getche();
	
	//exibindo a string antes da remo��o
	printf ("\nString: %s\n", string);
	
	//chamando a fun��o
	removeLetra (string, caracter);
	
	//exibindo a string depois da remo��o
	printf ("\nString: %s\n", string);
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

void removeLetra (char string[], char letra)
{
	//declara��o de vari�veis
    int i, j, tamanhoString;
    
    //recuperando a posi��o do �ltimo caracter
    tamanhoString = contandostring(string);
    
    //percorrendo toda a string
    i=0;
    while (string[i]!='\0')
    {
    	//verificando se � o caracter a ser removido
        if (string[i] == letra)
        {
        	//deslocando todos os caracteres � direita de string[i] (incluindo o \0) uma posi��o para a esquerda
            for (j=i;j<tamanhoString;j++)
            {
                string[j] = string[j+1];
            }
            
			//uma vez que um caracter foi removido da string, o tamanho da string diminuiu de uma unidade
			tamanhoString--;            
        }
        else
        {
        	i++;
		}
    }
}
