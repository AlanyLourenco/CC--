#include <stdio.h>
int main()
{ int cc,dr,rt,v;
    scanf("%d",&cc);
    scanf("%d",&dr);
    scanf("%d",&rt);
    if ((cc<7)&&(dr>50)&&(rt>80000))
    {v=10;}
    else if ((cc<7)&&(dr>50)&&(rt<=80000))
    {v=9;}
    else if ((cc<7)&&(dr<=50)&&(rt<=80000))
    {v=8;}
    else if ((cc>=7)&&(dr<=50)&&(rt<=80000))
    {v=7;}
    printf("ACO DE GRAU = %d \n",v);
 return 0;
}