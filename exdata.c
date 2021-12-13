#include <stdio.h>
int main()
{ int dia,mes,ano,ab;
scanf ("%d %d %d",&dia,&mes,&ano);
    if ((ano<1900)||(ano>2036)){
        printf("DATA FORA DO INTERVALO ESTIPULADO\n");}
    if((mes>12)||(dia>31)){
        printf("DATA INVALIDA\n");}
    if (((ano>1900)&&(ano<2036)&&(ano%4==0) && (ano%100!=0))){
    ab=ano;}    
    if ((ano>1900)&&(ano<2036)&&(ano%4==0) && (ano%100==0) && (ano%400==0)) {
    ab=ano;}
    if ((mes==2)&&(dia!=28))
    {printf("DATA INVALIDA\n");}
    if((mes==1)&&(dia>31)||(mes==3)&&(dia>31)||(mes==5)&&(dia>31)||(mes==7)&&(dia>31)||(mes==8)&&(dia>31)||(mes==10)&&(dia>31)||(mes==10)&&(dia>31))
     {printf("DATA INVALIDA\n");}
    if ((mes==4)&&(dia>30)||(mes==6)&&(dia>30)||(mes==9)&&(dia>30)||(mes==11)&&(dia>30))
    {printf("DATA INVALIDA\n");}
    
    else if ((mes==1)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==2)&&(dia<=28)&&(ab!=ano)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==2)&&(dia<=29)&&(ab==ano)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==3)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==4)&&(dia<=30)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==5)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==6)&&(dia<=30)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==7)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==8)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==9)&&(dia<=30)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==10)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==11)&&(dia<=30)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    else if ((mes==12)&&(dia<=31)&&(ano>1900)&&(ano<2036))
    {printf("%d/%d/%d\n",dia,mes,ano);}
    return 0;
}