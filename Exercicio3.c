/*
Exercício 3: Escreva um programa em C, que utilizando a estrutura switch-case, 
dados dois números (do tipo double) e uma operação aritmética,
imprima o resultado dessa operação.
*/

#include <stdio.h>    /* Biblioteca de Entrada/Saída*/

int main()    /* Declaração da função principal */
{
  double a, b, res;    /* Declaração de variáveis reais com o dobro de precisão */
  char op;    /* Declaração de uma variável de caractere */

  puts("Escreva uma operacao:");    /* Pedido de Entrada para o Usuário */
  scanf("%lf %s %lf", &a, &op, &b);   /* Entrada pelo Terminal */   /* O "&" serve para alocar o valor de Entrada na Variável */    /* %lf = longfloat  */

  switch (op)   /* Análise da Entrada na variável de caractere */
  {
    case '+':   /* Procedimento a ser tomado caso o valor da variável satisfaça esta condição */
      res = a + b;
      printf("%.lf\n", res);    /* Saída no Terminal */
      break;    /* Para a função switch */
    default:    /* Procedimento padrão a ser tomado */
      printf("Operacao invalida\n");
  }

  return(0);    /* Finalização da função principal */  
}
