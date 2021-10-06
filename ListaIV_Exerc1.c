/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 27/09/2021
	
	Lista de Exerc�cios IV - Matrizes
	
	QUEST�O 01:
	Fa�a um fun��o que, dada uma matriz M8�5 de reais, gere a matriz Mt, sua transposta.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declara��o de constantes
#define L 8
#define C 5

//Prot�tipo da fun��o
void transposta (float m[L][C], float mt[C][L]);

void preencherAleatorio(float m[L][C]);
void exibir(float m[L][C]);
void exibirTransp(float m[C][L]);

//Implementando a main
int main(void)
{
	//declara��o de vari�veis
	float matriz[L][C];
	float transp[C][L];
		
	preencherAleatorio(matriz);
	exibir(matriz);
	printf("\n");
	
	transposta(matriz, transp);
	exibirTransp(transp);
	return 0;
}

//Fun��es

void transposta (float m[L][C], float mt[C][L])
{
	//declara��o de vari�veis
	int i,j;
		
	//preenchendo a matriz transposta
	for(i=0;i<L;i++){
	    for(j=0;j<C;j++){
	        mt[j][i]=m[i][j];
	    }
	}
}

void exibir(float m[L][C]){
	int i,j;
	for(i=0;i<L;i++){
    	for(j=0;j<C;j++){
	        printf("%6.2f ",m[i][j]);
	    }
	    printf("\n");
	}
}

void preencherAleatorio(float m[L][C]){
	int i,j;

	srand(time(NULL));
	for(i=0;i<L;i++){
    	for(j=0;j<C;j++){
           m[i][j]=rand()%101;  //gerar n�meros de 0 a 100
        }
    }
}

void exibirTransp(float m[C][L])
{
	int i,j;
	for(i=0;i<C;i++){
    	for(j=0;j<L;j++){
	        printf("%6.2f ",m[i][j]);
	    }
	    printf("\n");
	}
}
