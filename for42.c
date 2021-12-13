#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    scanf("%d", &n);
    for(i = 2; i <= n; i+= 2){
        printf("%d^%d = %d\n",i,2, i * i);}
}