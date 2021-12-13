#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,x,y,p=0;
    scanf("%d %d",&x,&y);
    if ((x%2!=0)){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");}
    else{
    while (p<y)
    {p++;
    printf("%d ",x);
     x=x+2;}
    printf("\n");}
    return 0;
}
