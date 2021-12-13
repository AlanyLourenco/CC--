#include <stdio.h>

int main() {
int vet[15], i, n, j, soma1, soma2, cont, resto1,resto2;
scanf("%d", &n);
for(i = 0; i<n; i++) {
	for(j=0; j<11;j++)
	   scanf("%d",&vet[j]);
	soma1= 0;
	for(j=0; j<11;j++) 
		soma1 += vet[j];
	if((soma1%11)==0)
	   printf("CPF valido\n");
	  else { soma1 = 0;
		     for(j=0; j<9;j++)
		       soma1 = soma1 + vet[j]*(j+1);
	         soma2 = 0; cont = 1;
	         for(j=8;j>=0;j--)
	            soma2 = soma2 + vet[j]*cont++;
	         resto1 = soma1%11;
	         if(resto1 ==10)
	            resto1 = 0;
	         resto2 = soma2%11;
	         if(resto2 ==10)
	            resto2 = 0;
	         if((resto1 == vet[9])&&(resto2==vet[10]))
	             printf("CPF valido\n");
	           else  printf("CPF invalido\n");
	 }
	  	
}

return 0;
}