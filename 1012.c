#include <stdio.h>
 
int main() {
    double a; double b; double c;
    double resultado;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    resultado = a*c/2;
    printf("TRIANGULO: %.3lf\n", resultado);
    
    resultado = 3.14159*c*c;
    printf("CIRCULO: %.3lf\n", resultado);
    
    resultado = (a+b)*c/2;
    printf("TRAPEZIO: %.3lf\n", resultado);
    
    resultado = b*b;
    printf("QUADRADO: %.3lf\n", resultado);

    resultado = a*b;
    printf("RETANGULO: %.3lf\n", resultado);
    return 0;
}
