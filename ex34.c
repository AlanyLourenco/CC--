#include <stdio.h>

int main() {
  int num,reverso,dm,m,c,d,u;
  scanf("%d",&num);
  if(num>99999)
     printf("NUMERO INVALIDO\n");
    else { if(num>9999) {
              u = num%10;
              dm = num/10000;
              m = (num - dm*10000)/1000;
              c = (num - dm*10000 - m*1000)/100;
              d = (num - dm*10000 - m*1000 - c*100)/10;
             reverso = u*10000 + d*1000 + c*100 + m*10 + dm;
             if(num==reverso)
                printf("PALINDROMO\n");
               else printf("NAO PALINDROMO\n");
    
    }else if(num>999) {
              u = num%10;
              m =  num/1000;
              c = (num - m*1000)/100;
              d = (num - m*1000 - c*100)/10;
             reverso = u*1000 + d*100 + c*10 + m;
             if(num==reverso)
                printf("PALINDROMO\n");
               else printf("NAO PALINDROMO\n");
    }else if(num>99) {
             u = num%10;
             c = num/100;
             d = (num - c*100)/10;
             reverso = u*100 + d*10 + c;
             if(num==reverso)
                printf("PALINDROMO\n");
               else printf("NAO PALINDROMO\n");
    }else if(num>9) {
               u = num%10;
               d = num/10;
               reverso = u*10 + d;
             if(num==reverso)
                printf("PALINDROMO\n");
               else printf("NAO PALINDROMO\n");
            }
    }

  return 0;

}