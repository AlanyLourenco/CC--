#include <stdio.h>
#define MAX 10000


int main() {
   int vet[MAX],ve[MAX],n,i,j,m=0,cont=0;
    scanf("%d",&n);
   while(n!=0){
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<n;i++){
            if(vet[i]>m){
            m= vet[i];}}
         
         for(i=0;i<m;i++){
             ve[i]=0;}
        
          for(i=0;i<n;i++){
             ve[vet[i]]++;}
         
        
    cont=0;
    j=0;
    while((j<=m)){
       if(ve[j]!=0)
          cont +=ve[j];
       printf("(%d) %d\n",j,cont);
      j++;
 }
    scanf("%d",&n);
   }
return 0;
}