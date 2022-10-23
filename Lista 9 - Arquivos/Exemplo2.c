/*
	FPR - 2021/2
	Data: 10/12/2021
	
	ARQUIVOS
	
	Exemplo 2: Fazer uma fun��o que crie um arquivo com os n�meros de 1 a N, 
	um por linha.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
int criarArquivo (char nomeArq[], int N);
/*Ao desenvolver uma fun��o que manipule arquivos, opte por passar o NOME DO ARQUIVO (string) - e n�o uma vari�vel
  FILE*. Dentro da fun��o, voc� dever� criar a vari�vel FILE*, associ�-la ao nome do arquivo ('fopen'), manipule 
  o arquivo e feche-o ao final. Ou seja, todo o processo - desde a declara��o da vari�vel FILE* at� o fechamento 
  do arquivo - deve ser realizado dentro da fun��o.
*/

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArq[20];
	int N;
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	gets (nomeArq);
	
	//lendo o valor de N
	printf ("Entre com um numero: ");
	scanf ("%d", &N);
	
	//chamando a fun��o
	if (criarArquivo (nomeArq, N) == 0)
	{
		printf ("\nErro na abertura do arquivo!\n");
	}
	else
	{
		printf ("\nArquivo gerado com sucesso!\n");
	}
}

//implementa��o das fun��es
int criarArquivo (char nomeArq[], int N)
{
	//declara��o de vari�veis
	FILE *arq;
	int i;
	
	//abertura do arquivo (para escrita)
	arq = fopen (nomeArq, "w");
	
	//testando se o arquivo foi ou n�o aberto
	if (arq == NULL)
	{
		return 0;
	}
	else
	{
		//variando os n�meros de 1 a N para serem armazenados no arquivo
		for (i=1;i<=N;i++)
		{
			fprintf (arq, "%d\n", i);
		}
		
		//fechar o arquivo
		fclose (arq);
		
		return 1;
	}
}

