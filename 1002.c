#include <stdio.h>
 
int main() {
  double r = 0;
  double A = 0;
  scanf("%lf", &r);
  //realiza a conta da area do circulo
  A = r*r*3.14159;
  printf("A=%.4lf\n", A);
  return 0;
}
