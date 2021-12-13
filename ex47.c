#include <stdio.h>

int main() {
  int A, B, anos=0;
  
  scanf("%d %d",&A,&B);
  
  while(B>=A) {
     A = A*1.03;
     B = B*1.015;
     anos++;
  
  }
   printf("ANOS = %d\n",anos);
return 0;
}