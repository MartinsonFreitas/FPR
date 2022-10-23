/*
	FPR - 2021/2
	Data: 10/12/2021
	
	ARQUIVOS
	
	Exemplo 1: Fazer um programa que crie um arquivo com os n�meros de 1 a N, 
	um por linha.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	FILE *arq;					//para manipula��o de um arquivo, � necess�ria uma vari�vel do tipo FILE* (stdio.h)
	char nomeArq[20];			//nome do arquivo. Por exemplo, "teste.txt"
	int i, N;					
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	gets (nomeArq);
	
	//lendo o valor de N
	printf ("Entre com um numero: ");
	scanf ("%d", &N);
	
	//abertura do arquivo (para escrita)
	arq = fopen (nomeArq, "w");	//w - write   /   r - read   /   a - append 			
	
	//testando se o arquivo foi ou n�o aberto
	if (arq == NULL)
	{
		printf ("\nErro na abertura do arquivo!\n");
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
		
		printf ("\nArquivo gerado com sucesso!\n");
	}
}

/*
	Notem que o nome do arquivo � referenciado apenas no momento da abertura, atrav�s do comando 'fopen'.
	Neste momento, o nome do arquivo � associado � vari�vel 'arq' e, a partir da�, apenas a vari�vel 'arq' �
	referenciada.
	
	Importante ter aten��o � seguinte sequ�ncia de passos:
	
	1. Declara��o da vari�vel do tipo FILE*
	2. Abertura do arquivo (especificando o tipo de acesso - write/read/append). Neste momento, a vari�vel
	   do tipo FILE* � associada ao caminho especificado no primeiro argumento da fun��o 'fopen'
	3. Uma vez aberto o arquivo, manipule-o: seja lendo ou escrevendo no mesmo
	4. N�o esquecer de, ao final, fechar o arquivo (comando 'fclose')
*/
