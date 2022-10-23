/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna
	Data: 04/10/2021
	
	Lista de Exerc�cios IV - Matrizes
	
	QUEST�O 06:
	Considere uma loja que mant�m em uma matriz o total vendido por cada funcion�rio pelos diversos meses 
	do ano. Ou seja, uma matriz de 12 linhas (uma por m�s) e 10 colunas (10 funcion�rios). Pede-se o 
	desenvolvimento de uma fun��o para cada item abaixo:
	a.	Calcular o total vendido durante o ano;
	b.	Dado um m�s fornecido pelo usu�rio, determinar o total vendido nesse m�s;
	c.	Dado um funcion�rio fornecido pelo usu�rio, determinar o total vendido por ele durante o ano;
	d.	Determinar o m�s com maior �ndice de vendas;
	e.	Determinar o funcion�rio que menos vendeu durante o ano.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define MESES 12
#define FUNC 10

//prot�tipos/cabe�alhos das fun��es

//Calcular o total vendido durante o ano
float totalVendido (float matriz[MESES][FUNC]);

//Dado um m�s fornecido pelo usu�rio, determinar o total vendido nesse m�s
float totalVendidoMes (float matriz[MESES][FUNC], int mes);

//Dado um funcion�rio fornecido pelo usu�rio, determinar o total vendido por ele durante o ano
float totalVendidoFuncionario (float matriz[MESES][FUNC], int funcionario);

//Determinar o m�s com maior �ndice de vendas
int mesMaiorIndiceVendas (float matriz[MESES][FUNC]);

//Determinar o funcion�rio que menos vendeu durante o ano
int funcMenorIndiceVendas (float matriz[MESES][FUNC]);

//fun��es auxiliares
void preencherAleatorio (float matriz[MESES][FUNC]);
void exibirMatriz (float matriz[MESES][FUNC]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	float m[MESES][FUNC];
	float total;
	int mes, funcionario;
	
	//preenchendo a matriz com valores aleat�rios
	preencherAleatorio (m);
	
	//exibindo a matriz
	exibirMatriz (m);	
	
	//Total vendido durante o ano
	total = totalVendido (m);
	printf ("\n\nTotal vendido no ano: R$ %.2f\n", total);

	//Total vendido em determinado m�s
	printf ("\nEntre com o mes desejado (de 1 a 12): ");
	scanf ("%d", &mes);
	total = totalVendidoMes (m, mes);
	printf ("\nTotal vendido no mes %d: R$ %.2f\n", mes, total);

	//Total vendido por determinado funcion�rio
	printf ("\nEntre com o funcionario desejado (de 1 a 10): ");
	scanf ("%d", &funcionario);
	total = totalVendidoFuncionario (m, funcionario);
	printf ("\nTotal vendido pelo funcionario %d: R$ %.2f\n", funcionario, total);

	//Mes com maior �ndice de vendas
	mes = mesMaiorIndiceVendas (m);
	printf ("\nMes com maior indice de vendas: %d\n", mes);
	
	//Funcion�rio com menor �ndice de vendas
	funcionario = funcMenorIndiceVendas (m);
	printf ("\nFuncionario com menor indice de vendas: %d\n", funcionario);	
}

//implementa��o das demais fun��es
void exibirMatriz (float matriz[MESES][FUNC])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("\n\n");
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<MESES;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<FUNC;j++)		//percorrendo todas as colunas da matriz
		{
			printf ("R$ %8.2f    ", matriz[i][j]);
		}
		printf ("\n");
	}	
	printf ("\n\n");
}

void preencherAleatorio (float matriz[MESES][FUNC])
{
	//declara��o de vari�veis
	int i, j;
	
	srand (time(NULL));
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<MESES;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<FUNC;j++)		//percorrendo todas as colunas da matriz
		{
			matriz[i][j] = 1+rand()%10000; //preenchendo a matriz com valores aleat�rios no intervalo de 1 a 10000
		}
	}
}

//Calcular o total vendido durante o ano
float totalVendido (float matriz[MESES][FUNC])
{
	//declara��o de vari�veis
	int i,j;
	float total=0;
	
	for(i=0;i<MESES;i++)		//variando as linhas da matriz
	{
    	for(j=0;j<FUNC;j++)		//variando as colunas da matriz
		{
        	total=total+matriz[i][j]; // soma+= m[i][j];
    	}
	}
	
	//retornando o resultado
	return total;
}

//Dado um m�s fornecido pelo usu�rio, determinar o total vendido nesse m�s
float totalVendidoMes (float matriz[MESES][FUNC], int mes)
{
	//declara��o de vari�veis
	int j;
	float totalMes=0;
	
	//converteu o m�s do intervalo de 1 a 12 (fornecido pelo usu�rio) para 
	//o intervalo de 0 a 11 (compreendido pela linguagem C)
	mes--;

	//percorrendo todas as colunas da linha representada pelo m�s escolhido			
	for(j=0;j<FUNC;j++)
	{
		totalMes += matriz[mes][j];
	}
	
	//retornando o resultado (ou seja, o total vendido no m�s passado por par�metro)
	return totalMes;
}

/* outra vers�o da fun��o acima. Por�m, ao percorrer toda a matriz, esta vers�o mostra-se muito CARA!
Se colocar na prova, perder� ponto! :)
float totalVendidoMes (float matriz[MESES][FUNC], int mes)
{
	//declara��o de vari�veis
	int j;
	float totalMes=0;
	
	//converteu o m�s do intervalo de 1 a 12 (fornecido pelo usu�rio) para o intervalo de 0 a 11 (compreendido pela linguagem C)
	mes--;
	//percorrendo todas as linhas da matriz
	for (i=0;i<MESES;i++)
	{
		//percorrendo todas as colunas da matriz
		for(j=0;j<FUNC;j++)
		{
			if (i == mes)
			{
				totalMes += matriz[i][j];
			}
		}
	}
	
	//retornando o resultado (ou seja, o total vendido no m�s passado por par�metro)
	return totalMes;
}
*/

//Dado um funcion�rio fornecido pelo usu�rio, determinar o total vendido por ele durante o ano
float totalVendidoFuncionario (float matriz[MESES][FUNC], int funcionario)
{
	//declara��o de vari�veis
	int i;
	float totalFunc=0;
	
	//converteu o funcion�rio do intervalo de 1 a 10 (fornecido pelo usu�rio) para o intervalo de 0 a 9 (compreendido pela linguagem C)
	funcionario--;

	//percorrendo todas as linhas da coluna representada pelo funcion�rio escolhido			
	for(i=0;i<MESES;i++)
	{
		totalFunc += matriz[i][funcionario];
	}
	
	//retornando o resultado (ou seja, o total vendido pelo funcion�rio passado por par�metro)
	return totalFunc;
}

//Determinar o m�s com maior �ndice de vendas
int mesMaiorIndiceVendas (float matriz[MESES][FUNC])
{
	//declara��o de vari�veis
	int mes, maiorMes;
	float total, totalMaiorMes;
	
	//inicializando 'janeiro' como o m�s com maior �ndice de vendas
	totalMaiorMes = totalVendidoMes (matriz, 1);
	maiorMes = 1;
	
	//percorrendo os demais meses; ou seja, de 'fevereiro' a 'dezembro'
	for (mes=2;mes<=MESES;mes++)
	{
		//calculando o quanto foi vendido no m�s 'mes'
		total = totalVendidoMes (matriz, mes);
		
		//verificando se o total vendido no m�s 'mes' � o maior at� o momento
		if(total > totalMaiorMes)
		{
			totalMaiorMes = total;
			maiorMes = mes;
		}
	}
	
	//retornar o resultado (ou seja, o m�s com maior �ndice de vendas)
	return maiorMes;
}

//Determinar o funcion�rio que menos vendeu durante o ano
int funcMenorIndiceVendas (float matriz[MESES][FUNC])
{
	//declara��o de vari�veis
	int funcionario, menorFuncionario = 1;
	float total, totalMenorFuncionario;
	
	//inicializando o funcion�rio 1 como aquele com menor �ndice de vendas
	totalMenorFuncionario = totalVendidoFuncionario (matriz, 1);
	//menorFuncionario = 1;
	
	//percorrendo os demais funcion�rios ou seja, do 2� ao 10�
	for (funcionario=2;funcionario<=FUNC;funcionario++)
	{
		//calculando o quanto foi vendido pelo funcion�rio 'funcionario'
		total = totalVendidoFuncionario (matriz, funcionario);
		
		//verificando se o total vendido pelo funcion�rio 'funcionario' � o menor at� o momento
		if(total < totalMenorFuncionario)
		{
			totalMenorFuncionario = total;
			menorFuncionario = funcionario;
		}
	}
	
	//retornar o resultado (ou seja, o funcion�rio com menor �ndice de vendas)
	return menorFuncionario;
}
