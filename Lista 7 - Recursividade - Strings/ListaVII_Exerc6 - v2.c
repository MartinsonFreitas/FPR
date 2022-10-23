/*
	FPR - Manh�/Noite
	Professor Leonardo Vianna
	2021/2
	Data: 06/11/2021 (Aula extra)
	
	Lista de Exerc�cios VII

	Quest�o 06:
	Implementar uma fun��o recursiva que, dados uma string str e um caracter ch, remova 
	de str todas as ocorr�ncias de ch, retornando o total de remo��es realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int contar (char str[], char ch);
int contarAux (char str[], char ch, int pos);

void main ()
{
	//declara��o de vari�veis
	int quant, i;
	char s[30];
	
	
	//inicializando a string
	strcpy (s, "ALGORITMOS");
	
	for(i=0; i<strlen(s); ){
		char letra = s[i];				//caracter a ser removido da string
		//chamando a fun��o
		quant = contar (s, letra);		
	
		//exibindo o resultado
		printf ("\nForam encontradas %d ocorrencia(s) do caracter %c.\n", quant, letra);
	}
	
}

//implementa��o das fun��es
int contar (char str[], char ch)
{
	return contarAux (str, ch, 0);		//come�ando da posi��o 0
}

int contarAux (char str[], char ch, int pos)
{
	//declara��o de vari�veis
	int i;
	
	//caso base: terminou a string 'str'
	if (str[pos] == '\0')
	{
		return 0;
	}
	else
	{
		//verificando se o caracter foi encontrado
		if (str[pos] == ch)
		{
			//remover o caracter, atrav�s do deslocamento dos pr�ximos caracteres para a esquerda
			for (i=pos;i<strlen(str);i++)
			{
				str[i] = str[i+1];
			}
			
			return 1 + contarAux (str, ch, pos+1); //+1, pois foi feita mais uma altera��o
		}
		else
		{
			return contarAux (str, ch, pos+1);
		}
	}
}
