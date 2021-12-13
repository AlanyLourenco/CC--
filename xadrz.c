#include<stdio.h>
 
int main() {
    int n,cas,tot,g;
    cas=0;
    tot=0;
    g=0;
    scanf("%d",&n);
    while (cas<=32)
    { cas=cas+1;
     tot=tot+g;
    g=n*3;
    }
    tot=((tot+((n*2)*32))-(n*2));
    printf("%d\n",tot);
    
 return 0;
}