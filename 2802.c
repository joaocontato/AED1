#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long resultado;
    if (n == 1) {
        resultado = 1;
    } else if (n == 2) {
        resultado = 2;
    } else if (n == 3) {
        resultado = 4;
    } else if (n == 4) {
        resultado = 8;
    } else {
        long long C2 = (long long)n * (n - 1) / 2;
        long long C4 = (long long)n * (n - 1) * (n - 2) * (n - 3) / 24;
        resultado = 1 + C2 + C4;
    }
    printf("%lld\n", resultado);
    return 0;
}
