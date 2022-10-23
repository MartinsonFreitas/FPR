/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR
	2022/1  -  Turma: Noite
	
	Data: 13/06/2022
	
	Pilhas Encadeadas (Pilhas Din�micas)
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
int empilhar (TLista *P, int numero);
int desempilhar (TLista *P, int *numero);
int topo (TLista P, int *numero);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista P = NULL;
	int num, op;
		
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Empilhar
			case 1: printf ("\nEntre com o valor a ser inserido na pilha: ");
			        scanf ("%d", &num);
			        
			        //chamando a fun��o
			        if (empilhar (&P, num) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso na pilha!");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada na pilha!");
					}
					break;

			//Desempilhar
			case 2: //chamando a fun��o
			        if (desempilhar (&P, &num) == TRUE)
			        {
			        	printf ("\n\tO valor %d foi removido da pilha!", num);
					}
					else
					{
						printf ("\n\tERRO: remocao nao realizada!");
					}
					break;

			//Topo
			case 3: if (topo (P, &num) == TRUE)
			        {
			        	printf ("\n\tTopo da pilha: %d.", num);
					}
					else
					{
						printf ("\n\tERRO: pilha vazia!");
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
int empilhar (TLista *P, int numero)
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
		
		//3� passo: mandar o campo 'prox' do novo n� apontar para o 
		//"at� ent�o" primeiro elemento	da lista
		aux->prox = *P;
		
		//4� passo: fazer com que L aponte para o novo n� da lista		
		*P = aux;
		
		return TRUE;
	}	
}

int desempilhar (TLista *P, int *numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a pilha est� vazia
	if (*P == NULL)
	{
		return FALSE;
	}
	else
	{
		//salvar em 'aux' o endere�o do n� que representa o topo da pilha
		aux = *P;
		
		//atualizar *P para apontar para o "pr�ximo" elemento
		*P = aux->prox;   //ou *P = (*P)->prox;
		
		//armazenar em 'numero' o elemento sendo removido
		*numero = aux->valor;
		
		//liberando a mem�ria do primeiro elemento da pilha (que era o seu topo)
		free (aux);
		
		return TRUE;
	}
}

int topo (TLista P, int *numero)
{
	//verificando se a pilha est� vazia
	if (P == NULL)
	{
		return FALSE;
	}
	else
	{	
		//armazenando em 'numero' o valor que est� no topo da pilha
		*numero = P->valor;
		 	
		return TRUE;
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Empilhar\n");
	printf ("(2) Desempilhar\n");
	printf ("(3) Topo\n");
	printf ("(4) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
