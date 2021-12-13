#include <stdio.h>
#define MAX 1000


int main() {
   int vet[MAX],n,i,cont=0;

   scanf("%d",&n);
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
   for (i=0;i<n;i++){
       if ((vet[i]%2)==0){
       printf("%d ",vet[i]);
       cont=cont+1;}
   }
    printf("%d\n",cont);
return 0;
}