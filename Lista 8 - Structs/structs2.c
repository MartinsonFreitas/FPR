/*
	FAETERJ-Rio
	FPR - Noite - 2022/1
	Professor Leonardo Vianna
	
	Data: 04/04/2022
	
	Vetor de Structs
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define QUANT 3

//defini��o de tipos
typedef struct {
	char nome[30];
	float av1, av2, media;
	char situacao[15];
} TAluno;

//main
void main ()
{
	//declara��o de vari�veis
	TAluno turma[QUANT];
	int i;
	
	//preenchendo os dados dos 30 alunos
	for (i=0;i<QUANT;i++)
	{
		//preenchendo os campos da vari�vel 'aluno'
		fflush (stdin);
		printf ("Nome: ");
		gets (turma[i].nome);
		
		printf ("AV1: ");
		scanf ("%f", &turma[i].av1);
		
		printf ("AV2: ");
		scanf ("%f", &turma[i].av2);
		
		//calculando a m�dia do aluno
		turma[i].media = (turma[i].av1 + turma[i].av2)/2;
		
		if (turma[i].media >= 6)
		{
			strcpy (turma[i].situacao, "APROVADO");
		}
		else
		{
			if (turma[i].media < 4)
			{
				strcpy (turma[i].situacao, "REPROVADO");
			}
			else
			{
				strcpy (turma[i].situacao, "AVF");
			}
		}
	}
}
