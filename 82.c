#include <stdio.h>
#define MAX 10000



int main() {
   int vet[MAX],n,i,sm=0;

   scanf("%d ",&n);
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
   for (i=0;i<n;i++) {
       sm=sm+vet[i];
   }
   printf("%d\n",sm);
return 0;
}