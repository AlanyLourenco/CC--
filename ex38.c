#include<stdio.h>
int main(){
    float a,b,c,ma,na,mb,nb,mc,nc,p,ar;
    scanf("%f %f %f",&a,&b,&c);
    ma=b-c;
    na=b+c;
    mb=a-b;
    nb=a+c;
    mc=a-b;
    nc=a+b;
    p=a+b+c;
    ar=((a+b)*c)/2;
    if (ma<0){
        ma=ma*(-1);}
    if (mb<0){
        mb=mb*(-1);}   
    if (mc<0){
        mc=mc*(-1);} 
    if((ma<a)&&(a<na)&&(mb<b)&&(b<nb)&&(mc<c)&&(c<nc)){
        printf("Perimetro = %0.1f\n",p);}
    else {
    printf("Area = %0.1f\n",ar);}
    return 0;
}