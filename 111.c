#include <stdio.h>


int digit_conunt(long int valor, int num, int j) {
     if (valor == 0) num = 1;
   else
  while (valor != 0)
  {
  num = num + 1;
  valor = valor / 10;
  }
  j=num;
  return num;
}

int main() {
  int valor, num,j;
  scanf("%d",&valor);
  num=digit_conunt(valor,num,j);
  printf("%d %d\n",valor, j);
return 0;
}