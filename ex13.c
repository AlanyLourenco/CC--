#include<stdio.h>
#include<math.h>

int main(){
    float n1,n2,n3,t,a;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    t=(n1+n2+n3)/2;
    a=sqrt((t*(t-n1)*(t-n2)*(t-n3)));
    printf("A AREA DO TRIANGULO E = %0.2f\n",a);
    return 0;

}