#include <stdio.h>
int main() {
  float valormerc,valori,valorf,i,ing2,ing,ant,l,maior,mv;
  scanf("%f",&valormerc);
  scanf("%f", &valori);
  scanf("%f", &valorf);
   ant=120;
   maior=-9999999;
  if (valori<valorf){
    
  for (i = valori; i<=valorf; i++) {
    if ((i<valormerc)&&(i!=valormerc)){
        ing2=(((25*(valormerc-i))/0.5)+120);;
        ant=ing2;
        l=((ing2*i)-(200+(ing2*0.05)));
        if (l>maior)
                {mv=i;
                maior=l;
                ing=ing2;}
        printf("V: %0.2f, N:%.0f , L: %0.2f\n",i,ing2,l);
       
        
            }
        
        else if(i==valormerc){
            ing2=120;
            ant=ing2;
            l=((ing2*i)-(200+(ing2*0.05)));
            if (l>maior)
                {mv=i;
                maior=l;
                ing=ing2;}
            printf("V: %0.2f, N:%.0f , L: %0.2f\n",i,ing2,l);
            
               
        }
        
        else if ((i>valormerc)&&(i!=valormerc)) {
             ing2=(((-30*(i-valormerc))/0.5)+120);
            ant=ing2;
            l=((ing2*i)-(200+(ing2*0.05)));
            if (l>maior)
                {mv=i;
                maior=l;
                ing=ing2;}
            printf("V: %0.2f, N:%.0f , L: %0.2f\n",i,ing2,l);
            
            
            }
        }
      if (maior>0) { 
       printf("Melhor valor final: %.2f\n",mv);
       printf("Lucro: %.2f\n",maior);
       printf("Numero de ingressos: %.0f\n",ing); }
       else if (maior<0){
        printf("Melhor valor final: 0.00\n");
       printf("Lucro: 0.00\n");
       printf("Numero de ingressos: 0\n"); 
       }}
       else if (valori>valorf){
           printf("INTERVALO INVALIDO.\n");
       }


 return 0;
}
