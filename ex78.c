#include <stdio.h>
#define MAX 1000


int main() {
   int vet[MAX], n=1,num, m,i,x,cont=0;
   scanf("%d",&m);
   while ((n<m)&&(m>1)){
    scanf("%d\n",&num);
    if(num%2==0){
        printf("%d",num);
        cont=cont+1;
    }n++;}
    printf("%d\n",cont);

return 0;
}