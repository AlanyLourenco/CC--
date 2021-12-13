#include <stdio.h>

int main() {
  int nc, n,i,j,dif, vetor[1000], menor;
  scanf("%d",&nc);
  while(nc--) {
	menor = 9999;
	scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&vetor[i]);
    for(i=0;i<n-1;i++) 
      for(j=i+1;j<n;j++){
        dif = vetor[i]-vetor[j];
        if (dif<0)
          dif = -dif;
        if(menor>dif) 
           menor = dif; 
     }
     printf("%d %d\n",menor,n*n);
  }
return 0;
}