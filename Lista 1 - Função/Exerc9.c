/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 09:
	Implementar uma fun��o que, dado um n�mero inteiro, calcule (e retorne) a soma 
	e a m�dia de seus divisores.
*/

//importa��o de bibliotecas
#include<stdio.h>

//prot�tipos das fun��es
void somaMediaDivisores (int numero, int *soma, float *media);

//main
void main()
{
	//declara��o de vari�veis
	int n, s;
	float m;
	
	//leitura do valor de entrada
	printf("Digite um numero: ");
	scanf("%d", &n);

	//chamando a fun��o
	somaMediaDivisores (n, &s, &m);
	
	//exibindo os resultados
	printf ("\nSoma dos divisores de %d: %d\n", n, s);
	printf ("\nMedia dos divisores de %d: %.1f\n", n, m);
}

//implementa��o das fun��es

/*Dado um n�mero inteiro (numero), calcula a soma e a m�dia de seus divisores.
  Entrada: numero
  Sa�da:   soma, media   */
void somaMediaDivisores (int numero, int *soma, float *media)
{
	//declara��o de vari�veis
	int i, sum = 0, cont = 0;
	
	//variando todos os "poss�veis" divisores de 'numero'
	for (i=1;i<=numero;i++)
	{
		//verificando se cada valor do intervao � divisor de 'numero'
		if (numero % i == 0)
		{
			//sendo 'i' divisor de 'numero', acumul�-lo no somat�rio
			sum = sum + i;    //soma += i;
			cont++;
		}
	}
	
	//armazenando os resultados nos par�metros de sa�da
	*soma = sum;
	*media = (float)sum/cont;	
}
