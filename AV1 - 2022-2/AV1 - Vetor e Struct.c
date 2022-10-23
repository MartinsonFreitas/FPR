/*

	Questao 04 [2,5 pontos]:
	Considere a existencia de um vetor V1 de inteiros, contendo quant elementos. 
	Implementar uma funcao que, dado o vetor V1, preencha um vetor V2, 
	do qual cada posicao consistira em um struct com os seguintes campos:
	
	* valor: cada valor do vetor V1;
	* ocorrencias: quantidade de ocorrencias deste valor em V1;
	* posicao: posicao da primeira ocorrencia do valor em V1.
	
	V1 =  	4 | 9 | 5 | 1 | 1 | 2 | 4 | 8 | 5 | 4 | 	<-- quant = 10
			0   1	2 	3	4 	5	6 	7	8	9	 	<-- posi��o no vetor
		 
	
		 	4 | 9 | 5 | 1 | 2 | 8 | 					<-- campo valor
			3 |	1 |	2 |	2 |	1 |	1 | 					<-- campo n� ocorrencias no vetor
	V2 =	0 | 1 | 2 | 3 | 5 | 7 | 					<-- campo posicao no vetor
			0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9		<-- campo posicao no struct
			
	Nota: al�m da fun��o solicitada, deve ser apresentada a declara��o do tipo que representa o struct

*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 10

#define TRUE 1
#define FALSE 0

//defini��o de tipos
typedef struct {			
	int valor;
	int ocorrencia;
	int posicao;
} TTabela;

//prot�tipos das fun��es
void exibirNumOcorrencias (int *vetor, TTabela *tb, int quant);
void exibirVetor (int *vetor, int quant);
void preencherTabela (TTabela tb[], int x, int n, int i, int j);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[10] = {3,5,1,3,2,5,7,3,7,1};
	TTabela tb[TAM];	
	int quant;
	    
	//exibindo o vetor
	exibirVetor (vet, 10);		
	
	//chamando a fun��o
	exibirNumOcorrencias (vet, tb, TAM);		
}

//implementa��o das fun��es

// Vetor //
void exibirNumOcorrencias (int *vetor, TTabela *tb, int quant)
{
	//declara��o de vari�veis
	int i, j, k, cont, pos, continuar;
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<quant;i++)
	{
		//antes de verificar o n�mero de ocorr�ncias de vetor[i], verificar se
		//ele j� foi exibido anteriormente para evitar que mensagens sejam repetidas
		continuar = TRUE;
		
		for (pos=0;(pos<i)&&(continuar == TRUE);pos++)
		{
			if (vetor[i] == vetor[pos])
			{
				continuar = FALSE;
			}
		}
		
		//s� continuaremos, se o vetor[i] estiver aparecendo no vetor pela 1� vez
		if (continuar == TRUE)
		{ 
			//para cada elemento vetor[i], contaremos o n�mero de vezes que ele 
			//aparece no vetor
			cont = 0;
			
			for (j=0;j<quant;j++)
			{
				if (vetor[i] == vetor[j])
				{
					cont++;
				}
			}
			
			//preencher na tabela a quantidade de vezes que vetor[i] aparecer no vetor
			preencherTabela(tb, vetor[i], cont, pos, k++);		
			
		}
	}
}

void exibirVetor (int *vetor, int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

// Struct //
void preencherTabela (TTabela tb[], int x, int n, int i, int j)
{
	tb[j].valor = x;
	printf ("Valor: %d\n", x);
	tb[j].ocorrencia = n;
	printf ("Ocorrencias: %d\n", n);
	tb[j].posicao = i;
	printf ("Posicao no vetor: %d\n", i);	
	printf ("Posicao no Struct: %d\n\n", j);
}
