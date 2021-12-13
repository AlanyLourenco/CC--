#include <stdio.h>
#define MAX 1000


int main() {
   int vet[MAX],n,W[MAX],i,m=-99999,menor=9999;
    
   scanf("%d ",&n);
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
    
   for (i=0;i<n;i++) {
       if(i<(n-1)){
       printf("%d ",vet[i]);}
       else{
           printf("%d\n",vet[i]);}
           
        if(vet[i]>m)
        m=vet[i];}

   for (i=0;i<n;i++) {
        W[i]=vet[(n-(i+1))];
       } 

   for (i=0;i<n;i++) {
       if(i<(n-1)){
            printf("%d ",W[i]);}
            else{
           printf("%d\n",W[i]);}
        if(W[i]<menor){
            menor=W[i];
        }}
     
     
    printf("%d\n",m);
    printf("%d\n",menor);
return 0;
}
