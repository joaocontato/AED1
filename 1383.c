#include <stdio.h>

// Verifica se há elemntos repetidos na linha
int verificaLinha(int matriz[9][9], int linha) {
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (matriz[linha][i] == matriz[linha][j] && matriz[linha][i] != 0) {
                return 0; // Linha com número(s) repetido(s)
            }
        }
    }
    return 1; // Linha válida
}

// Verifica se há elemntos repetidos na coluna
int verificaColuna(int matriz[9][9], int coluna) {
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (matriz[i][coluna] == matriz[j][coluna] && matriz[i][coluna] != 0) {
                return 0; // Colunas com número(s) repetido(s)
            }
        }
    }
    return 1; // Coluna válida
}

// Verifica se há elementos repetidos num quadrado 3x3 da matriz
int verificaQuadrado(int matriz[9][9], int startL, int startC) {
    // Limitado a apenas 1 quadrado de 3x3, explicando os primeiros dois for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = i; k < 3; k++) {
                for (int l = j + 1; l < 3; l++) {
                    if (matriz[startL + i][startC + j] == matriz[startL + k][startC + l] && matriz[startL + i][startC + j] != 0) {
                        return 0; // Quadrado com número(s) repetido(s)
                    }
                }
            }
        }
    }
    return 1; // Quadrado válido
}

// Repete as funções para todas as linhas, colunas e quadrados da matriz
int verificaSudoku(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (!verificaLinha(matriz, i)) {
            return 0;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (!verificaColuna(matriz, i)) {
            return 0;
        }
    }

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!verificaQuadrado(matriz, i, j)) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int matriz[n * 9][9];

    // Leitura das matrizes de entrada
    for (int i = 0; i < n * 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Analisa cada instância, passando como parâmetro o ponteiro para a primeira linha de cada matriz adicionada
    for (int m = 0; m < n; m++) {
        if (verificaSudoku(&matriz[m * 9][0])) {
            printf("Instancia %d\nSIM\n\n", m + 1);
        } else {
            printf("Instancia %d\nNAO\n\n", m + 1);
        }
    }

    return 0;
}
