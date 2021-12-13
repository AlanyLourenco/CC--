#include<stdio.h>
void main()
{   int horas;
   float valor1, valor2, restante, total;

   scanf("%d",&horas);

   valor1=(horas/3)*10;
   restante=(horas%3);
   valor2=restante*5;
   total=valor1+valor2;

   printf("O VALOR A PAGAR E = %.2f\n",total);

}