#include <stdio.h>
#define MAX 5000


int main() {
   int vet[MAX],n,i,cont=0;

   scanf("%d ",&n);
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
   for (i=0;i<n;i++) {
       
       printf("%d ",vet[(n-(i+1))])
       ;
   }
return 0;
}