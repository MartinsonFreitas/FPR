/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 04/04/2022
	
	Lista de Exerc�cios V (matrizes):
	
	QUEST�O 06:
	Considere uma loja que mant�m em uma matriz o total vendido por cada 
	funcion�rio pelos diversos meses do ano. Ou seja, uma matriz de 12 
	linhas (uma por m�s) e 10 colunas (10 funcion�rios). Pede-se o 
	desenvolvimento de uma fun��o para cada item abaixo:

	a. Calcular o total vendido durante o ano;
	b. Dado um m�s fornecido pelo usu�rio, determinar o total vendido 
	nesse m�s;
	c. Dado um funcion�rio fornecido pelo usu�rio, determinar o total 
	vendido por ele durante o ano;
	d. Determinar o m�s com maior �ndice de vendas;
	e. Determinar o funcion�rio que menos vendeu durante o ano.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 12
#define C 10

//prot�tipos das fun��es
float totalVendidoAno (float m[L][C]);
float totalVendidoMes (float m[L][C], int mes);
float totalVendidoFuncionario (float m[L][C], int funcionario);
int mesMaiorIndiceVendas (float m[L][C]);
int funcionarioMenorIndiceVendas (float m[L][C]);

void preencher (float m[L][C]);
void exibirMatriz (float m[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int mes, funcionario;
	float matriz[L][C];
	float total, totalMes, totalFuncionario;

	//preenchendo a matriz com valores rand�micos
	preencher (matriz);
	
	//exibindo a matriz
	exibirMatriz (matriz);
	
	//calculando o total vendido no ano
	total = totalVendidoAno (matriz);
	printf ("Total vendido no ano: R$ %.2f\n\n", total);

	//calculando o total vendido em determinado m�s
	printf ("Entre com o mes desejado: ");
	scanf ("%d", &mes);
	
	totalMes = totalVendidoMes (matriz, mes);
	printf ("Total vendido no mes %d: R$ %.2f\n\n", mes, totalMes);

	//calculando o total vendido por determinado funcion�rio
	printf ("Entre com o funcionario desejado: ");
	scanf ("%d", &funcionario);
	
	totalFuncionario = totalVendidoFuncionario (matriz, funcionario);
	printf ("Total vendido pelo funcionario %d: R$ %.2f\n\n", funcionario, totalFuncionario);

	//determinando o m�s com maior �ndice de vendas
	printf ("\nMes com maior indice de vendas: %d\n\n", mesMaiorIndiceVendas (matriz));

	//determinando o funcion�rio com menor �ndice de vendas
	printf ("\nFuncionario com menor indice de vendas: %d\n\n", funcionarioMenorIndiceVendas (matriz));
}

//implementa��o das fun��es
void preencher (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;

	//garantindo que as sequ�ncias aleat�rias s�o diferentes
	srand (time(NULL));
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			m[i][j] = rand()%5 + 1;
		}
	}
}

void exibirMatriz (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			printf ("%.2f ", m[i][j]);
		}
		
		printf ("\n");
	}
}

float totalVendidoAno (float m[L][C])
{
	//declara��o de vari�veis
	int i, j;
	float soma = 0;
	
	//percorrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			soma = soma + m[i][j]; //soma += m[i][j];
		}
	}
	
	//retornando o resultado
	return soma;
}

float totalVendidoMes (float m[L][C], int mes)
{
	//declara��o de vari�veis
	int j;
	float soma = 0;
	
	//convertendo m�s de 1..12 para o intervalo de 0..11
	mes--;
	
	//calculando o total vendido no m�s fornecido
	for (j=0;j<C;j++)
	{
		soma += m[mes][j];	
	}
	
	//retornando o resultado
	return soma;
}

float totalVendidoFuncionario (float m[L][C], int funcionario)
{
	//declara��o de vari�veis
	int i;
	float soma = 0;
	
	//convertendo funcion�rio de 1..10 para o intervalo de 0..9
	funcionario--;
	
	//calculando o total vendido pelo funcion�rio fornecido
	for (i=0;i<L;i++)
	{
		soma += m[i][funcionario];	
	}
	
	//retornando o resultado
	return soma;	
}

int mesMaiorIndiceVendas (float m[L][C])
{
	//declara��o de vari�veis
	int mes, maiorMes;
	float resultado, maior = -1;
	
	//percorrendo todos os meses do ano
	for (mes=1;mes<=L;mes++)
	{
		//calculando o total vendido em cada m�s
		resultado = totalVendidoMes (m, mes);
		
		//verificando se o total vendido no m�s corrente � o maior de todos
		if (resultado > maior)
		{
			//atualizando os dados do m�s com maior �ndice de vendas
			maior = resultado;
			maiorMes = mes;
		}
	}
	
	//retornando o m�s com maior �ndice de vendas
	return maiorMes;
}

int funcionarioMenorIndiceVendas (float m[L][C])
{
	//declara��o de vari�veis
	int funcionario, menorFuncionario = 1;
	float resultado, menor = totalVendidoFuncionario (m,1);
	
	//percorrendo todos os funcion�rios
	for (funcionario=2;funcionario<=C;funcionario++)
	{
		//calculando o total vendido por cada funcion�rio
		resultado = totalVendidoFuncionario (m, funcionario);
		
		//verificando se o total vendido pelo funcion�rio corrente � o menor de todos
		if (resultado < menor)
		{
			//atualizando os dados do funcion�rio com menor �ndice de vendas
			menor  = resultado;
			menorFuncionario = funcionario;
		}
	}
	
	//retornando o funcion�rio com menor �ndice de vendas
	return menorFuncionario;
}
