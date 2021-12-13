#include <stdio.h>

int main() {
  int n, np,i=0;
  double pop, ger, arq, cad, valor_arr;
  scanf("%d",&n);
  while(n--) {i++;
         scanf("%d %lf %lf %lf %lf",&np,&pop,&ger,&arq,&cad);
         valor_arr = (np*pop/100.0)*1.0 + (np*ger/100.0)*5.0 + (np*arq/100.0)*10.0 +(np*cad/100.0)*20.00;
         printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, valor_arr);  
  }
return 0;
}