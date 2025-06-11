#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Posicionamento dos Navios

    // Declaração da matriz do tabuleiro 5x5
    // int tabuleiro[5][5] = {0};
    int tabuleiro[10][10] = {0};

    // Posicionando navio vertical (valor 1)
        for (int linha = 0; linha < 3; linha++) {
        tabuleiro[linha][1] = 1;
    }

    // Posicionando navio horizontal (valor 1)
      //  for (int coluna = 2; coluna < 5; coluna++) {
     //   tabuleiro[4][coluna] = 2;
    //}
         for (int coluna = 5; coluna < 8; coluna++) {
        tabuleiro[6][coluna] = 2;
    }

    // Coordenada do navio vertical
    //printf("Coordenadas do Navio Vertical (valor 1):\n");
    //for (int linha = 0; linha < 3; linha++) {
      //  printf("(%d, %d)\n", linha, 1);
   // }

    for (int coluna = 5; coluna < 8; coluna++) {
        tabuleiro[6][coluna] = 2;
    }

    // Exibindo coordenadas do navio horizontal
   // printf("\nCoordenadas do Navio Horizontal (valor 2):\n");
   // for (int coluna = 2; coluna < 5; coluna++) {
     //   printf("(%d, %d)\n", 4, coluna);
   // }
   // Coordenadas dos navios valor 3
      for (int i = 0; i < 3; i++) {
        tabuleiro[0 + i][0 + i] = 3; 

    // Coordenadas dos navios (valor 4)
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 + i][9 - i] = 4;

     // Coordenadas dos navios valor 1
    printf("Coordenadas do Navio Vertical (valor 1):\n");
    for (int linha = 1; linha < 4; linha++) {
        printf("(%d, %d)\n", linha, 2);
    }
   // valor 2
    printf("\nCoordenadas do Navio Horizontal (valor 2):\n");
    for (int coluna = 5; coluna < 8; coluna++) {
        printf("(%d, %d)\n", 6, coluna);
    }
// valor 3
    printf("\nCoordenadas do Navio Diagonal Principal ↘ (valor 3):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", i, i);
    }
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
