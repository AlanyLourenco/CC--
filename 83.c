#include <stdio.h>
#define MAX 10000


int main() {
   int vet[MAX],ve[MAX],n,i,j,m=0,cont=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);}
         for(i=0;i<n;i++){
             if(vet[i]>m){
                 m=vet[i];
             }
         }
        
    for(j=0;j<=m;j++){
        ve[j]=j;}
        for (j=0;j<=m;j++){
            cont=0;
            for(i=0;i<n;i++){
                if (vet[i]<=ve[j]){
                cont=cont+1;
                printf ("(%d) %d\n",ve[j],cont);
                }}}
               
        
    
return 0;
}