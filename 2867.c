#include <stdio.h>
#include <math.h>

int main() {
    int c, n, m;
    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        scanf("%d %d", &n, &m);
        int digitos = (int)(m * log10(n)) + 1;
        printf("%d\n", digitos);
    }
    return 0;
}
