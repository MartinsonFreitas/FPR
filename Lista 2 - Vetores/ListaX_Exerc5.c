/*
	FAC - 2021/1
	Data: 26/06/2021
	
	Lista de Exerc�cios X

	QUEST�O 05:
	Elaborar uma fun��o que, dado um conjunto de 300 valores inteiros, 
	distribua-os em 2 vetores conforme forem pares ou �mpares.
	
	Exemplo:
	
		vetor:		1  5  7  4  8  6  2  3  5  4  1  3
		            0  1  2  3  4  5  6  7  8  9 10 11 
				                                     i
		
		impar:		1  5  7  3  5  1  3
		auxI        0  1  2  3  4  5  6  7		
		
		par:        4  8  6  2  4
		auxP		0  1  2  3  4  5
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAM 300

//prot�tipos das fun��es
void exibirVetor (int vetor[], int quant);
void preencheVetor (int vetor[], int quant);
void distribuirElementos (int orig[], int quantO, int pares[], int *quantP, int impares[], int *quantI);

//main
void main()
{
	//declara��o de vari�veis
	int vet[TAM], vetP[TAM], vetI[TAM];
	int contP, contI;

	//preenchendo o vetor aleatoriamente
	preencheVetor (vet, TAM);
	
	//exibindo o vetor original
	exibirVetor (vet, TAM);
	
	//chamando a fun��o para criar os vetores de pares e �mpares
	distribuirElementos (vet, TAM, vetP, &contP, vetI, &contI);
	
	//exibindo os vetores vetP e vetI
	exibirVetor (vetP, contP);
	printf ("\n%d pares\n", contP);
	
	exibirVetor (vetI, contI);
	printf ("\n%d impares\n", contI);
}

//implementa��o das fun��es
void exibirVetor (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencheVetor (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//gerando n�meros aleat�rios com a fun��o 'rand'
	for (i=0;i<quant;i++)
	{
		vetor[i] = (rand()%100)+1; //gerando n�meros aleat�rios de 1 a 100
	}		
}

void distribuirElementos (int orig[], int quantO, int pares[], int *quantP, int impares[], int *quantI)
{
	//declara��o de vari�veis
	int i, auxP = 0, auxI = 0;
	
	//percorrendo o vetor original
	for (i=0;i<quantO;i++)
	{
		//verificando se o elemento � par ou �mpar
		if (orig[i] % 2 == 0)
		{
			//armazenando o elemento no vetor de pares
			pares[auxP] = orig[i];
			
			//incrementando o auxP que armazena a posi��o onde o pr�ximo par deve ser inserido
			auxP++;
		}
		else
		{
			//armazenando o elemento no vetor de �mpares
			impares[auxI] = orig[i];

			//incrementando o auxI que armazena a posi��o onde o pr�ximo �mpar deve ser inserido
			auxI++;
		}
	}
	
	//armazenando as quantidades de elementos de cada vetor em quantP e quantI
	*quantP = auxP;
	*quantI = auxI;
}
