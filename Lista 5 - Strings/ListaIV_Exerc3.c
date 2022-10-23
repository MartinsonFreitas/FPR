/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 28/03/2022
	
	Quest�o 03: Desenvolver uma fun��o que, dada uma string s, crie uma 
	substring que inicie na posi��o p de s e contenha n caracteres. 
 
	Observa��es: 
		i) se p e/ou n forem inv�lidos, a substring ser� vazia; 
		ii) se s n�o possuir n caracteres al�m de p, a substring a ser 
		criada come�ar� em p e terminar� no final de s. 
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void substring (char s[], int p, int n, char sub[]);

//main
void main ()
{
	//declara��o de vari�veis
	char palavra[20], sub[20];
	
	//inicializando a palavra
	strcpy (palavra, "ALGORITMOS");
	
	//fazendo algumas chamadas � fun��o 'substring'
	substring (palavra, 3, 4, sub);
	printf ("substring: %s\n\n", sub);
	
	substring (palavra, -3, 4, sub);
	printf ("substring: %s\n\n", sub);
	
	substring (palavra, 3, 12, sub);
	printf ("substring: %s\n\n", sub);
	
	substring (palavra, 3, 10, sub);
	printf ("substring: %s\n\n", sub);
}

//implementa��o das fun��es
void substring (char s[], int p, int n, char sub[])
{
	//declara��o de vari�veis
	int i, j, tam = strlen(s);
	
	//verificando se os valores de 'p' e 'n' s�o inv�lidos
	if ((p < 0) || (n <= 0) || (p >= tam) || (n > tam))
	{
		strcpy (sub, "");	//ou:   sub[0] = '\0';
	}
	else
	{
		for (i=p,j=0;(i<tam) && (j<n);i++,j++)
		{
			sub[j] = s[i];
		}
	
		sub[j] = '\0';
	}	
}
