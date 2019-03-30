#include <stdio.h>

double Combinacao(int i, int j)	//	Função Combinação
{
/* Fórmula da Combinação
 C(i, j) = i!/(j!*(i - j)!) = (i*(i - 1)*...(j + 1))/((i - j)!) 
 C(i, j) = p/q; 
 p = i*(i - 1)*(i - 2)*...(j + 2)*(j + 1); 
 q = (i - j)!; */		
 
/* A declaração em double foi utilizada para se poder calcular
 resultados com um grande número de algarismos sem problemas */
 
	double C;	//	Output da função
	double p = 1, q = 1;	//	Variáveis de trabalho
	int k; //	Índice de iteração
		
	//	Cálculo de p		
	if (i == 0 || j == 0)	//	Teste necessário pois 0! = 1
	{
		C = 1;	//	Cálculo da combinação para este caso particular
	}
	else	
	{
		for (k = i; k >= (j + 1); k--)	//	Iteração de produtos de p
		{
			p = p*k;
		}
		
		for (k = (i - j); k >= 1; k--)	//	Iteração de produtos de q
		{
			q = q*k;
		}
		
		C = p/q;	//	Cálculo da combinação
	}
	
	return(C);	//	Output da função
}

int main(void)	//	Função Principal
{
	int N;	//	Input
	double C; //	Output // A explicação do porquê utilizei double está na função acima
	int i, j;	//	Índices de iteração de linha e coluna
	
	scanf("%d", &N);	//	Input
	
	for (i = 1; i <= N; i++)	//	Linha
	{
		for (j = 1; j <= i; j++)	//	Coluna
		{
			C = Combinacao((i - 1), (j - 1));	//	Chamada da função Combinação

			printf("%.0f ", C);	//	Output da  Combinação na linha
		}	
		
		printf("\n");	//	Próxima linha
	}

	return(0);
}
