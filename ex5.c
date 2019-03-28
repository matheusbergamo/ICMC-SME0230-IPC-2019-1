#include <stdio.h>  //  Biblioteca de Input e Output

int main(void) // Declaração da função principal
{
  int n;  // Declaração de uma variável inteira
  float princ = 0; 
  float invest = 0; // Declaração de variáveis inteiras
  float w; // Variável de trabalho

  scanf("%d", &n);  //  Leitura do Input pelo Terminal

  do 
  {
    switch (n)
    {
      case 1: //  Depositar
      {
        scanf("%f", &w);

        if (w > 0)
        {
          princ = princ + w;
        }
        else
        {
          printf("Valor Invalido\n");
        }
        break;
      }

      case 2: //  Sacar
      {
        scanf("%f", &w);

        if (w > 0)
        {
          princ = princ - w;
        }
        else
        {
          printf("Valor Invalido\n");
        }
        break;
      }

      default:  //  Fechar
      printf("Fim\n");

    }
  }
  while (n >= 1 || n <= 3)

  return (0); //  Finalização da função principal
}
