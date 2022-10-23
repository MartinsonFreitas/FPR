/********************************************************************************************

	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII
	
	Quest�o 03:
	Considere a fun��o cuja assinatura � apresentada a seguir:

				int pesquisa (char s1[], char s2[], int ordem)

	onde:
		s1		string contendo diversas informa��es sobre uma pessoa, separadas pelo 
				caracter | (tamb�m termina com |)
		s2		uma informa��o a ser buscada em s1
		ordem	ordem na qual s2 deve ser buscada em s1. Por exemplo, se for igual a 3, 
				a fun��o deve verificar se s2 � a terceira informa��o dentro de s1.   

	Pede-se a implementa��o desta fun��o, sabendo que ela deve retornar 1 se s2 estiver 
	em s1 na posi��o definida por ordem; caso contr�rio, deve retornar 0.
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int pesquisa (char s1[], char s2[], int ordem);

//main
void main ()
{
	//declara��o de vari�veis
	char str1[100], str2[30];
	int resp, ordem;
	
	//inicializando as strings
	strcpy (str1, "JOAO DA SILVA|123.456.789-00|06/11/1980|GERENTE|");
	strcpy (str2, "06/11/1980");
	
	//inicializando a ordem
	ordem = 5;
	
	//chamando a fun��o
	resp = pesquisa (str1, str2, ordem);
	
	//exibindo o resultado
	if (resp == 1)
	{
		printf ("\nA string %s esta' na posicao %d de %s.", str2, ordem, str1);
	}
	else
	{
		printf ("\nA string %s nao esta' na posicao %d de %s.", str2, ordem, str1);
	}
}

//implementa��o das fun��es
int pesquisa (char s1[], char s2[], int ordem)
{
	//declara��o de vari�veis
	int i, pos, cont = 1;
	char nova[30];
	
	//posicionando o 'i' no primeiro caracter que est� na posi��o 'ordem' de 's1'
	for (i=0;(cont<ordem)&&(s1[i]!='\0');i++)  //ou vai parar quando chegar ao final da string 's1'
	{
		//sempre que encontrar o caracter '|', chegou-se a uma nova informa��o
		if (s1[i] == '|')
		{
			cont++;
		}
	}
	
	//testando se chegou ao final da string 's1'
	if (s1[i] == '\0')
	{
		return 0;
	}
	else
	{
		//montando uma string com a informa��o de 's1' que est� na posi��o 'ordem'
		pos=0;
		do
		{
			nova[pos] = s1[i];
			pos++;
			i++;
		}
		while (s1[i] != '|');	//quando parar a repeti��o, o 'i' estar� na posi��o do pr�ximo '|'
		
		//finalizando a string 'nova'
		nova[pos] = '\0';
		
		//comparando 'nova' com a string 's2'
		if (strcmp (nova, s2) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
