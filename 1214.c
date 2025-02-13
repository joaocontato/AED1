#include <stdio.h>

int main() {
    int c, n;
    scanf("%d", &c);
    
    while (c--) {
        scanf("%d", &n);
        int notas[n], soma = 0, count = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &notas[i]);
            soma += notas[i];
        }
        double media = (double)soma / n;
        
        for (int i = 0; i < n; i++) {
            if (notas[i] > media) {
                count++;
            }
        }
        printf("%.3lf%%\n", (count * 100.0) / n);
    }
    return 0;
}
