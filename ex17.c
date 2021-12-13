#include <stdio.h>
#include <math.h>

int main() {
    int n,n1;
    scanf("%d",&n);
    if ((n!=0)&&(n%100!=0)&&(n%10!=10)){
    do {
            n1=n%10;
            printf("%d",n1);
            n/=10;
      }while (n!=0);
      printf("\n");
    }
    /*{n1=n%10;
    n0= n/10;
    n2=n0%10;
    n3=n0/10;}*/ 
 return 0;   
}

