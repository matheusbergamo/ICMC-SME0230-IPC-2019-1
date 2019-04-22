#include <stdio.h>

void Tabuleiro();

int main(void) {

  char pecas[9] = {'S', 'S', 'S', 'S', '_', 'R', 'R', 'R', 'R'}; // Tabuleiro

  Tabuleiro(pecas);

return 0;
}

/* Função que mostra no terminal a posição atual das peças no tabuleiro*/
void Tabuleiro(char pecas[]) {
  
  int i;

  for (i = 0; i < 9; i++) {

    printf("%c ", pecas[i]);

  }
  printf("\n");

}
