#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[4][4]= {
        {0,0,3,0},
        {0,0,3,0},
        {0,0,0,0},
        {3,3,3,0}
    };
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Navio na Vertical:\n%d\n%d\n", tabuleiro[0][2], tabuleiro[1][2]);
    printf("Navio na Horizontal:\n%d %d %d\n", tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][3]);


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tabuleiroGrande[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {3,0,3,0,0,0,0,3,0,0},
        {0,3,0,3,0,0,0,3,0,0},
        {0,0,3,0,3,0,0,3,0,0},
        {0,0,0,3,0,3,0,3,0,0},
        {0,0,0,0,3,0,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {3,3,3,3,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    for(int i=0;i<10 ;i++){
        for(int j=0; j<10; j++){
            printf("%d",tabuleiroGrande[i][j]);
        };
        printf("\n");
    };


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
