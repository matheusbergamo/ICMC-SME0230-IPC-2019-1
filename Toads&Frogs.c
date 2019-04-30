#include<stdio.h>

/*******************************************************************************************************/
// Função que escreve o tabuleiro no Terminal
/*******************************************************************************************************/
char EscreverTabuleiro(char Tab[]) { 
	int i;									// Índice
	printf("\n");							// Pulando uma linha
	for(i = 0; i < 10; i++) {				// Percorrendo o vetor 
		printf("%c ", Tab[i]);				// Output no Terminal	
	}
	printf("\n");							// Pulando uma linha
	printf("1 2 3 4 5 6 7 8 9 10 \n \n");	// Output das coordenadas das posições
	return(0);
}

/*******************************************************************************************************/
// Função que avalia se o Player 1 perdeu ou se segue o jogo
/*******************************************************************************************************/
int JogoPlayer1(char Tab[]) {
	int i;
	int teste1 = 0; // Se teste1 permanecer nulo, é porque não há mais jogadas possíveis
	int player; // Output da função

	for (i = 0; i < 8; i++) { // Percorrendo todas as peças do tabuleiro
		if (Tab[i] == 'T') { // Mas considerando apenas os T's
			if (Tab[i+1] == '_')  {	// Se a peça pode avançar uma casa pra frente, então
				teste1++;
			}
			else if (Tab[i+1] == 'F' && Tab[i+2] == '_'){	// Se a peça pode saltar um inimigo, então
				teste1++;	
			}
		}
	}
	
	if (teste1 == 0) { // Se não há mais jogadas disponíveis para o Player 1, então
		printf("Player 2 ganhou! \n");
		player = 0; // Rompe a condição de laço e encerra o jogo
	}
	else { // Se ainda há jogadas disponíveis, então
		printf("Continua o jogo ... \n");
		player = 2; // Passa a rodada para o próximo jogador
	}	

	return(player); // Mudança de jogador
}

/*******************************************************************************************************/
// Função que avalia se o Player 2 perdeu ou se segue o jogo
/*******************************************************************************************************/
int JogoPlayer2(char Tab[]) {
	int i;
	int teste2 = 0;
	int player;

	for (i = 2; i < 10; i++) {
		if (Tab[i] == 'F') {
			if (Tab[i-1] == '_')  {
				teste2++;
			}
			else if (Tab[i-1] == 'T' && Tab[i-2] == '_'){
				teste2++;	
			}
		}
	}
	
	if (teste2 == 0) {
		printf("Player 1 ganhou! \n");
		player = 0; // Rompe a condição de jogo
	}
	else {
		printf("Continua o jogo ... \n");
		player = 1; // Passa a rodada para o próximo jogador
	}	

	return(player);
}

/*******************************************************************************************************/
// Função principal
/*******************************************************************************************************/
int main(void) {

	char Tab[10] = {'T', 'T', 'T', 'T', '_', '_', 'F', 'F', 'F', 'F'};	// Tabuleiro inicial
	int w;	// Variável de trabalho
	char aux; // Variável de troca
	int player; // Escolha do jogador

	EscreverTabuleiro(Tab); // Output do tabuleiro inicial

	player = 1; // O Player que começa
	
	/* Condição de jogo: player = 1 ou player = 2 *******************************************************/
	do {
		/* Código para o Player 1 **********************************************************************/
		while (player == 1){ 
			do { // Condições para selecionar uma peça e posição válida	
				printf("Player 1, escolha uma peça para mover! \n");
				scanf("%d", &w);
			} while ((Tab[(w-1)] != 'T') || ((w-1) < 0) || ((w-1) > 9));
			
			if (Tab[w] == '_') {	//	Se a peça só pode avançar uma casa, então	

				aux = Tab[w-1];		// Troca de caracteres no tabuleiro
				Tab[w-1] = Tab[w];
				Tab[w] = aux;		
					
				EscreverTabuleiro(Tab);		// Tabuleiro depois da jogada do Player 1	
				player = JogoPlayer1(Tab);	// Avalia o jogo pra ver se o Player 2 ganha ou segue o jogo
					
			}
			else if ((Tab[w] == 'F') && (Tab[w+1] == '_')) {	// Se a peça só pode pular um inimigo, então

				aux = Tab[w-1];		// Troca de caracteres no tabuleiro
				Tab[w-1] = Tab[w+1];
				Tab[w+1] = aux;		
					
				EscreverTabuleiro(Tab);		// Tabuleiro depois da jogada do Player 1
				player = JogoPlayer1(Tab);	// Avalia o jogo pra ver se o Player 2 ganha ou segue o jogo
								
			}
			else {
				printf("Esta peça não pode ser movida. \n"); // Se a peça está imóvel
			}	
		}
		
		/* Código para o Player 2 **********************************************************************/
		while (player == 2){
			do {	
				printf("Player 2, escolha uma peça para mover! \n");
				scanf("%d", &w);
			} while ((Tab[(w-1)] != 'F') || ((w-1) < 0) || ((w-1) > 9));
		
			if (Tab[w-2] == '_') {	

				aux = Tab[w-1];
				Tab[w-1] = Tab[w-2];
				Tab[w-2] = aux;		
					
				EscreverTabuleiro(Tab);
				player = JogoPlayer2(Tab);
	
			}
			else if ((Tab[w-2] == 'T') && (Tab[w-3] == '_')) {

				aux = Tab[w-1];
				Tab[w-1] = Tab[w-3];
				Tab[w-3] = aux;		
					
				EscreverTabuleiro(Tab);
				player = JogoPlayer2(Tab);
								
			}
			else {
				printf("Esta peça não pode ser movida. \n");
			}				
		}
	} while ((player == 1) || (player == 2));
			
	return (0);
}
