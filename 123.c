#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int bin[8]; // <---------------
   int aux;

   printf("Digite o número (base decimal) para ser convertido: ");
   scanf("%d", &num);

   for (aux = 7; aux >= 0; aux--)
   {
      if (num % 2 == 0)
         bin[aux] = 0;
      else
         bin[aux] = 1;
      num = num / 2;
   }

   for (aux = 0; aux < 8; aux++)
       printf("%d", bin[aux]);

   printf("\n");

   return 0;
}