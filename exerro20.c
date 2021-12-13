#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int cl;
    float valor,ca;
    char tipoc[1];

    scanf("%d %f %s",&cl, &ca, tipoc);
    if (strcmp(tipoc,"R")==0){
    valor=5.00+(0.05*ca);
    printf("CONTA = %d\n",cl);
    printf("VALOR DA CONTA = %.2f\n",valor);
    }
    if (strcmp(tipoc,"C")==0 && ca<=80){
    valor=500.00;
    printf("CONTA = %d\n",cl);
    printf("VALOR DA CONTA = %.2f\n",valor);
    }
    else if (strcmp(tipoc,"C")==0 && ca>80){
    valor=500.00+((ca-80)*0.25);
    printf("CONTA = %d\n",cl);
    printf("VALOR DA CONTA = %.2f\n",valor);
    }
    if (strcmp(tipoc,"I")==0 && ca<=100){
    valor=800.00;
    printf("CONTA = %d\n",cl);
    printf("VALOR DA CONTA = %.2f",valor);
    }
    else if (strcmp(tipoc,"I")==0 && ca>100){
    valor = 800.00+((ca-100)*0.04);
    printf("CONTA = %d\n",cl);
    printf("VALOR DA CONTA = %.2f\n",valor);
    return 0;
    }
}