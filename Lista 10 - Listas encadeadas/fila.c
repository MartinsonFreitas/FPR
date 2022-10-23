/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR
	2022/1  -  Turma: Noite
	
	Data: 13/06/2022
	
	Filas Encadeadas (Filas Din�micas)
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//defini��o de tipos
typedef struct No {
	int valor;
	struct No* prox;
} TNo;

typedef TNo* TLista;

//declara��o dos prot�tipos das fun��es
int enfilar (TLista *F, TLista *U, int numero);
int desenfilar (TLista *F, TLista *U, int *numero);
int primeiro (TLista F, int *numero);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista F = NULL, U = NULL;
	int num, op;
		
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Enfilar
			case 1: printf ("\nEntre com o valor a ser inserido na fila: ");
			        scanf ("%d", &num);
			        
			        //chamando a fun��o
			        if (enfilar (&F, &U, num) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso na fila!");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada na fila!");
					}
					break;

			//Desenfilar
			case 2: //chamando a fun��o
			        if (desenfilar (&F, &U, &num) == TRUE)
			        {
			        	printf ("\n\tO valor %d foi removido da fila!", num);
					}
					else
					{
						printf ("\n\tERRO: remocao nao realizada!");
					}
					break;

			//Primeiro
			case 3: if (primeiro (F, &num) == TRUE)
			        {
			        	printf ("\n\tPrimeiro elemento da fila: %d.", num);
					}
					else
					{
						printf ("\n\tERRO: fila vazia!");
					}
					break;
			
			//Sa�da
			case 4: printf ("\n\nPrograma finalizado!");
			        break;
			        
			default: printf ("\n\nOpcao invalida! Tente novamente.");
		}
		
		system ("PAUSE");
	}
	while (op != 4);
}

//implementa��o das fun��es
int enfilar (TLista *F, TLista *U, int numero)
{
	//declara��o de vari�veis;
	TLista aux;
	
	//1� passo: alocar mem�ria para o novo n�	
	aux = (TLista) malloc (sizeof(TNo));
	
	//verificando se houve erro na aloca��o de mem�ria
	if (aux == NULL)
	{
		return FALSE;
	}
	else
	{
		//2� passo: armazenar 'numero' na mem�ria rec�m-alocada
		aux->valor = numero;
		
		//3� passo: fazer o campo 'prox' do novo n� apontar para NULL
		aux->prox = NULL;
		
		if (*U != NULL) //ou seja, j� existem elementos na fila
		{
			//4� passo: fazer o campo 'prox' do �ltimo n� apontar para o novo n�
			(*U)->prox = aux;
		}
		else	//fila vazia
		{
			*F = *U = aux;
		}
		
		//5� passo: atualizar o ponteiro U
		*U = aux;   //ou *U = (*U)->prox;
		
		return TRUE;
	}	
}

int desenfilar (TLista *F, TLista *U, int *numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a fila est� vazia
	if (*F == NULL)
	{
		return FALSE;
	}
	else
	{
		//salvar em 'aux' o endere�o do n� que representa o primeiro elemento da fila
		aux = *F;
		
		//atualizar *F para apontar para o "pr�ximo" elemento
		*F = aux->prox;   //ou *F = (*F)->prox;
		
		//verificando se a fila se tornou vazia com a remo��o
		if (*F == NULL)
		{
			//atualizar o valor de *U
			*U = NULL;
		}
		
		//armazenar em 'numero' o elemento sendo removido
		*numero = aux->valor;
		
		//liberando a mem�ria do primeiro elemento da fila
		free (aux);
		
		return TRUE;
	}
}

int primeiro (TLista F, int *numero)
{
	//verificando se a fila est� vazia
	if (F == NULL)
	{
		return FALSE;
	}
	else
	{	
		//armazenando em 'numero' o primeiro elemento da fila
		*numero = F->valor;
		 	
		return TRUE;
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Enfilar\n");
	printf ("(2) Desenfilar\n");
	printf ("(3) Primeiro\n");
	printf ("(4) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
