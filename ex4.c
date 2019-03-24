// Segundo a Wikipédia (https://pt.wikipedia.org/wiki/Produto_de_Wallis), o termo geral do produto de Wallis é dado por 4*i*i/((2*i - 1)*(2*i + 1)), onde i vai de 1 até o infinito. 

#include <stdio.h>	//	Biblioteca de Input e Output

int main(void)	//	Declaração da função principal
{
	int n;	//	Variável de Input
	double i;	//	Declaração de um índice
	double w = 1, pisobre2 = 1;	//	Variáveis de tabalho

	scanf("%d", &n);	//	Input pelo Usuário
  
	if (n%2 == 0)	//	Procedimento caso n for par
	{
		for (i = 1; i <= n/2; i++)
		{
			w = 4*i*i/((2*i - 1)*(2*i + 1));	//	Termo geral do produtório
			pisobre2 = pisobre2*w;	//	Atualização do valor de pisobre2
		}		
	}
	else	//	Procedimento caso n for ímpar
	{
		for (i = 1; i <= n/2; i++)
		{
			w = 4*i*i/((2*i - 1)*(2*i + 1));	//	Termo geral do produtório
			pisobre2 = pisobre2*w;	//	Atualização do valor de pisobre2
		}	
		pisobre2 = pisobre2*(2*i/(2*i- 1));	//	Multiplicando pelo termo faltante
	}
	
	printf("%lf\n", 2*pisobre2);	//	Output pro Terminal

	return(0);  //  Finalização da função principal
}
