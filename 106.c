#include <stdio.h>

double le_numero
(int n,float x,float cont,float media, int i) {
    scanf("%d",&n);
    cont=0;
    for(i=0;i<n;i++){
        scanf("%f",&x);
        cont=cont+x;
    }
    media=cont/n;
    return media;
}

int main ()
{   float media,x,cont;
    int n,i;
    media=le_numero(n,x,cont,media,i);
    printf("%0.2f\n", media);
    return 0;
}