#include<stdio.h>
 
int main() {
    int cont=0,n,i,j;
    scanf("%d",&n);
    if (n<2){
    printf("Campeonato invalido!\n");}
    else{
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                cont++;
                printf("Final %d: Time%d X Time%d\n",cont,i,j);
            }
        }
    }


 return 0;
}