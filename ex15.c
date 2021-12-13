#include<stdio.h>

int main(){
    int d,n1,n2,n3,n4,n5,n6,n7;
    scanf("%d",&d);
    if (d>=100){
        n1=d/100;
        n2=d%100;}
    if (n2>=50){
       n3=n2/50;
       n4=n2%50; }
    if  (n4>=10){
        n5=n4/10;
        n6=n4%10;}
    if (n6>=1){
        n7=n6/1;}
    printf("NOTAS DE 100 = %d\n",n1);
    printf("NOTAS DE 50 = %d\n",n3);
    printf("NOTAS DE 10 = %d\n",n5);
    printf("MOEDAS DE 1 = %d\n",n7);
     return 0;
}