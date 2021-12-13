#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main() {
 int mat;
 float horas,valoph,s;
 
 while ((mat!=0)&&(horas!=0)&&(valoph!=0)){
 scanf("%d %f %f",&mat,&horas,&valoph);
  s = horas*valoph;
    printf("%d %.2f\n",mat,s);}
return 0;
}