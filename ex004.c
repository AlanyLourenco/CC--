#include <stdio.h>

int main()
{ int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if ((a==0)||(c==0)||(b==0)){
      printf("triangulo invalido");}
    else if ((a==b)&&(b==c)&&(a==c)){
        printf("equilatero\n");}
    else if ((a!=b)&&(b!=c)){
        printf("escaleno\n");}
    else if ((a==b)&&(b!=c)){
        printf("isoceles\n");}
    else if ((a==c)&&(b!=c)){
        printf("isoceles\n");}
    else if ((b==c)&&(a!=c)){
        printf("isoceles\n");}
  return 0;
}