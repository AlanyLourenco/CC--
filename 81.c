#include <stdio.h>
#define Max 10000

void ler_vetor(int vet[],int n) {
  int i;
  for(i=0;i<n;i++) 
     scanf("%d",&vet[i]);
  }
  
void busca_maior(int vet[], int n) {
   int i, maior, indice;
   maior=-99999;
   for(i=0;i<n;i++)
     if(maior<vet[i]) {
        indice =i;
        maior = vet[i];
      }
   printf("%d %d\n",indice, maior);

}

int main() {
  int n, vetor[Max];
  scanf("%d",&n);
  while(n!=0) {
  ler_vetor(vetor,n);  
  busca_maior(vetor,n); 
  scanf("%d",&n);  
  } 
return 0;
}