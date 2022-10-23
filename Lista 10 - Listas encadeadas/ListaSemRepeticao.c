/*
	FAETERJ-Rio
	Fundamentos de Programa��o - FPR
	2022/1  -  Turma: Noite
	
	Data: 06/06/2022
	
	Listas Encadeadas (Listas Din�micas) - n�o pode existir elementos repetidos na lista
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
int inserir (TLista *L, int numero);
int remover (TLista *L, int numero);
int alterar (TLista L, int velho, int novo);
TLista buscar (TLista L, int numero);
void exibir (TLista L);

int menu ();

//main 
void main ()
{
	//declara��o de vari�veis
	TLista L = NULL;
	int num1, num2, op, quant;
	TLista pos;
	
	do
	{
		system ("CLS");		//limpar tela    clrscr();
		
		//exibindo o meu ao usu�rio
		op = menu ();
		
		//verificando a op��o escolhida
		switch (op)
		{
			//Inser��o
			case 1: printf ("\nEntre com o valor a ser inserido: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        if (inserir (&L, num1) == TRUE)
			        {
			        	printf ("\n\tInsercao realizada com sucesso!");
					}
					else
					{
						printf ("\n\tERRO: insercao nao realizada!");
					}
					break;

			//Remo��o
			case 2: printf ("\nEntre com o valor a ser removido: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        quant = remover (&L, num1);
			        
					if (quant > 0)
			        {
			        	printf ("\n\t%d remocoes realizadas!", quant);
					}
					else
					{
						printf ("\n\tERRO: remocao nao realizada!");
					}
					break;

			//Altera��o
			case 3: printf ("\nEntre com o valor a ser alterado: ");
			        scanf ("%d", &num1);
			        
			        printf ("\nEntre com o novo valor: ");
			        scanf ("%d", &num2);
			        
			        //chamando a fun��o
			        quant = alterar (L, num1, num2);
			        
			        if (quant > 0)
			        {
			        	printf ("\n\t%d alteracoes realizadas!", quant);
					}
					else
					{
						printf ("\n\tERRO: alteracao nao realizada!");
					}
					break;

			//Busca
			case 4: printf ("\nEntre com o valor a ser buscado: ");
			        scanf ("%d", &num1);
			        
			        //chamando a fun��o
			        pos = buscar (L, num1);
			        
					if (pos != NULL)
			        {
			        	printf ("\n\tO valor %d foi encontrado na lista!", num1);
					}
					else
					{
						printf ("\n\tO valor %d NAO foi encontrado na lista!", num1);
					}
					break;

			//Exibir
			case 5: exibir (L);
					break;
					
			//Sa�da
			case 6: printf ("\n\nPrograma finalizado!");
			        break;
			        
			default: printf ("\n\nOpcao invalida! Tente novamente.");
		}
		
		system ("PAUSE");
	}
	while (op != 6);
}

//implementa��o das fun��es
int inserir (TLista *L, int numero)
{
	//declara��o de vari�veis;
	TLista aux;
	
	//1� passo: alocar mem�ria para o novo n�	
	aux = (TLista) malloc (sizeof(TNo));
	
	//verificando se houve erro na aloca��o de mem�ria ou se o elemento j� existe
	if ((aux == NULL) || (buscar (*L, numero) != NULL))
	{
		return FALSE;
	}
	else
	{
		//2� passo: armazenar 'numero' na mem�ria rec�m-alocada
		aux->valor = numero;
		
		//3� passo: mandar o campo 'prox' do novo n� apontar para o 
		//"at� ent�o" primeiro elemento	da lista
		aux->prox = *L;
		
		//4� passo: fazer com que L aponte para o novo n� da lista		
		*L = aux;
		
		return TRUE;
	}	
}

int remover (TLista *L, int numero)
{
	//declara��o de vari�veis
	TLista aux1, aux2;
		
	//verificando se o primeiro elemento da lista � aquele a ser removido
	if ((*L != NULL) && ((*L)->valor == numero))
	{
		//remo��o na primeira posi��o da lista
		
		//Passo 1: fazer um 'auxiliar' apontar para o primeiro n� da lista
		aux1 = *L;
		
		//Passo 2: fazer com que o L aponte para o segundo elemento da lista (que passar� a ser o primeiro)
		*L = (*L)->prox; 
		
		//Passo 3: liberar a mem�ria do n� a ser removido
		free (aux1);
		
		//retornar que a remo��o foi realizada
		return TRUE;
	}
	
	//a fun��o continuar� apenas se ainda existirem n�s na lista 
	if (*L != NULL)   	
	{
		//remo��o da segunda posi��o em diante
		aux2 = *L;
		aux1 = (*L)->prox;  //ou aux1 = aux2->prox;
		
		//percorrendo toda a lista com 'aux1' (e 'aux2' na sua sombra)
		
		//1� passo: Andar com 'aux1' at� encontrar o elemento a ser removido			
		//(e garantir que 'aux2' estar� apontando para o n� anterior)	
		while (aux1 != NULL)
		{
			//verificando se o elemento foi encontrado
			if (aux1-> valor == numero)
			{
				//2� passo: fazer com que o n� apontado por 'aux2' aponte 
				//para o n� seguinte �quele a ser removido
				aux2->prox = aux1->prox;
				
				//3� passo: liberar a mem�ria do n� que deve ser removido
				free (aux1);
				
				//4� passo: fazer com que 'aux1' aponte para o pr�ximo elemento 
				//a ser analisado.		
				//aux1 = aux2->prox;
				
				//retornar que a remo��o foi realizada
				return TRUE;
			}
			else
			{
				//andando com os dois auxiliares
				aux2 = aux1;
				aux1 = aux1->prox;
			}
		}
	}
	
	//retornar que a remo��o n�o foi realizada
	return FALSE;
}

int alterar (TLista L, int velho, int novo)
{
	//declara��o de vari�veis
	TLista pVelho, pNovo;
	
	//buscando o elemento 'velho'
	pVelho = buscar (L, velho);
	
	//verificando se o 'velho' existe na lista
	if (pVelho != NULL)
	{
		//buscando o elemento 'novo'
		pNovo = buscar (L, novo);
		
		//verificando se o novo j� encontra-se na lista
		if (pNovo != NULL)
		{
			return FALSE;
		}
		else
		{
			//se chegou at� aqui, a altera��o pode ser feita
			pVelho->valor = novo;
			
			return TRUE;
		}
	}	
}

TLista buscar (TLista L, int numero)
{
	//declara��o de vari�veis
	TLista aux = L;
	
	//percorrendo a lista at� o seu final
	while (aux != NULL)
	{
		//testando se � o valor sendo buscado
		if (aux->valor == numero)
		{
			//retornando o endere�o do n� que cont�m o valor buscado
			return aux;
		}
			
		//atualizando o 'aux' para apontar para o pr�ximo n�
		aux = aux->prox;
	}
	
	//se chegou a este ponto, o n�mero buscado n�o existe
	return NULL;	
}

void exibir (TLista L)
{
	//declara��o de vari�veis
	TLista aux = L;
	
	//testando se a lista est� vazia
	if (L == NULL)
	{
		printf ("\nLista vazia!");
	}
	else
	{
		printf ("\nElementos da lista: ");
		
		//percorrendo a lista at� o seu final
		while (aux != NULL)
		{
			//exibindo o valor apontado pelo 'aux'
			printf ("%d ", aux->valor);
			
			//atualizando o 'aux' para apontar para o pr�ximo n�
			aux = aux->prox;
		}
	}
}

int menu ()
{
	//declara��o de vari�veis
	int opcao;
	
	//exibindo o meu ao usu�rio
	printf ("Menu de Operacoes:\n\n");
	printf ("(1) Inserir\n");
	printf ("(2) Remover\n");
	printf ("(3) Alterar\n");
	printf ("(4) Buscar\n");
	printf ("(5) Exibir\n");
	printf ("(6) Sair\n\n");
	
	//lendo a op��o do usu�rio
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &opcao);
	
	//retornando a op��o escolhida
	return opcao;
}
