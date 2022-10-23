/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Data: 18/04/2022
	
	Arquivos
	
	Exemplo 7: desenvolver uma fun��o que remova todas as ocorr�ncias de determinado caracter
	de um arquivo.
	
	vers�o 2: apagando o arquivo tempor�rio ao final.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int removerCaracterArquivo (char nomeArq[], char caracter);
int copiarArquivo (char origem[], char destino[]);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArquivo[20];
	char caracter;
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin);
	gets (nomeArquivo);
	
	//lendo o caracter a ser removido
	printf ("Entre com o caracter a ser removido: ");
	fflush (stdin);
	scanf ("%c", &caracter);
	
	//chamando a fun��o
	if (removerCaracterArquivo (nomeArquivo, caracter) == FALSE) 
	{
		printf ("\nErro na tentativa de remocao do caracter!");
	}
	else
	{
		printf ("\nRemocao realizada com sucesso!");
	}
}

int removerCaracterArquivo (char nomeArq[], char caracter)
{
	//declara��o de vari�veis
	FILE *arq, *temp;			
	char ch;
		
	//abrindo os arquivos
	arq = fopen (nomeArq, "r");
	temp = fopen ("temp.txt", "w");
	
	//testando se houve falha na abertura
	if ((arq == NULL) || (temp == NULL))
	{
		return FALSE;
	}
	else
	{
		//lendo os elementos do arquivo original
		while (fscanf (arq, "%c", &ch) != EOF)    //EOF - End Of File
		{
			//testando se n�o � o caracter a ser removido
			if (ch != caracter)
			{
				fprintf (temp, "%c", ch);
			}
		}
		
		//fechar os arquivos
		fclose (arq);
		fclose (temp);
		
		//copiando o conte�do do arquivo tempor�rio para o arquivo original
		copiarArquivo ("temp.txt", nomeArq);
		
		//apagando o arquivo tempor�rio
		remove ("temp.txt");
		
		return TRUE;
	}
}

int copiarArquivo (char origem[], char destino[])
{
	//declara��o de vari�veis
	FILE *arqO, *arqD;			//1. declarar uma vari�vel do tipo FILE*
	char caracter;
		
	//2.abrir o arquivo (associa a vari�vel FILE � string que representa o arquivo / define o tipo de acesso)
	arqO = fopen (origem, "r");
	arqD = fopen (destino, "w");
	
	//testando se houve falha na abertura
	if ((arqO == NULL) || (arqD == NULL))
	{
		return FALSE;
	}
	else
	{
		//lendo os elementos do arquivo de origem
		while (fscanf (arqO, "%c", &caracter) != EOF)    //EOF - End Of File
		{
			//escrevendo no arquivo de destino os valores lidos do arquivo de origem
			fprintf (arqD, "%c", caracter);
		}
		
		//4. fechar os arquivos
		fclose (arqO);
		fclose (arqD);
		
		return TRUE;
	}
}
