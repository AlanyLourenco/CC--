#include<stdio.h>
#include<math.h>

int main()
{ int n1,n2,n3,n4,aux,tresd,quatrod;
    scanf("%d",&tresd);
    n3=tresd%10;
    aux=tresd/10;
    n2=aux%10;
    aux=aux/10;
    n1=aux%10;
    aux=n1+(n2*3)+(n3*5);
    n4=aux%7;
    quatrod=tresd*10+n4;
    printf("O NOVO NUMERO E = %d\n",quatrod);
    return 0;
}