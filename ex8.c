#include<stdio.h>
#include<math.h>

int main()
{ float r,a,ac,al,atc,custo,pot;
    scanf("%f %f",&r,&a);
    pot=pow(r,2);
    ac=3.14159*pot;
    al=2*3.14159*r*a;
    atc=((2*ac)+al);
    custo=atc*100;
    printf("O VALOR DO CUSTO E = %0.2f\n", custo);
    return 0;
}
