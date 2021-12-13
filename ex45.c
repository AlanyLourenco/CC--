#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    int n;
    float num,p=1,s,s1=0;
    scanf("%d",&n);
    if (n>3){
    for (p=1;p<=n;p++)
    {num=(n/(pow(p,2)));
    s1=s1+num;}
    printf("%f\n",s1+n);}
    else if (n<=3)
    {printf("Numero invalido!\n");}
    return 0;

}