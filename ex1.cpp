#include <stdio.h>

#define MAX 10  // ♥ Define o tamanho máximo da matriz

// ♥ Função para imprimir uma matriz
void imprimirMatriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// ♥ Função para somar duas matrizes
void somarMatrizes(int matriz1[][MAX], int matriz2[][MAX], int resultado[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// ♥ Função para subtrair duas matrizes
void subtrairMatrizes(int matriz1[][MAX], int matriz2[][MAX], int resultado[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

int main() {
    int n;

    // ♥ Leitura do tamanho das matrizes
    do {
        printf("Digite o tamanho das matrizes [1-%d]: ", MAX);
        scanf("%d", &n);

        if (n <= 0 || n > MAX) {
            printf("Tamanho invalido. Por favor, insira um valor entre 1 e %d.\n", MAX);
        }
    } while (n <= 0 || n > MAX);

    // ♥ Declaração das matrizes
    int matriz1[MAX][MAX], matriz2[MAX][MAX];
    int soma[MAX][MAX], subtracao[MAX][MAX];

    // ♥ Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // ♥ Leitura da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // ♥ Soma das matrizes
    somarMatrizes(matriz1, matriz2, soma, n);

    // ♥ Subtração das matrizes
    subtrairMatrizes(matriz1, matriz2, subtracao, n);

    // ♥ Imprimir a matriz soma
    printf("\nMatriz soma:\n");
    imprimirMatriz(soma, n);

    // ♥ Imprimir a matriz subtração
    printf("\nMatriz subtracao:\n");
    imprimirMatriz(subtracao, n);

}
