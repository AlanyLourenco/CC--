#include <stdio.h>
#include <stdlib.h>
 
 void verifica(int vet1[],int vet2[],int num){
    int i;
    int maior=vet2[0];
    for(i=1;i<num;i++){
        if(vet1[i]<vet1[i-1]||vet1[i]!=vet1[i-1]+1){
            return;
        }  
    }
    
        
    
 }

int main() {
    int num,i=0,j=0;
    scanf("%d",&num);
    while(num!=0){
    
    int vet1[num];
    int vet2[num];

    for(i=0;i<num;i++){
        scanf("%d %d",&vet1[i],&vet2[i]);  
    }

    scanf("%d",&num);
    }
   

   
    return 0;
}