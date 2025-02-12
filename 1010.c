#include <stdio.h>

int main(){
	int prod1, quant1, prod2, quant2;
	float valor1, valor2;
	scanf("%d %d %f", &prod1, &prod1, &valor1);
	scanf("%d %d %f", &prod2, &quant2, &valor2);
	printf("VALOR A PAGAR: R$ %.2f\n", ((prod1 * valor1) + (quant2 * valor2)));
    return 0;
}
