#include <stdio.h>


void  converteEmNotasMoedas(int d,int *n1,int *n3,int *n5,int *n7,int AUX) {
    if (d>=100){
        *n1=d/100;
        AUX=d%100;}
    if (AUX>=50){
       *n3=AUX/50;
       AUX=AUX%50; }
    if  (AUX>=10){
        *n5=AUX/10;
        AUX=AUX%10;}
    if (AUX>=1){
        *n7=AUX/1;}
}

int main() {
  int d,n1,n3,n5,n7,AUX;
  scanf ("%d",&d);
   converteEmNotasMoedas(d,&n1,&n3,&n5,&n7,AUX);
    printf("NOTAS DE 100 = %d\n",n1);
    printf("NOTAS DE 50 = %d\n",n3);
    printf("NOTAS DE 10 = %d\n",n5);
    printf("MOEDAS DE 1 = %d\n",n7);
   
 
return 0;
}