#include<stdio.h>
#include<math.h>

 
int main() {
    double vi,tj,ad=0,pot,rend;
    int meses,i;
    scanf("%lf %lf %d",&vi,&tj,&meses);
        for(i=1;i<=meses;i++){
            pot=pow((1+tj),i);
            ad=(vi*pot);
            rend=ad-vi;
        printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n",i,ad,rend);
        }
    
 return 0;
}