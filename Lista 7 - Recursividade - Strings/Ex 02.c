/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 06/11/2021 - Aula extra
	
	Quest�o 02:
	Dado o programa abaixo, pede-se avaliar a sua execu��o e, 
	ao final, informar o valor que � exibido. 
	Para isto, � obrigat�rio apresentar o passo a passo de sua execu��o, 
	com a sequ�ncia de chamadas � fun��o, 
	assim como o valor retornado por cada uma delas.
	
	*/
	
	#include <stdio.h>
		int funcao (int a, int b) {
			if (a > 0) {
				if (a > b) {
					return funcao (a-1, b+2) + funcao (b-a, b);
				} else {
					return funcao (a-2, b);
				}
			} else {
				return b;
			}
		}
		void main () {
			printf ("Resposta = %d", funcao (10, 5));
		}
		


