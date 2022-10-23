/*
	FAC - 2021/1
	Data: 26/06/2021
	
	Lista de Exerc�cios X

	QUEST�O 07:
	Desenvolver uma fun��o que remova determinado elemento (todas as suas 
	ocorr�ncias) de um vetor de float. Ao final, retornar o n�mero de remo��es 
	realizadas.
	
	Na vers�o 1, optamos por deslocar o �ltimo elemento para a posi��o do valor
	sendo removido.
	
	Nesta segunda vers�o, deslocaremos todos os elementos al�m da posi��o daquele 
	que ser� removido (sabendo que esta solu��o � mais demorada).
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAM 10

//prot�tipos das fun��es
void exibirVetor (float vetor[], int quant);
void preencheVetor (float vetor[], int quant);

int remover (float vetor[], int *quant, float numero);

//main
void main()
{
	//declara��o de vari�veis
	float vet[TAM];
	float num;
	int result, qdade;
	
	//preenchendo o vetor aleatoriamente
	preencheVetor (vet, TAM);
	qdade = TAM;
	
	//exibindo o vetor original
	exibirVetor (vet, qdade);
	
	//obtendo o valor a ser removido
	printf ("Qual valor deseja remover? ");
	scanf ("%f", &num);
	
	//chamando a fun��o de remo��o
	result = remover (vet, &qdade, num);
	
	//exibindo o vetor original ap�s a remo��o do elemento
	exibirVetor (vet, qdade);
	printf ("%d remocoes de %.1f foram realizadas!", result, num);
}

//implementa��o das fun��es
void exibirVetor (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("\n%.1f ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencheVetor (float vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//gerando n�meros aleat�rios com a fun��o 'rand'
	for (i=0;i<quant;i++)
	{
		vetor[i] = (float)(rand()%10)+1; //gerando n�meros aleat�rios de 1 a 10
	}		
}

int remover (float vetor[], int *quant, float numero)
{
	//declara��o de vari�veis
	int i, cont=0, pos;
	
	//percorrendo o vetor em busca do elemento a ser removido
	for (i=0;i<*quant;)
	{
		//verificando se o elemento foi encontrado
		if (vetor[i] == numero)
		{
			//Possibilidade 1 explicada em aula
			for (pos=i+1;pos<*quant;pos++)
			{
				vetor[pos-1] = vetor[pos];
			}
			
			(*quant)--;						//atualizando a quantidade de elementos
			
			cont++; //atualizando o n�mero de remo��es realizadas
		}
		else
		{
			i++;
			/*o incremento s� ser� feito se a posi��o n�o estiver armazenando o valor
			sendo buscado. Dessa forma, caso seja feito o deslocamento, a posi��o 
			ser� novamente analisada*/
		}
	}
	
	//retornando o n�mero de remo��es
	return cont;
}
