#include<stdio.h>

int main(){
    float a,b,c,m;
    scanf ("%f %f %f",&a,&b,&c);
    m=(a+b+c)/3;
    printf("MEDIA = %0.2f\n",m);
    if (m>=6){
        printf("APROVADO\n");}
    else
    printf("REPROVADO\n");
   return 0;
}