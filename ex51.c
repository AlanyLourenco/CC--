#include <stdio.h>
int main() {
  int n,i,atual,anterior,cont, maior=1;
  scanf("%d",&n);
  scanf("%d", &anterior);
  cont = 1; 
  

  for (i = 1; i <n; i++) {
    scanf("%d", &atual); 
         
    if (atual == anterior){  
      cont = cont + 1;
      anterior=atual;
      if(maior < cont)
         maior = cont;
    } else {cont =1;
		    anterior=atual;
		  }
  }
  printf("O comprimento do segmento de numeros iguais e: %d\n", maior);

  return 0;
}