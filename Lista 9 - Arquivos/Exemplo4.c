/*
	FPR - 2021/2
	Data: 10/12/2021
	
	ARQUIVOS
	
	Exemplo 4: lendo os dados de um arquivo (sem saber a sua estrutura interna).
	
	Como n�o sabemos a estrutura interna, o ideal � tratar a informa��o como uma cole��o de caracteres.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
int lerArquivo (char nomeArq[]);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArq[20];
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	gets (nomeArq);
	
	//chamando a fun��o
	if (lerArquivo (nomeArq) == 0)
	{
		printf ("\nErro na abertura do arquivo!\n");
	}
}

//implementa��o das fun��es
int lerArquivo (char nomeArq[])
{
	//declara��o de vari�veis
	FILE *arq;
	char c;
	
	//abertura do arquivo (para leitura)
	arq = fopen (nomeArq, "r");  //r - read   /   w - write   /  a - append
	
	//testando se o arquivo foi ou n�o aberto
	if (arq == NULL)
	{
		return 0;
	}
	else
	{
		//lendo os valores do arquivo, enquanto existirem
		while (fscanf (arq, "%c", &c) != EOF)   //end of file
		{
			printf ("%c", c);
		}
				
		//fechar o arquivo
		fclose (arq);
		
		return 1;
	}
}

