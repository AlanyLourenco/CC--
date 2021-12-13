#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    float n,i=0,o,k,s,incremento,inc2,inc3,inc4;
    scanf("%f",&n);
    scanf("%f",&o);
    scanf("%f",&k);
    scanf("%f",&s);
    k--;
    incremento=o;
    inc2=o;
    inc3=o;
    inc4=o;
     if (n>=0 && n<=9) {
         printf("Tabuada de soma:\n");
        printf("%.2f + %.2f = %.2f\n",n,o,n+o);
        for (i=0;i<k;i++) {
           
        incremento = incremento+s;
        printf("%.2f + %.2f = %.2f\n",n,incremento,n+incremento) ;}}
    if (n>=0 && n<=9) {
         printf("Tabuada de subtracao:\n");
        printf("%.2f - %.2f = %.2f\n",n,o,n-o);
        for (i=0;i<k;i++) {
         
        inc2 = inc2+s;
        printf("%.2f - %.2f = %.2f\n",n,inc2,n-inc2) ;}}
    if (n>=0 && n<=9) {
         printf("Tabuada de multiplicacao:\n");
        printf("%.2f x %.2f = %.2f\n",n,o,n*o);
        for (i=0;i<k;i++) {
        
        inc3 = inc3+s;
        printf("%.2f x %.2f = %.2f\n",n,inc3,n*inc3) ;}}
    if (n>=0 && n<=9) {
         printf("Tabuada de divisao:\n");
        printf("%.2f / %.2f = %.2f\n",n,o,n/o);
       for (i=0;i<k;i++) {
       
        inc4 = inc4+s;
        printf("%.2f / %.2f = %.2f\n",n,inc4,n/inc4) ;}}        
    
   return 0;
} 