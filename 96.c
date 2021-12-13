#include <stdio.h>

float absul(float valor) {
   if(valor<0)
     return -valor;
    else return valor;
}

int main() {
  int n, i;
  float vet1[3], vet2[3], veta[3];
  scanf("%d",&n);
  
  for(i=0;i<3;i++){
    scanf("%f",&vet1[i]);
   }
    n--;
  while(n--) {
  for(i=0;i<3;i++)
    scanf("%f",&vet2[i]);
  for(i=0;i<3;i++)
    veta[i] = vet2[i] - vet1[i];
  if((absul(veta[0])>absul(veta[1]))&&(absul(veta[0])>absul(veta[2])))
     printf("%.2f\n",absul(veta[0]));
    else if(absul(veta[1])>absul(veta[2]))
            printf("%.2f\n",absul(veta[1]));
           else printf("%.2f\n",absul(veta[2]));
   for(i=0;i<3;i++)
     vet1[i] = vet2[i];
  }
           
return 0;
}