#include<stdio.h>

int main()
{   float pf,pd,pi,impostos,dist,custf;
    scanf("%f", &pf);
    scanf("%f", &pd);
    scanf("%f", &pi);
    impostos=(pi*pf)/100;
    dist=(pd*pf)/100;
    custf=impostos+dist+pf;
    printf("O VALOR DO CARRO E = %0.2f\n",custf);

    return 0;
}
