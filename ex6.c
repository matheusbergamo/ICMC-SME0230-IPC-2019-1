#include <stdio.h>

int main(void)
{
	int n;	//	Input
	int i, j, k, l;	//	Índices
	double c, p, q;	//	Variáveis de trabalho
	
	scanf("%d", &n);
	
	for (i = 0; i <= n; i++)	//	Linha
	{
		for (j = 0; j <= i; j++)	//	Coluna
		{
			for (k = i; k >= (j + 1); k--)	//	Cálculo do dividendo
			{
				p = p*k;				
			}
			
			for (l = 1; l <= j; l++)	//	Cálculo do divisor
			{
				q = q*k;			
			}

			c = p/q;	//	Cálculo da combinação
			printf("%.0f ", c);
		}	
		
		printf("\n");
	}

	return(0);
}
