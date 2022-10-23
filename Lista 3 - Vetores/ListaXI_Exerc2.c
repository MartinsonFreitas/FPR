/*
	FAC - 2021/1
	Resolu��o dos exerc�cios que n�o foram resolvidos em sala com o professor.
	
	Lista de Exerc�cios XI 
	
	Quest�o 02:
	
	Considere a exist�ncia de dois conjuntos num�ricos A e B contendo n1 e n2 
	elementos, respectivamente. Pede-se o desenvolvimento de uma fun��o que 
	determine se um dos conjuntos est� contido no outro, retornando os seguintes 
	c�digos:
 		- 1, se A estiver contido em B;
 		- 2, se B estiver contido em A;
 		- 0, caso contr�rio.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int questao02 (int vet1[], int quant1, int vet2[], int quant2);

int estahContido (int vet1[], int quant1, int vet2[], int quant2);
int buscar (int vetor[], int quant, int numero);
void exibirVetor (int vetor[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	int vetA[5]  = {1,2,3,4,5},
	    vetB[10] = {5,3,2,1,4,6,9,8,7,0},
	    vetC[4]  = {6,7,8,9};
	    
	//exibindo os vetores
	printf ("Vetor A:\n");
	exibirVetor (vetA, 5);		

	printf ("Vetor B:\n");
	exibirVetor (vetB, 10);		
	
	printf ("Vetor C:\n");
	exibirVetor (vetC, 4);		
	
	//testando a fun��o
	
	//sabemos que A est� contido em B. Ent�o, a fun��o deve retornar 1
	switch (questao02 (vetA, 5, vetB, 10))
	{
		case 1:	printf ("\n\tO vetor A esta' contido no vetor B!\n");
		        break;
		case 2:	printf ("\n\tO vetor B esta' contido no vetor A!\n");
		        break;
		case 0:	printf ("\n\tA e B: nenhum vetor esta' contido no outro!\n");
		        break;
	}
	

	//sabemos que C est� contido em B. Ent�o, a fun��o deve retornar 2
	switch (questao02 (vetB, 10, vetC, 4))
	{
		case 1:	printf ("\n\tO vetor B esta' contido no vetor C!\n");
		        break;
		case 2:	printf ("\n\tO vetor C esta' contido no vetor B!\n");
		        break;
		case 0:	printf ("\n\tB e C: nenhum vetor esta' contido no outro!\n");
		        break;
	}
	
	//sabemos que A n�o est� contido em C e vice-versa. Ent�o, a fun��o deve retornar 0
	switch (questao02 (vetA, 5, vetC, 4))
	{
		case 1:	printf ("\n\tO vetor A esta' contido no vetor C!\n");
		        break;
		case 2:	printf ("\n\tO vetor C esta' contido no vetor A!\n");
		        break;
		case 0:	printf ("\n\tA e C: nenhum vetor esta' contido no outro!\n");
		        break;
	}
}

//implementa��o das fun��es

/*Fun��o que responde ao que foi solicitado no enunciado. Para isso, chama uma
  fun��o auxiliar que verificar se determinado vetor est� contido em outro.
  Chamando a fun��o duas vezes, trocando a ordem dos argumentos, chega-se � 
  solu��o esperada para o problema.*/
int questao02 (int vet1[], int quant1, int vet2[], int quant2)
{
	//verificando se vet1 est� contido em vet2
	if (estahContido (vet1, quant1, vet2, quant2) == TRUE)
	{
		return 1;
	}
	else
	{
		//verificando se vet2 est� contido em vet1
		if (estahContido (vet2, quant2, vet1, quant1) == TRUE)
		{
			return 2;
		}
		else
		{
			//se chegou aqui, nenhum vetor est� contido no outro
			return 0;
		}
	}
}

//Verificar se vet1 est� contido em vet2, retornando TRUE ou FALSE
//Para isso, verifica se todos os elementos de vet1 est�o tamb�m em vet2
int estahContido (int vet1[], int quant1, int vet2[], int quant2)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo todas as posi��es do vetor vet1
	for (i=0;i<quant1;i++)
	{
		//chamando a fun��o buscar para saber se o elemento vet[i] est� em vet2.
		//Se n�o estiver, j� sabemos que vet1 n�o est� contido em vet2
		if (buscar (vet2, quant2, vet1[i]) == FALSE)
		{
			return FALSE;
		}
	}
	
	//se chegou at� aqui, � pq todos os elementos de vet1 est�o em vet2.
	//Logo, vet1 est� contido em vet2.
	return TRUE;
}

//fun��o que verifica se o n�mero encontra-se no vetor
int buscar (int vetor[], int quant, int numero)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<quant;i++)
	{
		//verificando se o elemento foi encontrado no vetor
		if (vetor[i] == numero)
		{
			return TRUE;
		}
	}
	
	//se chegou at� aqui, � pq o elemento n�o encontra-se no vetor
	return FALSE;
}

//Exibe na tela os elementos do vetor
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

