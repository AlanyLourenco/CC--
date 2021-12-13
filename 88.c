#include <stdio.h>
#define MAX 1000


int main() {
   int vet[MAX],n,i,j,aux;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&vet[i]);
   }
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if (vet[i]> vet[j]){
               aux=vet[i];
               vet[i]=vet[j];
               vet[j]=aux;
           }
       }
   }
   for(i=0;i<n;i++){
       printf("%d\n",vet[i]);
   }
return 0;
}