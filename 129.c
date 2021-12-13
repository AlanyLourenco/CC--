#include <stdio.h>
#define MAX 1000
int main()
{
    int M[MAX][MAX],n,i,j,linha,coluna,soma=0;
    scanf("%d",&linha);
    scanf("%d",&coluna);
    for (i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if((soma%2)==0){
                M[i][j]=1;
            }
            else{
             M[i][j]=0;   
            }
            soma++;
        }
     if((coluna%2)==0){
            soma++;
        }}
    for (i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d ",M[i][j]);
    }
     printf("\n");}
        return 0;
}