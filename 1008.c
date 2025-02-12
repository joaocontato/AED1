#include <stdio.h>

int main(){
	int n, h;
	float valor, salario;
	scanf("%d", &n);
	scanf("%d", &h);
	scanf("%f", &valor);
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2f\n", (h * valor));
}
