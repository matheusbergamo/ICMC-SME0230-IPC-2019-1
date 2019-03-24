#include <stdio.h>  // Biblioteca de Input e Output

int main(void)  // Declaração da função principal
{
	double a, b, res; // Declaração de variáveis reais com o dobro de precisão 
	char op;  // Declaração de uma variável de caractere

	scanf("%lf %c %lf", &a, &op, &b); //  Input de valores às variáveis 

	switch (op) // Análise do valor inserido na variável op
	{
		case '+': //  Procedimento a ser tomado caso ocorra este caso específico
			res = a + b;
			printf("%lf\n", res); // Output no Terminal
			break;  // Interrompe a função switch
		
		case '-': 
			res = a - b;
			printf("%lf\n", res);
			break;
			
		case 'X': 
			res = a*b;
			printf("%lf\n", res);
			break;

		case '/': 
			res = a/b;
			printf("%lf\n", res);
			break;
					
		default:  // Procedimento padrão caso nenhum dos casos específicos ocorra
			printf("Operacao invalida\n"); 	
	}

	return(0);  //  Finalização da função principal
}
