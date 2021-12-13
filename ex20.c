#include <stdio.h>

int main() {
   int cod;
   float cons,v;
   char tipo;
   scanf("%d %f %c",&cod,&cons,&tipo);
   if ((tipo=='R')||(tipo=='r'))
   {v=5+0.05*cons;
   printf("CONTA = %d\n",cod);
   printf("VALOR DA CONTA = %0.2f\n",v);}
   else if ((tipo=='C')||(tipo=='c'))
        {v=500;
        if (cons>80)
        {v=v+0.25*(cons-80);}
        printf("CONTA = %d\n",cod);
        printf("VALOR DA CONTA = %0.2f\n",v);}
        else if ((tipo=='I')||(tipo=='i'))
        {v=800;
        if (cons>100)
        {v=v+0.04*(cons-100);}
        printf("CONTA = %d\n",cod);
        printf("VALOR DA CONTA = %0.2f\n",v);}
return 0;
}