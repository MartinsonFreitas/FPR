/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 06/11/2021 - Aula extra
	
	Quest�o 03:
		Considere a fun��o cuja assinatura � apresentada a seguir:
		int pesquisa (char s1[], char s2[], int ordem) onde:
		
		s1 string contendo diversas informa��es sobre uma pessoa, 
		separadas pelo caracter | (tamb�m termina com |)
		s2 uma informa��o a ser buscada em s1
		ordem ordem na qual s2 deve ser buscada em s1. 
		
			Por exemplo, se for igual a 3, 
			a fun��o deve verificar se s2 � a terceira informa��o dentro de s1.
			Pede-se a implementa��o desta fun��o, 
			sabendo que ela deve retornar 1 se s2 estiver em s1 
			na posi��o definida por ordem; caso contr�rio, deve retornar 0.
	
	*/
	
#include <stdio.h>
#include (string.h)

// prot�tipos das fun��es
int pesquisa (char s1[], char s2[], int ordem);


// main
void main () {
	
	//declara��o de vari�veis
	char str1[30], str2[30];
	int resp;
	
	//inicializa��o de strings
	strcpy(str1, "JOAO DA SILVA|123.456.789-00|06/11/1980|GERENTE|");
	strcpy(str2, "06/11/1980");
	
	//iniciando a ordem
	ordem = 3;
	
	//chamando a fun��o
	resp = pesquisa (str1, str2, ordem);
	
	//exibindo resultado
	if (resp==1){
		printf("\n A string %s esta� na posicao %d de %s", str2, ordem, str1);
	} else {
		printf("\n A string %s nao esta� na posicao %d de %s", str2, ordem, str1);
	}

}

//implementa��o das fun��es
int pesquisa (char s1[], char s2[], int ordem){
	//declarando variaveis
	int i, pos, cont = 1;
	char nova[30];
	
	//posicionando o 'i' no primeiro caracter que est� na posi��o 'ordem' de 's1'
	for (i=0, cont<ordem;i++){
		
		//sempre que encontrar o caracter '|' chegou-se a uma nova informa��o
		if (s1[i] == '|'){
			cont++
		}
		
	}
	
	//montando uma string com a informa��o de 's1' que est� na posi��o de 'ordem'
	do{
		nova[pos] = s1[i];
		pos++;
		i++;
	}
	
	while (s1[i] != '|');
	
	
}



