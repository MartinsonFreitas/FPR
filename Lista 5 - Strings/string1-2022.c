/*	FAETERJ-Rio
	FPR - Fundamentos de Programa��o			2022/1
	Professor Leonardo Vianna
	Data: 14/03/2022
	
	STRINGS
	
	Exemplo 1: Desenvolver uma fun��o que, dadas uma string 's' e uma letra 'l', 
	           determinar o n�mero de ocorr�ncias de 'l' em 's'
	           
	           (vers�o 01: usando scanf para strings)
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos de fun��es
int numOcorrencias (char s[]/*, int tamanho*/, char L);
//O par�metro 'tamanho' foi removido, uma vez que a presen�a do caracter '\0' auxilia na determina��o do tamanho da string

//main
void main ()
{	
	//declara��o de vari�veis
	char palavra[20];	//string
	char letra;
	int quant;
	
	//leitura dos dados de entrada
	printf ("Entre com a palavra: ");
	fflush (stdin);
	scanf ("%s", palavra);
	
	printf ("Entre com a letra a ser buscada: ");
	fflush (stdin);  //esvaziando o buffer de entrada
	scanf ("%c", &letra);
	
	//chamando a fun��o
	quant = numOcorrencias (palavra, letra);
	
	//exibindo o resultado 
	printf ("\nA letra %c foi encontrada %d vezes na string %s.", letra, quant, palavra);
}


//implementa��o das fun��es
int numOcorrencias (char s[]/*, int tamanho*/, char L)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;s[i]!='\0';i++)
	{
		//verificando se o valor buscado foi encontrado
		if (s[i] == L)
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}
