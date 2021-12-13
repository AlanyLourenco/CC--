#include <stdio.h>

int main() {
  int n,i1=0,i=0; 
float mediai,mediap,s=0,s1=0;
n=1;
  while ((n!=0)) {
       scanf("%d", &n);
      if ((n%2==0)&&(n!=0)){
      i=i+1;
      s=s+n;}
    else if (n%2!=0){
      i1=i1+1;
      s1=s1+n;}}
    mediai=s1/i1;
    mediap=s/i;


  printf("MEDIA PAR: %f\n", mediap);
  printf("MEDIA IMPAR: %f\n",mediai);

  return 0;
}
