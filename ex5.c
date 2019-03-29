#include<stdio.h>

int main(void)
{
	int n;	//	Escolha
	float pri = 0;	//	Conta Principal
	float inv = 0;	//	Conta Investimento
	float w;	//	Variável de trabalho	
	
	scanf("%d", &n);	//	Escolha da função no Menu Principal

	while (n != 0)	//	Para manter o Menu Principal sempre ativo
	{
		switch (n)	//	Encaminha o Usuário para a função escolhida
		{
			case 1:	//	Depositar
			
				scanf("%f", &w);	//	Input pelo Usuário
			
				if (w <= 0)	//	O valor não pode ser negativo
				{
					printf("Valor Invalido\n");	//	Erro
					printf("%.2f %.2f\n", pri, inv);	//	Output
										
					scanf("%d", &n);	//	Escolha da função	
					
					inv = 1.1*inv;	//	Atualização do Investimento		
					break;
				}
				else	//	Procedimento do depósito
				{			
					pri = pri + w;	//	Atualização do valor na Conta Principal
					
					printf("%.2f %.2f\n", pri, inv);	//	Output
					scanf("%d", &n);	//	Escolha da função
					inv = 1.1*inv;	//	Atualização do Investimento
					break;
				}
			
			case 2:	//	Sacar
			
				scanf("%f", &w);	//	Input pelo Usuário
			
				if (w <= 0 || w > pri)	//	O valor não pode ser negativo ou nulo, 
				{						//	nem maior do que o valor na Conta Principal
					printf("Valor Invalido\n");	//	Erro
					printf("%.2f %.2f\n", pri, inv);	//	Output
										
					scanf("%d", &n);	//	Escolha da função	
					
					inv = 1.1*inv;	//	Atualização do Investimento		
					break;
				}
				else	//	Procedimento do Saque
				{			
					pri = pri - w;	//	Atualização do valor na Conta Principal
					
					printf("%.2f %.2f\n", pri, inv);	//	Output
					scanf("%d", &n);	//	Escolha do Função
					inv = 1.1*inv;	//	Atualização do Investimento
					break;
				}
				
				case 3:	//	Investir
			
				scanf("%f", &w);	//	Input pelo Usuário
			
				if (w <= 0 || w > pri)	//	O valor não pode ser negativo ou nulo, 
				{						//	nem maior do que o valor na Conta Principal
					printf("Valor Invalido\n");	//	Erro
					printf("%.2f %.2f\n", pri, inv);	//	Output
										
					scanf("%d", &n);	//	Escolha da função	
					
					inv = 1.1*inv;	//	Atualização do Investimento		
					break;
				}
				else	//	Procedimento do Investimento
				{			
					pri = pri - w;	//	Atualização do valor na Conta Principal
					inv = inv + w;	//	Atualização do valor na Conta Investimento
					
					printf("%.2f %.2f\n", pri, inv);	//	Output
					scanf("%d", &n);	//	Escolha do Função
					inv = 1.1*inv;	//	Atualização do Investimento
					break;
				}
								
				case 4:	//	Resgatar
			
				scanf("%f", &w);	//	Input pelo Usuário
			
				if (w <= 0 || w > inv)	//	O valor não pode ser negativo, 
				{						//	nem maior do que o valor na Conta Investimento
					printf("Valor Invalido\n");	//	Erro
					printf("%.2f %.2f\n", pri, inv);	//	Output
										
					scanf("%d", &n);	//	Escolha da função	
					
					inv = 1.1*inv;	//	Atualização do Investimento		
					break;
				}
				else	//	Procedimento do Resgate
				{			
					inv = inv - w;	//	Atualização do valor na Conta Investimento				
					pri = pri + w;	//	Atualização do valor na Conta Principal
					
					printf("%.2f %.2f\n", pri, inv);	//	Output
					scanf("%d", &n);	//	Escolha do Função
					inv = 1.1*inv;	//	Atualização do Investimento
					break;
				}
				
				case 5:	//	Fechar Sistema
				
				n = 0; // Condição para fechar o Menu Principal
				
				printf("%.2f %.2f\n", pri, inv);	//	Output
				printf("Fim\n");
				break;				 
								
				default:	//	Procedimento padrão de erro
			
				printf("Valor Invalido\n");	//	Erro
				scanf("%d", &n);	//	Escolha da função	
				inv = 1.1*inv;	//	Atualização do Investimento		
		}
	}	
	
	return(0);
}
