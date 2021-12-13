#include<stdio.h>
int main(){
    int n,m,c,d,u,ax,m1,c2,d2;
    scanf("%d",&n);
    if ((n>0)&&(n<=9999)){
        m=n/1000;
        m1=m*1000;
        ax=n-(m1);
        c=ax/100;
        c2=c*100;
        ax=ax-(c2);
        d=ax/10;
        d2=d*10;
        ax=ax-(d2);
        u=ax*1;}
     else{
        printf("Numero invalido!\n");}
    if ((m>0)&& (c>0)&&(d>0)&&(u>0)){
     printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n",n,m,c,d,u,m1,c2,d2,u);}
        else if ((m>0)&&(d>0)&&(u>0)&&(c<=0)){
        printf("(quarta ordem) %d = %d unidade de milhar + %d + dezenas + %d unidades = %d + %d + %d\n",n,m,d,u,m1,d2,u);}
        else if ((m>0)&& (c>0)&&(u>0)&&(d<=0)){
        printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d unidades = %d + %d + %d\n",n,m,d,u,m1,c2,u);}               
    else if ((m<=0)&&(c!=0)&&(d!=0)&&(u!=0)&&(d>0)&&(c>0)&&(u>0)){
     printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n",n,c,d,u,c2,d2,u);}
    else if((m<=0)&&(d<=0)&&(c!=0)&&(u!=0)){
        printf("(terceira ordem) %d = %d centenas + %d unidades = %d + %d\n",n,c,u,c2,u);}
    else if ((m<=0)&&(u<=0)&&(c>0)&&(d>0)){
        printf("(terceira ordem) %d = %d centenas + %d dezenas = %d + %d\n",n,c,d,c2,d2);}
    else if ((m<=0)&&(c<=0)&&(d>0)&&(u>0)){
     printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n",n,d,u,d2,u);}
     else if ((m=0)&&(c=0)&&(d=0)&&(u>0)){
     printf("(primeira ordem) %d = %d unidades = %d\n",n,u,u);}
    return 0;
}
