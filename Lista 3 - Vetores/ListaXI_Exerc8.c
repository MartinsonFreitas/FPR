/*
	FAC - 2021/1
	Resolu��o dos exerc�cios que n�o foram resolvidos em sala com o professor.
	
	Lista de Exerc�cios XI 
	
	Quest�o 08:
	Fa�a uma fun��o que, dado um vetor de n�meros inteiros, exiba para cada um de 
	seus elementos a quantidade de vezes que o mesmo aparece no vetor.

	Exemplo:
		Vetor = {3,5,1,3,2,5,7,3,4,7,6,1}

	Sa�da:
		3: 3 vezes
		5: 2 vezes
		1: 2 vezes
		2: 1 vez
		7: 2 vezes
		4: 1 vez
		6: 1 vez
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
void exibirNumOcorrencias (int vetor[], int quant);

void exibirVetor (int vetor[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[12] = {3,5,1,3,2,5,7,3,4,7,6,1};
	    
	//exibindo o vetor
	exibirVetor (vet, 12);		
	
	//chamando a fun��o
	exibirNumOcorrencias (vet, 12);
}

//implementa��o das fun��es

void exibirNumOcorrencias (int vetor[], int quant)
{
	//declara��o de vari�veis
	int i, j, cont, pos, continuar;
	
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
			
			//exibindo a quantidade de vezes que vetor[i] aparecer no vetor
			printf (cont==1?"%d: %d vez primeira posicao %d\n":"%d: %d vezes primeira posicao %d\n", vetor[i], cont, pos);
		}
	}
}

void exibirVetor (int vetor[], int quant)
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
