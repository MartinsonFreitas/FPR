/*
	FAETERJ-Rio
	FPR - Noite		Professor Leonardo Vianna
	Data: 22/11/2021
	
	STRUCTS
	
	Exerc�cio:
	
	Considere a exist�ncia de um vetor no qual cada posi��o pode armazenar o nome do 
	aluno, as notas de AV1 e AV2, sua m�dia e a situa��o (aprovado, reprovado ou em AVF). 
	Pede-se:
	i.   A declara��o do vetor, assim como de todos os tipos de dados necess�rios, 
	     caso existam;
	ii.  Uma fun��o que leia os dados de todos os alunos da turma;
	iii. Uma fun��o que calcule a m�dia de cada aluno (e a armazene no vetor), assim como 
	     a sua situa��o;
	iv.  Uma fun��o que, dado um n�mero inteiro (1-aprovado;2-reprovado;3-em AVF), 
	     exiba todos os alunos que est�o nesta situa��o.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//defini��o de constantes
#define TAM 2

//defini��o de tipos
typedef struct {
	char nome[50];
	float av1, av2, media;
	char situacao[15];
} TAluno;

//prot�tipos das fun��es
void leituraDados (TAluno vetor[], int tamanho);
void calculaMediaSituacao (TAluno vetor[], int tamanho);
void exibirAlunosPorSituacao (TAluno vetor[], int tamanho, int sit);

//main
void main ()
{
	//declara��o de vari�veis
	TAluno turma[TAM];
	
	//preenchendo o vetor
	leituraDados (turma, TAM);
	
	//calculando (e armazenando) a m�dia e a situa��o de todos os alunos
	calculaMediaSituacao (turma, TAM);
	
	//exibindo os alunos aprovados
	printf ("\n\nAlunos aprovados:\n\n");
	exibirAlunosPorSituacao (turma, TAM, 1);
	
	//exibindo os alunos reprovados
	printf ("\n\nAlunos reprovados:\n\n");
	exibirAlunosPorSituacao (turma, TAM, 2);
	
	//exibindo os alunos em AVF
	printf ("\n\nAlunos em AVF:\n\n");
	exibirAlunosPorSituacao (turma, TAM, 3);
}

//implementa��o das fun��es

//fun��o para a leitura dos dados de todos os alunos da turma
void leituraDados (TAluno vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		fflush (stdin);
		printf ("Nome: ");
		gets (vetor[i].nome);
		
		printf ("AV1: ");
		scanf ("%f", &vetor[i].av1);
		
		printf ("AV2: ");
		scanf ("%f", &vetor[i].av2);
	}
}

//fun��o que calcula a m�dia de cada aluno (e a armazene no vetor), assim como a sua situa��o
void calculaMediaSituacao (TAluno vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//calculando a m�dia do i-�simo aluno
		vetor[i].media = (vetor[i].av1 + vetor[i].av2)/2;
		
		//calculando a situa��o do i-�simo aluno
		if (vetor[i].media >= 6)
		{
			strcpy (vetor[i].situacao, "APROVADO");
		}
		else
		{
			if (vetor[i].media < 4)
			{
				strcpy (vetor[i].situacao, "REPROVADO");
			}
			else
			{
				strcpy (vetor[i].situacao, "AVF");
			}
		}
	}
}

//fun��o que, dado um n�mero inteiro (1-aprovado;2-reprovado;3-em AVF), exiba todos os 
//alunos que est�o nesta situa��o
void exibirAlunosPorSituacao (TAluno vetor[], int tamanho, int sit)
{
	//declara��o de vari�veis
	char busca[15];
	int i;
	
	//mapeando o par�metro 'sit' para a vari�vel 'busca'
	switch (sit)
	{
		case 1: strcpy (busca, "APROVADO");
		        break;
		case 2: strcpy (busca, "REPROVADO");
		        break;
		case 3: strcpy (busca, "AVF");
		        break;
	}
	
	//varrendo o vetor em busca da situa��o desejada
	for (i=0;i<tamanho;i++)
	{
		if (strcmp (vetor[i].situacao,busca) == 0)
		{
			printf ("\nNome: %s\nAV1: %.1f - AV2: %.1f - Media: %.1f\n", 
			         vetor[i].nome, vetor[i].av1, vetor[i].av2, vetor[i].media);
		}
	}
}
