#include <stdio.h>

int main() {
  int n, elem, aux, seq, maior=0;
  scanf("%d",&n);
  scanf("%d",&elem);
  seq = 1;
  maior = 1;
  n--;
  while(n--) {
      aux = elem;
      scanf("%d",&elem);
      if(aux < elem)
        seq++;
       else seq =1;
      if(seq>maior)
         maior = seq;
 
  }
  printf("O comprimento do segmento crescente maximo e: %d\n",maior);

return 0;
}