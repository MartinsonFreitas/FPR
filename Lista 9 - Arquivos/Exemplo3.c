/*
	FPR - 2021/2
	Data: 10/12/2021
	
	ARQUIVOS
	
	Exemplo 3: lendo os elementos de um arquivo, sabendo que os n�meros est�o dispostos
	um por linha.
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
	int numero;
	
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
		while (fscanf (arq, "%d", &numero) != EOF)   //end of file
		{
			printf ("%d\n", numero);
		}
				
		//fechar o arquivo
		fclose (arq);
		
		return 1;
	}
}

