#include <stdio.h>
#define MAX 100000


int main() {
   int vet[MAX], n, m,i,x;
   scanf("%d",&n);
   for(i=0;i<n;i++) 
      scanf("%d",&vet[i]);
   scanf("%d",&m);
   while(m) {m--;
      scanf("%d",&x);
      i=0;
      while((i<n)&&(x!=vet[i]))
        i++;
      if(i==n)
         printf("NAO ACHEI\n");
        else printf("ACHEI\n");
      }

return 0;
}