#include<stdio.h>
#include<math.h>
 
int main() {
    int n,i=1;
    float p,s1=0,p2;
    scanf("%d",&n);
    if (n>3){
        while (i<=n)
        {  p=((pow(i,2)));
            p2=n/p;
            s1=s1+p2;}}
        printf("%f\n",s1+n);
 return 0;
}