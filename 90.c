#include <stdio.h>
#define MAX 1000000


int main() {
   int vet[MAX],n,i,aux,j,mi,mp,mp2;
   float numi,dev;
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
    if((n%2)!=0){
        mi=((n/2));
        numi=vet[mi];
        printf("%.2f\n",numi);
    }
    if((n%2)==0){
        mp=((n/2));
        mp2=mp-1;
        dev=((vet[mp]+vet[mp2]));
        numi=dev/2;
        printf("%.2f\n",numi);

    }
   
   
return 0;
}


