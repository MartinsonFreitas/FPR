/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR - Manh�
	Data: 18/12/2021
	
	Lista de Exerc�cios X:
	
	QUEST�O 05:
	Implementar uma fun��o que, dadas duas listas din�micas do tipo TLista, verifique 
	se elas possuem os mesmos elementos, independente da ordem na qual apare�am.	
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//defini��o de tipos
typedef struct No {			//representando cada n� da lista, com os campos:
	int valor;				//  - valor: o dado armazenado na lista;
	struct No* prox;		//  - prox: o endere�o do pr�ximo n� da lista.
} TNo;

typedef TNo* TLista;		//TLista equivale a TNo* (ou seja, TLista � um ponteiro para o struct TNo)

//prot�tipos de fun��es
int funcaoAuxiliar (TLista listaA, TLista listaB);
int questao5 (TLista L1, TLista L2);

int inserir (TLista* L, int numero);
void exibir (TLista L);

//main
void main ()
{
	//declara��o de vari�veis
	TLista lista1 = NULL, lista2 = NULL;
	
	//inserindo na lista 1 os elementos 10 5 7 3
	inserir (&lista1, 5);
	inserir (&lista1, 3);
	inserir (&lista1, 7);
	inserir (&lista1, 7);
	inserir (&lista1, 3);
	inserir (&lista1, 7);
	inserir (&lista1, 10);
	
	//inserindo na lista 2 os elementos 10 5 7 3
	inserir (&lista2, 10);
	inserir (&lista2, 5);
	inserir (&lista2, 7);
	inserir (&lista2, 3);
	
	//exibindo os elementos da lista1
	printf ("\n\nLISTA 1:\n");
	exibir (lista1);
	
	//exibindo os elementos da lista2
	printf ("\n\nLISTA 2:\n");
	exibir (lista2);
	
	//chamando a fun��o
	if (questao5 (lista1, lista2) == 1)
	{
		printf ("\n\nAs listas possuem os mesmos elementos!");
	}
	else
	{
		printf ("\n\nAs listas nao possuem os mesmos elementos!");
	}
}

//implementa��o das fun��es
int funcaoAuxiliar (TLista listaA, TLista listaB)
{
	//declara��o de vari�veis
	TLista aux1 = listaA, aux2 = listaB;
	int cont=0;

	//percorrendo a listaA
	while(aux1 !=NULL)
	{
		//percorrendo a listaB
    	while(aux2 !=NULL)
		{
			//verificando quantas vezes cada elemento da listaA aparece na listaB
        	if(aux1->valor==aux2->valor)
			{
         		cont++;
        	}
        	
        	aux2=aux2->prox;
    	}
    
    	//se o elemento da listaA n�o aparecer na listaB, as listas n�o possuem os mesmos elementos
		if(cont==0)
		{
        	return 0;
    	}
    	else 
		{
			//continuar a busca indo para o pr�ximo elemento da listaA
    	    cont=0;
        	aux1=aux1->prox;
        	aux2=listaB;
    	}
	}
	
	//se chegou aqui, todos os elementos da listaA est�o na listaB
	return 1;
}

int questao5 (TLista L1, TLista L2)
{
	/*int resp1, resp2;
	
	resp1 = funcaoAuxiliar (L1, L2);
	resp2 = funcaoAuxiliar (L2, L1);
	
	if ((resp1 != 0) && (resp2 != 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	
	return (funcaoAuxiliar (L1, L2)) && (funcaoAuxiliar (L2, L1));	
}

int inserir (TLista* L, int numero)
{
	//Passo 1: Alocar mem�ria para o novo n� (aux)	
	TLista aux = (TLista) malloc (sizeof(TNo));    //malloc: retorna *void. Por isso, � necess�rio fazer casting para que os dois lados da atribui��o sejam do mesmo tipo.
	
	//testando se a mem�ria n�o foi alocada
	if (aux == NULL)
	{
		return FALSE;
	}
	else	//a mem�ria foi alocada
	{
		//Passo 2: Armazenar o valor a ser inserido na posi��o rec�m-alocada (no campo valor)	
		aux->valor = numero;
		
		//Passo 3: Fazer o novo n� apontar (atrav�s do campo prox) para o n� que at� ent�o era o primeiro da lista	
		aux->prox = *L;
		
		//Passo 4: Fazer o ponteiro inicial da Lista (L) apontar para o novo n�			
		*L = aux;
		
		return TRUE;
	}
}

void exibir (TLista L)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a lista est� vazia
	if (L == NULL)
	{
		printf ("Lista vazia!");
	}
	else
	{
		//printf ("Lista: ");
		
		//fazendo 'aux' apontar, inicialmente, para o primeiro n� da lista
		aux = L;
		
		while (aux != NULL)		//'aux' percorrer� os n�s da lista at� que ele chegue ao valor NULL
		{
			//exibir o valor apontado pelo aux
			printf ("%d ", aux->valor);   //l�-se: aux apontado valor
			//printf ("%d ", (*aux).valor);    equivalente ao comando da linha anterior
			
			//fazer o aux apontar para o pr�ximo n�
			aux = aux->prox;
		}
		
		printf ("\n\n");
	}
}

