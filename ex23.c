#include<stdio.h>
int main()
{  float n;
    char a;
    scanf("%f",&n);
    if (n>=9.0){
    a='A'; }
    if (n<9 && n>=7.5)
    {a='B';}
    if (n<7.5 && n>=6)
    {a='C';}
    if (n<6)
    {a='D';}
    printf("NOTA = %0.1f CONCEITO = %c\n",n,a);
}