#include <stdio.h>

int main(){
	int n, horas, minutos, segundos;
	scanf("%d", &N);
	
	horas = n / 3600;
	n -= horas * 3600;
	
	minutos = n / 60;
	n -= minutos * 60;
	
	segundos = n;
	printf("%d:%d:%d\n", horas, minutos, segundos);
}
