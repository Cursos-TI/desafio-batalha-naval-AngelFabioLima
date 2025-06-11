#include <stdio.h>

#define TAM 5 // Tamanho fixo das matrizes de habilidade

// Função para exibir uma matriz TAMxTAM
void exibirMatriz(int matriz[TAM][TAM], const char* nome) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matrizes_habilidades
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // Preencher_Habilidade: CONE
   
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i + j >= TAM - 1 && j - i <= 0 && i >= TAM / 2) {
                cone[i][j] = 1;
            }
        }
    }

    // Forma tradicional de cone invertido (centro inferior)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i >= TAM / 2 && j >= TAM / 2 - i && j <= TAM / 2 + i) {
                cone[i][j] = 1;
            }
        }
    }

    // Preencher_Habilidade: CRUZ
    
    for (int i = 0; i < TAM; i++) {
        cruz[i][TAM / 2] = 1; // Coluna do meio
        cruz[TAM / 2][i] = 1; // Linha do meio
    }

    // Preencher_habilidade: OCTAEDRO
 
    int centro = TAM / 2;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Exibir matrizes
    
    exibirMatriz(cone, "Cone");
    exibirMatriz(cruz, "Cruz");
    exibirMatriz(octaedro, "Octaedro");

    return 0;
}
