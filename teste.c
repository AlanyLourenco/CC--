#include <stdio.h>
 
   int digit_conunt(long int n, int contaDigitos)
  {
  contaDigitos = 0;
  scanf("%ld", &n);
  if (n == 0) contaDigitos = 1;
  else
  while (n != 0)
  {
  contaDigitos = contaDigitos + 1;
  n = n / 10;
  }
  return contaDigitos;
  }
  int main() {
  int n, contaDigitos;
  contaDigitos=digit_conunt(n,contaDigitos);
  printf("Numero de digitos: %d\n",contaDigitos);
return 0;
}