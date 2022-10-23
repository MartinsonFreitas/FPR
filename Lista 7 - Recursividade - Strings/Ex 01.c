/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 06/11/2021 - Aula extra
	
	Quest�o 01:
	Desenvolver uma fun��o recursiva que determine o n�mero de
	caracteres comuns entre duas strings s1 e s2.
	
	Aten��o: N�o se preocupar se o mesmo caracter aparecer mais de uma vez na string.
	
	Exemplo:
		s1: CASA
		s2: CADERNO
		
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int caracteresComuns (char s1[], char s2[], int pos1, int pos2);

// fun��o main
main() {
	
	//declara��o de vari�veis
	char str1[30], str2[30];
	int resp;
	
	// inicializa��o as strings
	//strcpy(str1, "CASA");
	//strcpy(str2, "CADERNO");
	
	strcpy(str1, "CAIPIRA");
	strcpy(str2, "C");
	
	//Chamando a fun��o
	resp = caracteresComuns (str1, str2, 0, 0);
	
	// exibindo o resultado
	printf ("Foram encontrados %d caracteres comuns entre as strings %s e %s\n\n", resp, str1, str2 );	
	
}

//implementa��es das fun��es
int caracteresComuns (char s1[], char s2[], int pos1, int pos2){
	if (pos1 == strlen(s1)){
		return 0; // funciona como --> cont = 0
	} else {
		if (pos2 == strlen (s2)){
			return caracteresComuns (s1, s2, pos1+1, 0);
		} else {
			// verificando se os caracteres s�o iguais
			if (s1[pos1] == s2[pos2]){
				return 1 + caracteresComuns (s1, s2, pos1+1, 0); // funciona como cont++ // Interessante!
			} else {
				return caracteresComuns (s1, s2, pos1, pos2+1);
			}
		}
	}
}
