#include <stdio.h>

void Percorre(int v, int adj[][100], int visitados[], int n) {
    visitados[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (adj[v][i] == 1 && !visitados[i]) {
            Percorre(i, adj, visitados, n);
        }
    }
}

int main() {
    int n, l;
    scanf("%d %d", &n, &l);

    int adj[100][100] = {0};  
    int visitados[100] = {0};   

    for (int i = 0; i < l; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        adj[X][Y] = 1;
        adj[Y][X] = 1;
    }

    Percorre(1, adj, visitados, n);

    int completo = 1;
    for (int i = 1; i <= n; i++) {
        if (!visitados[i]) {
            completo = 0;
            break;
        }
    }

    if (completo) {
        printf("COMPLETO\n");
    } else {
        printf("INCOMPLETO\n");
    }

    return 0;
}
