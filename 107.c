#include <stdio.h>
#define max 200
int indice
(int vet[],int ind, int i,int j,int n) {  
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(vet[i]==vet[j]){
                ind=vet[i];
            }}}
    
    return ind;
}

int main ()
{   int test,ind,vet[max],n,i,j,num;
    scanf("%d",&n);
    test=0;
    while (n!=0){
        test++;
        for(i=0;i<n;i++){
            scanf("%d",&vet[i]);}
        for(j=0;j<n;j++){
            vet[j]=num;
            num++;}  
    ind= indice(vet[max],ind,i,j,n); 
    printf("Teste %d\n",test);
    printf("%d\n",ind);
    printf("\n");       
     scanf("%d",&n);
    }
    
    return 0;
}