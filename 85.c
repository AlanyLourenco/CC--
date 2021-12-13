#include <stdio.h>
#include <math.h>

int main() {
  int n, i=0;
  float ponto,v1[3],v2[3],va[1000];
  n = 1;
  while((n<2)||(n>1000))
      scanf("%d",&n);
  scanf("%f %f %f",&v1[0],&v1[1],&v1[2]);
  n--;
  while(n--) {
    scanf("%f %f %f",&v2[0],&v2[1],&v2[2]);
    ponto = sqrt(pow((v1[0]-v2[0]),2) + pow((v1[1]-v2[1]),2) + pow((v1[2]-v2[2]),2));
    printf("%.2f\n",ponto);
    v1[0] = v2[0];
    v1[1] = v2[1];
    v1[2] = v2[2];
  }
return 0;
}