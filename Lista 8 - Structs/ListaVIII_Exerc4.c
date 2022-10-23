/*
	FAETERJ-Rio
	FPR - Noite		Professor Leonardo Vianna
	Data: 29/11/2021
	
	STRUCTS
	
	Lista de Exerc�cios VIII:
	
	Quest�o 04: 
	Suponha a exist�ncia de um vetor de tamanho TAM, cada posi��o armazenando o 
	nome da pessoa e a sua data de anivers�rio (representada por um struct do 
	tipo TData, contendo os campos dia e mes). Pede-se o desenvolvimento das 
	seguintes fun��es:
 	- Determinar a quantidade de pessoas que fazem anivers�rio no m�s M;
 	- Exibir os nomes de todas pessoas que fazem anivers�rio entre as datas 
	  d1 e d2, ambas do tipo TData.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 5

//defini��o de tipos
typedef struct {
	int dia, mes;
} TData;

typedef struct {
	char nome[30];
	TData dataAniversario;
} TPessoa;

//prot�tipos das fun��es
int aniversariantesMes (TPessoa vetor[], int quant, int mes);
void exibirAniversariantes (TPessoa vetor[], int quant, TData d1, TData d2);

void preencheVetor (TPessoa vetor[], int quant);
int verificaDataIntervalo (TData d1, TData d2, TData data);

//main
void main ()
{
	//declara��o de vari�veis
	TPessoa pessoas[TAM];
	TData data1, data2;
	int resp;
	
	//preenchendo o vetor
	preencheVetor (pessoas, TAM);
	
	//verificando quantas pessoas fazem anivers�rio no m�s de agosto
	resp = aniversariantesMes (pessoas, TAM, 8);
	
	printf ("%d pessoas fazem aniversario em agosto.\n\n", resp);
	
	//inicializando 'data1' e 'data2'
	data1.dia = 15;
	data1.mes = 4;
	
	data2.dia = 5;
	data2.mes = 10;
	
	//exibindo os dados das pessoas que fazem anivers�rio entre 15/4 e 5/10
	exibirAniversariantes (pessoas, TAM, data1, data2);

}

//implementa��o das fun��es

//Determinar a quantidade de pessoas que fazem anivers�rio no m�s M.
int aniversariantesMes (TPessoa vetor[], int quant, int mes)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a pessoa da posi��o 'i' faz anivers�rio no m�s 'mes'
		if (vetor[i].dataAniversario.mes == mes)
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}

//Exibir os nomes de todas pessoas que fazem anivers�rio entre as datas
//d1 e d2, ambas do tipo TData
void exibirAniversariantes (TPessoa vetor[], int quant, TData d1, TData d2)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nPessoas que fazem aniversario entre %d/%d e %d/%d:\n\n", d1.dia, d1.mes, d2.dia, d2.mes);
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a pessoa da posi��o 'i' faz anivers�rio no intervalo definido por 'd1' e 'd2'
		if (verificaDataIntervalo (d1, d2, vetor[i].dataAniversario) == 1)
		{
			printf ("Nome: %s\n", vetor[i].nome);
			printf ("Data de anversario: %d/%d\n\n", vetor[i].dataAniversario.dia, vetor[i].dataAniversario.mes);
		}
	}
}

//verifica se 'data' est� no intervalo de datas definido por 'd1' e 'd2'
//retornando 1 se estiver; ou 0, caso contr�rio.
int verificaDataIntervalo (TData d1, TData d2, TData data)
{
	/*
		Exemplos:
		
					d1:  10 3        d2: 5 9
					
	*/	
	
	//considerando o exemplo, estaria testando se a data pertence a abril a agosto	
	if ((data.mes > d1.mes) && (data.mes < d2.mes))
	//if ((d1.mes < data.mes) && (d2.mes > data.mes))
	{
		return 1;
	}
	else
	{
		//considerando o exemplo, testando se a data pertence ao m�s de mar�o
		if (data.mes == d1.mes)
		//if (d1.mes == data.mes)		
		{
			//considerando o exemplo, testando se o dia da data � maior ou igual a 10
			if (data.dia >= d1.dia)
			//if (d1.dia <= data.dia)
			{
				return 1;
			}			
		}
		else
		{
			//considerando o exemplo, testando se a data pertence ao m�s de setembro
			if (data.mes == d2.mes)
			//if (d2.mes == data.mes)
			{
				//considerando o exemplo, testando se o dia da data � menor ou igual a 5
				if (data.dia <= d2.dia)
				//if (d2.dia >= data.dia)
				{
					return 1;
				}			
			}			
		}
	}
	
	//a data n�o pertence ao intervalo informado
	return 0;
}

//fun��o que l� os dados do vetor
void preencheVetor (TPessoa vetor[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		fflush (stdin);
		printf ("Nome: ");
		gets (vetor[i].nome);
		
		printf ("Data de aniversario (DD MM): ");
		scanf ("%d %d", &vetor[i].dataAniversario.dia, &vetor[i].dataAniversario.mes);		
	}
}
