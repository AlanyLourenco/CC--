#include <stdio.h>


void separaDigito(int n, int *p, int *s, int *t) {
   *t = n%10;
   *s = (n/10)%10;
   *p = n/100;
}

int main() {
  int n, p, s, t;
  scanf("%d",&n);
  separaDigito(n,&p,&s,&t);
  printf("%d%d%d\n",t,s,p);
return 0;
}