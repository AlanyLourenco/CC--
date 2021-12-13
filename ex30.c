#include <stdio.h>

int main() {
    int a1, a2, a3, a4, soma, m=-10000;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    scanf("%d",&a4);
    if(m<a1) 
      m = a1;
    if(m<a2)
      m=a2;
    if(m<a3)
      m=a3; 
    if(m<a4)
      m=a4;
    soma = a1 + a2 + a3 + a4 - m;
    printf("%d\n",soma);
    
return 0;
}