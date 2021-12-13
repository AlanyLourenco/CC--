#include<stdio.h>
 
int main() {
 int num, i, resultado = 0;
 scanf("%d", &num);
 if (num<0)
 {printf("Numero invalido!\n");
 }
 else{
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("PRIMO\n");
 else
    printf("NAO PRIMO\n");
 }
 return 0;
}