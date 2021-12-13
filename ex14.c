#include<stdio.h>
#include<math.h>

int main(){
    float n,n1,n2,n3,n4,n5,n6;
    scanf("%f",&n);
    n1=(n*10);
    n2=(round(n1))/10;
    n3=(n*100);
    n4=(round(n3)/100);
    n5=(n*1000);
    n6=(round(n5)/1000);
    printf("%f\n", n2);
    printf("%f\n",n4);
    printf("%f\n", n6);
    return 0;
}