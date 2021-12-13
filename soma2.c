#include<stdio.h>
#include<math.h>
 
int main() {
    int n,i=1;
    float p;
    double s1=0,p2;
    scanf("%d",&n);
    if (n<=3){
        printf("Numero invalido!\n");
    }
    else{
    while(i<=n)
        {  p=((pow(i,2)));
            p2=n/p;
            s1=s1+p2;
            i++;}
        printf("%.5lf\n",s1);}
 return 0;
}