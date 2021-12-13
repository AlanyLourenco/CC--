#include <stdio.h>
#define MAX 5000


int main() {
   int vet[MAX],n,i;

   scanf("%d ",&n);
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
   for (i=0;i<n;i++) {
       
       printf("%d ",vet[i])
       ;
   }
return 0;
}