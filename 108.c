#include <stdio.h>

unsigned long int fat(unsigned long int n) {
   if(n==1)
      return 1;
     else return(n*fat(n-1));
}

int main() {
  unsigned long int n;
  unsigned long int res;
  scanf("%lu",&n);
  res = fat(n);
  printf("%lu! = %lu\n",n,res);

return 0;

}