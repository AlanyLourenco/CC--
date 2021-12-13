#include<stdio.h>
int main(){
    float a,b,c,m,m1,m2;
    int i;
    scanf("%d",&i);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if ((a>b)&&(b>c)){
        m=a;
        m1=b;
        m2=c;}
    else if ((a>c)&&(c>b)){
        m=a;
        m1=c;
        m2=b;}
    else if ((b>a)&&(a>c)){
        m=b;
        m1=a;
        m2=c;}
    else if ((b>c)&&(c>a)){
        m=b;
        m1=c;
        m2=a;}  
    else if ((c>a)&&(a>b)){
        m=c;
        m1=a;
        m2=b;} 
    else if ((c>b)&&(b>a)){
        m=c;
        m1=b;
        m2=a;} 
    else if ((c==b)&&(b==a)){
        m=c;
        m1=b;
        m2=a;} 
    if (i==1){
     printf("%0.2f %0.2f %0.2f\n",m2,m1,m);}
    else if (i==2){printf("%0.2f %0.2f %0.2f\n",m,m1,m2);}
    else if (i==3){printf("%0.2f %0.2f %0.2f\n",m1,m,m2);}
    return 0;
}