#include<stdio.h>
int main(){
   int a,b,c,d,m,m1;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a==0)||(b==0)||(c==0)||(d==0))
    {printf("Grupo invalido\n");}
    
    if((a>b)&&(a>c)&&(a>d)){
        m=a;}
    else if((b>c)&&(b>d)){
        m=b;}
    else if((c>d)){
        m=c;}   
    else if (d>a){
        m=d;}
    
    if((a<b)&&(a<c)&&(a<d)){
        m1=a;}
    else if((b<c)&&(b<d)){
        m1=b;}
    else if((c<d)){
        m1=c;}   
    else if (d<c){
        m1=d;}
    
    if(m1<15){
        printf("Nivel A, velocidade %d\n",m);}
    else if ((m1>=15)&&(m1<=30)){
        printf("Nivel B, velocidade %d\n",m);}
    else if ((m1>30)&&(a!=0)&&(b!=0)&&(c!=0)&&(d!=0)){
        printf("Nivel C, velocidade %d\n",m);}
    return 0;
}