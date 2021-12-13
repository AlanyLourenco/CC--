#include <stdio.h>

int fib(int t1, int t2, int n) {
    if(n==1)
      return t1;
      else if(n==2)
              return t2;
             else return(fib(t1, t2,n-1) + fib(t1,t2,n-2));
       }
int main() {
   int t1, t2, n;
   scanf("%d %d %d",&t1, &t2, &n);
   printf("%d\n",fib(t1,t2,n));

return 0;
}