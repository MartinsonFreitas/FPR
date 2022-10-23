/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 13/09/2021
	
	Revis�o - FAC   [vetores e fun��es]
	
	desenvolver uma fun��o que, dado um n�mero inteiro x, determine o n�mero de vezes que ele 
	aparece em um vetor de tamanho 'tam'.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 100

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
int conta_elemento(int v[], int tamanho, int n);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	int numero, quant;
	
	//preenchendo o vetor, e exibindo-o
	preencherAleatorio (v, TAM);
	exibir (v, TAM);
	
	//lendo o n�mero a ser buscado
	printf ("\n\nEntre com o numero a ser buscado no vetor: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	quant = conta_elemento (v, TAM, numero);
	
	//exibindo o resultado
	printf ("\nForam encontradas %d ocorrencias do numero %d", quant, numero);
}

//implementa��o das demais fun��es
void preencherAleatorio (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//gerando um novo n�mero aleat�rio e armazenando-o no vetor
		vetor[i] = 1 + rand()%50;
	}
}
void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\n\nVetor: ");
	
	//variando todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		//exibindo os valores do vetor
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n");
}

int conta_elemento(int v[], int tamanho, int n)
{
	//declara��o de vari�veis
    int c=0, i;
    
    for (i=0;i<tamanho;i++){

        if (v[i]==n){
            c++;
        }
    }

    return c;

}
