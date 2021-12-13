#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    int n,p,num=1;
    scanf("%d",&n);
    for (p=1;p<=n;p++)
    {num=(num*p);}
    printf("%d! = %d\n",n,num);
    return 0;

}