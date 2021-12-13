#include <stdio.h>
#define MAX 5000
int main(){
int n,i,m[MAX],vet[MAX],cont=0,x,dif=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<n;i++){
        cont=0;
        for(x=1;x<n;x++){
            if(vet[i]==vet[x]){
            cont++;
            }
        }
    if(cont==0){
        printf("%d",vet[i]);
            dif++;}    }
        
   
    printf("%d\n",dif);
           
return 0;
}