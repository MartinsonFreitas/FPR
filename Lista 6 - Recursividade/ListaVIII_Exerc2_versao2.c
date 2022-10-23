/*
	FAETERJ-Rio
	Fundamentos de Programa��o - 2022/1 - Turma: Noite
	Data: 23/05/2022
	
	Lista de Exerc�cios VIII (Recursividade)
	
	Quest�o 02: Desenvolver uma fun��o recursiva que exiba todos os 
	m�ltiplos do n�mero N, inferiores ou iguais ao valor V.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
void funcao (int n, int v, int x);		//a fun��o recursiva
void exibirMultiplos (int n, int v);	//a fun��o que ser� chamada na main

//main
void main ()
{
	//declara��o de vari�veis
	int numero, limite;
	
	//leitura dos dados de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("Entre com o limite: ");
	scanf ("%d", &limite);
	
	//chamando a fun��o
	exibirMultiplos (numero, limite);
}

//implementa��o das fun��es
void funcao (int n, int v, int x)
{
	if(x <= v)		//caso geral
	{
		//exibindo ca m�ltiplo de n
		printf ("%d ", x);
    	    	
    	//chamando a fun��o recursivamente
    	funcao (n, v, x + n);  //pulando de 'n' em 'n'
  	}
  	//caso base impl�cito: x > v
}

void exibirMultiplos(int n, int v)
{
  	funcao (n, v, 0);	//come�ando a varia��o com 0
}
