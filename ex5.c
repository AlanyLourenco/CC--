#include <stdio.h>
#include <math.h>
 
int main()
{  float alturap, arestex, area, raiz, volume, pot;   
    scanf("%f %f",&alturap,&arestex);
    pot=pow(arestex,2);
    raiz=sqrt(3);
    area=((3*pot*raiz)/2);
    volume=((area*alturap)/3);
    printf("O VOLUME DA PIRAMIDE E = %0.2f METROS CUBICOS\n",volume);
    return 0;
}
