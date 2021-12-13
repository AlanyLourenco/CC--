#include<stdio.h>
#include<math.h>
int main()
{ int n,y;
    scanf("%d",&n);
    if (n<1)
    {y=n;}
    if(n==1){
    y=0;}
    if (n>1)
    {y=pow(n,2);}
    printf("Y = %d\n",y);    
return 0;
}