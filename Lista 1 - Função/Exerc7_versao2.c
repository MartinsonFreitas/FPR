/*
	FAC - 2021/1
	Data: 29/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 07:
	Implementar uma fun��o que, dado um n�mero inteiro n, e o intervalo definido 
	pelos n�meros a e b, determine quantos valores do intervalo possuem 
	divisores (sendo estes diferentes de 1) que tamb�m sejam divisores de n.

	Exemplo:
		n = 6
		a = 10 e b = 20

		divisores de 6? 1, 2, 3, 6

		10 - 2, 5, 10 (j� descartando o 1)		*
		11 - 11
		12 - 2, 3, 4, 6, 12						*
		13 - 13
		14 - 2, 7, 14							*
		15 - 3, 5, 15							*
		16 - 2, 4, 8, 16						*
		17 - 17
		18 - 2, 3, 6, 9, 18						*
		19 - 19
		20 - 2, 4, 5, 10, 20					*
		
		Resposta = 7 (pois os n�meros 10, 12, 14, 15, 16, 18 e 20 possuem divisores 
		              em comum com o n�mero 6).
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int verificaDivisores (int n, int a, int b);

//main
void main ()
{
	//declara��o de vari�veis
	int numero, limI, limS, resp;
	
	//leitura dos dados de entrada
	printf ("Entre com o numero: ");
	scanf ("%d", &numero);
	
	printf ("Entre com o intervalo: ");
	scanf ("%d %d", &limI, &limS);
	
	//chamando a fun��o
	resp = verificaDivisores (numero, limI, limS);
	
	//exibindo o resultado
	printf ("\nExistem %d valores no intervalo [%d, %d] com divisores em comum com %d.\n", resp, limI, limS, numero);
}

//implementa��o das fun��es
int verificaDivisores (int n, int a, int b)
{
	//declara��o de vari�veis
	int i, j, cont = 0, possuiDivComum;
	
	//variando os valores do intervalo
	for (i=a;i<=b;i++)
	{
		//inicializando a varia�vel possuiDivComum com 0 (FALSO)
		possuiDivComum = 0;
		
		//verificando divisores de 'n'
		for (j=2;(j<=n)&&(possuiDivComum==0);j++)  //ACRESCENTAMOS A SEGUNDA CONDI��O
		{
			if ((n%j == 0) &&     //j � divisor de 'n'
			    (i%j == 0))       //j � divisor de 'i' (que � cada valor do intervalo [a,b])
			{
				possuiDivComum = 1;   //se encontrou um divisor comum, possuiDivComum = 1 (VERDADEIRO)
			}
		}
		
		//verificando se existem divisores comuns entre 'i' e 'n'
		if (possuiDivComum == 1)
		{
			cont++;
		}
	}
	
	//retornando resultado
	return cont;
}
