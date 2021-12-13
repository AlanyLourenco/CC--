#include<stdio.h>
 
int main() {
    int n,i=1,n1,n2,n3,aux1,aux,aux2,num,numero,numero2,num2,n11,n22,n33,aux11,auxx,aux22;
    scanf("%d",&n);
    while (i<=n)
    {i++;
    scanf("%d %d",&numero,&numero2);
    aux=(numero%10);
    n1=((aux*100));
    aux1=((numero%100));
    n2=((aux1-aux));
    aux2=(numero%100);
    n3=((numero-aux2)/100);
    num=n1+n2+n3;
    

    auxx=(numero2%10);
    n11=((auxx*100));
    aux11=((numero2%100));
    n22=((aux11-auxx));
    aux22=(numero2%100);
    n33=((numero2-aux22)/100);
    num2=n11+n22+n33;
    

    if (num>num2)
    {printf("%d\n",num);}
    else
    {printf("%d\n",num2);}
    
    }
    
 return 0;
}