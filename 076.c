#include <stdio.h>
#define Max 1000

void ler_vetor(int vet[],int n) {
  int i;
  for(i=0;i<n;i++) 
     scanf("%d",&vet[i]);
  }
  
void busca_valor(int vet[], int n, int valor) {
   int i;
   i = 0;
   while((i<n)&&(valor!=vet[i]))
     i++;
   	
   if(i==n)
     printf("NAO ACHEI\n");
	else printf("ACHEI\n");

}

int main() {
  int n, qtd, x, i, vetor[Max];
  scanf("%d",&n);
  ler_vetor(vetor,n);  //vetor = &vetor[0]
  scanf("%d",&qtd);
  for(i=0;i<qtd;i++) {
	 scanf("%d",&x);
     busca_valor
(vetor,n,x);  
 }

return 0;
}