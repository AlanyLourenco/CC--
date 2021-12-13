#include <stdio.h>
#define MAX 200
int main(int argc, char* argv[])
{
int n,i=0,num,cont=1,vet[MAX];
while(scanf("%d",&n) &&n){
for(i=1;i<=n;i++){
scanf("%d",&num);
vet[i]=num;}
for (i=1;i<=n;i++){

if(i==vet[i]){
printf("Teste %d\n",cont++);
printf("%d\n",vet[i]);
printf("\n");
}
}

}
return 0;
}