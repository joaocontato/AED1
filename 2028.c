#include <stdio.h>

int main() {
    int N, caso = 1;
    while (scanf("%d", &N) == 1) { // Substitui EOF por "== 1" para verificar entrada válida
        int total_numeros = 1;
        for (int i = 1; i <= N; i++) {
            total_numeros += i;
        }
        
        printf("Caso %d: %d ", caso++, total_numeros);
        if (total_numeros == 1) {
            printf("numero\n");
        } else {
            printf("numeros\n");
        }
        
        printf("0");
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                printf(" %d", i);
            }
        }
        printf("\n\n");
    }
    return 0;
}
