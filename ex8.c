#include <stdio.h>  //  Biblioteca de Input e Output

int main(void) {  //  Declaração da função principal

  int v[9];    // Declaração do vetor de 10 elementos
  int i, j;  //  Declaração dos índices de iteração
  int w; //  Declaração da variável de trabalho 

  /* Laço para o Input de valores nos elementos do vetor. */
  for (i = 0; i <= 9; i++) {  
    scanf("%d", &v[i]);
  }

  for (j = 0; i < 9; j++){  //  Percorrendo o vetor

    for (i = j + 1; i < 9; i++) { //  Sempre um elemento à frente

      if (v[i] > v[i + 1]) {  //  Troca de valores par à par

        w = v[i]; //  Atribuição do valor de v[i] à w
        v[i] = v[i + 1];  //  Atribuição do valor v[i + 1] à v[i] 
        v[i + 1] = w; //  Atribuição do valor de w à v[i + 1]
      }
    }  
  }  

  /* Laço para o Output de valores nos elementos do vetor. */
  for (i = 0; i < 9; i++) {  
    printf("%d ", v[i]);
  }

  printf("\n"); //  Pular linha no Output

  return (0); //  Finalização da função principal
}
