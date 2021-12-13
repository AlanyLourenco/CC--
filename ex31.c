#include <stdio.h>
int main()
{ int d,dia,m1,m,a,a1,ae;
    scanf("%d",&d);
    dia=d/1000000;
    m1=d-(dia*1000000);
    if (m1<=99999)
    {m=m1/10000;}
    else{
    m=m1/10000;}
    a=m1-(m*10000);
    if ((m==2)&&(dia!=28))
    {printf("Data invalida!\n");}
    if((m==1)&&(dia>31)||(m==3)&&(dia>31)||(m==5)&&(dia>31)||(m==7)&&(dia>31)||(m==8)&&(dia>31)||(m==10)&&(dia>31)||(m==10)&&(dia>31))
     {printf("Data invalida!\n");}
    if ((m==4)&&(dia>30)||(m==6)&&(dia>30)||(m==9)&&(dia>30)||(m==11)&&(dia>30))
    {printf("Data invalida!\n");}
    
    else if ((m==1)&&(dia<=31))
    {printf("%d de janeiro de %d\n",dia,a);}
    else if ((m==2)&&(dia<=28))
    {printf("%d de fevereiro de %d\n",dia,a);}
    else if ((m==3)&&(dia<=31))
    {printf("%d de março de %d\n",dia,a);}
    else if ((m==4)&&(dia<=30))
    {printf("%d de abril de %d\n",dia,a);}
    else if ((m==5)&&(dia<=31))
    {printf("%d de maio de %d\n",dia,a);}
    else if ((m==6)&&(dia<=30))
    {printf("%d de junho de %d\n",dia,a);}
    else if ((m==7&&(dia<=31)))
    {printf("%d de julho de %d\n",dia,a);}
    else if ((m==8)&&(dia<=31))
    {printf("%d de agosto de %d\n",dia,a);}
    else if ((m==9)&&(dia<=30))
    {printf("%d de setembro de %d\n",dia,a);}
    else if ((m==10)&&(dia<=31))
    {printf("%d de outubro de %d\n",dia,a);}
    else if ((m==11)&&(dia<=30))
    {printf("%d de novembro de %d\n",dia,a);}
    else if ((m==12)&&(dia<=31))
    {printf("%d de dezembro de %d\n",dia,a);}
 return 0;
}