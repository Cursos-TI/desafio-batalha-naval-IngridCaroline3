

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    #include <stdio.h>

#define TAMANHO 10 // Definição do tamanho do tabuleiro
#define TAM_NAVIO 3 // Definição do tamanho dos navios

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; 

    // Coordenadas para os navios
    int navioHorizontalLinha = 2, navioHorizontalColuna = 4; // Início do navio horizontal
    int navioVerticalLinha = 6, navioVerticalColuna = 7;     // Início do navio vertical

    // posicionamento do navio horizontal 
    if (navioHorizontalColuna + TAM_NAVIO <= TAMANHO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + i] = 3; // Marca o navio na matriz
        }
    } else {
        printf("Erro: O navio horizontal está fora dos limites do tabuleiro!\n");
        return 1;
    }

    //posicionamento do navio vertical 
    if (navioVerticalLinha + TAM_NAVIO <= TAMANHO) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3; // Marca o navio na matriz
        }
    } else {
        printf("Erro: O navio vertical está fora dos limites do tabuleiro!\n");
        return 1;
    }

    // Exibição do tabuleiro 
    printf("Tabuleiro do Batalha Naval:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada posição da matriz
        }
        printf("\n"); // Nova linha do tabuleiro
    }

    return 0;
}
