#include <stdio.h>
int main(){
    int n,r[9],i;
    scanf("%d",&n);
    if (n<0||n>256){
    printf("Numero invalido!");}
    for (i=8;i>0;i--) {
        r[i]=n%2;
        n=n/2;}
    for(i=8;i>0;i--){
    printf("%d",r[i]);
    printf("%d\n"),r[i];}
    return 0;
}