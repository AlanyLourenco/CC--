#include <stdio.h>
#define MAX 1000
int main(){
int n,i,m,vet[MAX],cont1=0,cont=0,x;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++){
     scanf("%d",&vet[i]);
 }
 for(i=0;i<n;i++){
     if(vet[i]<=0){
     cont=cont+1;}
     if (vet[i]>0){
         cont1=cont1+1;
     }
 }
 
    if(cont>=m){
        printf("NAO\n");
    for(i=n-1;i>=0;i--){
     if(vet[i]<=0){
     printf("%d\n",i+1);}}}
    
    else {
        printf("SIM\n");
    }

   
           
return 0;
}
 