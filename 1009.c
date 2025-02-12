#include <stdio.h>

int main(){
	char nome[32];
	double salario, vendas, total;
	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	printf("TOTAL = R$ %.2lf\n", (0.15*vendas + salario));
    return 0;
}
