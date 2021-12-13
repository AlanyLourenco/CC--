#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a,b,c,m2,m1,m;
    char  a1[4];
    scanf("%d %d %d",&a,&b,&c);
    scanf("%s",a1);
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
    if (strcmp(a1,"ABC")==0){
        printf("%d %d %d\n",m2,m1,m);}
    else if (strcmp(a1,"ACB")==0){
        printf("%d %d %d\n",m2,m,m1);}
    else if (strcmp(a1,"BAC")==0){
        printf("%d %d %d\n",m1,m2,m);} 
    else if (strcmp(a1,"BCA")==0){
        printf("%d %d %d\n",m1,m,m2);} 
    else if (strcmp(a1,"CAB")==0){
        printf("%d %d %d\n",m,m2,m1);}
    else if (strcmp(a1,"CBA")==0){
        printf("%d %d %d\n",m,m1,m2);}
        return 0;
}