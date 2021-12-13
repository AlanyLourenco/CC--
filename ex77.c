#include <stdio.h>
#define MAX 1000


int main() {
   int vet[MAX], n, m,i,x,cont=0;
   scanf("%d",&n);
   while ((n>1000)||(n<1)){
    scanf("%d",&n);
    }
   for(i=0;i<n;i++) {
      scanf("%d",&vet[i]);}
    scanf("%d",&x);
    i=0;
    while (n){
        n--;
        if(vet[i]>=x){
            cont=cont+1;
        }
        i++; }
    printf("%d\n",cont);

return 0;
}