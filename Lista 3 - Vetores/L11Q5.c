#include <stdio.h>

/*
	Quest�o 05:
		Implementar uma fun��o que, dado um vetor
		contendo n�meros reais, determine o maior e o
		segundo maior elementos.
		
		Nota: considerar que n�o h� repeti��o de
		elementos no vetor.
*/

void defineMaiores (float vetor[], int quant, float *maior, float *segundoMaior)
{
	int i;
	
	
	/* 
				N�O DEU CERTO 
		//Implica��o l�gica: o primeiro elemento �, 
		//ao mesmo tempo, o maior e o segundo maior.
		
		(*maior) = vetor[0];
		(*segundoMaior) = vetor[0];
	*/


	//Percorrendo vetor
	for (i=0; i<quant; i++)
	{
		if (vetor[i] > (*maior))
		{
			//Se entrou aqui, encontrou, no vetor,
			//um valor maior que (*maior).
			(*segundoMaior) = (*maior);//o antigo maior passa a ser o segundo maior.
			(*maior) = vetor[i];//maior � atualizado
		}
		else
		{
			//Se entrou aqui, n�o � o maior.
			if ( vetor[i] > (*segundoMaior) && (*maior) > (*segundoMaior) )
			{
				(*segundoMaior) = vetor[i];
			}
		}
	}
	
}

void main ()
{
	float	/*v[5] = {8.2, 2.2, 7.0, 1.9, 1.1}*/
			v[5] = {5.2, 8.7, 9.0, 0.1, 6}, 
			maior=-999, segundoMaior=-998;
	
	//Chamando a fun��o
	defineMaiores(v, 5, &maior, &segundoMaior);
	
	//Exibindo resultados
	printf("MAIOR: %.1f\n", maior);
	printf("SEGUNDO MAIOR: %.1f", segundoMaior);
}
