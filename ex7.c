#include <stdio.h>  //  Biblioteca de Input e Output

int main(void) {  //  Declaração da função principal

  int vetor[9];    // Declaração do vetor de 10 elementos
  int i;  //  Declaração do índice de iteração
  int max, min; //  Declaração das variáveis de trabalho

  /* Laço para o Input de valores nos elementos do vetor. */
  for (i = 0; i <= 9; i++) {  
    scanf("%d", &vetor[i]);
  }

  /* As variáveis de trabalho começam com o valor
  do primeiro elemento do vetor. */
  max = vetor[0];
  min = vetor[0];

  /* Análise dos valores nos elementos do vetor. */
  for (i = 1; i <= 9; i++) {

    /* Se o próximo elemento possui um valor maior 
    que o do máximo o valor do máximo é atualizado. */
    if (max <= vetor[i]) {
      max = vetor[i]; //  Atualização do máximo
    }
    /* Se o próximo elemento possui um valor menor 
    que o do mínimo o valor do mínimo é atualizado. */
    if (min >= vetor[i]) {
      min = vetor[i]; //  Atualização do máximo
    }
  }  

  printf("%d %d\n", min, max);  //  Output

  return (0); //  Finalização da função principal
}
