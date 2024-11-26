#include <stdio.h>
#include <string.h>

// Função Inserção, insere e organiza o vetor de nomes lista em ordem alfabética
void Insercao(int n, char lista[][21]) {
    int i, j;
    char x[21];

    for (j = 1; j < n; j++) {
        strcpy(x, lista[j]); // Salva o nome de analisado por lista[j]
        i = j - 1;

        while (i >= 0 && strcmp(lista[i], x) > 0) { // Compara o nome de indice anterior com o nome salvo, ocorre enquanto nome de lista[i] está depois alfabetciamente do nome de x
            strcpy(lista[i + 1], lista[i]); // Atribui ao indice seguinte a i(sendo que i = j-1), ao indice i
            i--;
        }

        strcpy(lista[i + 1], x); // Atribui ao indice seguinte a i o valor salvo, caso o nome do índice i for antes em ordem alfabética
    }
}

int main() {
    int N, K;
    char lista[100][21];
    scanf("%d %d", &N, &K); // Recebe os valores de N e K

    // Pega todos os nomes desordenados
    for (int i = 0; i < N; i++) {
        scanf("%s", lista[i]);
    }

    Insercao(N, lista);
    printf("%s\n", lista[K - 1]); // Printa o nome do aluno que recebe o bônus

    return 0;
}
