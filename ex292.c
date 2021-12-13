#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e,e2,m,m2,x;
    scanf("%f %f %f",&a, &b, &c);
    x=(pow(b,2))-(4*a*c);
    d=sqrt(x);
    e=((-b+d)/(2*a));
    e2=((-b-d)/(2*a));
    if (d<0){
       printf("RAIZES IMAGINARIAS\n");}
    if(d>0){
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %0.2f\n",m2);
        printf("X2 = %0.2f\n",m);}
    if (d==0)
        {printf("RAIZ UNICA\n");
        printf("X1 = %0.2f\n",m);}
    return 0;
}