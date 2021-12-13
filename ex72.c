#include <stdio.h>
#include <math.h>

float fat(int n) {
  float f = 1.0;
  int i;
  if(n<=1)
    return 1;
   else {for(i=n; i>0; i--)
           f = (float)(f*i);
         return f;
        }
}


int main() {
  int N, i;
  float x,f, X = 0.0;
  scanf("%f %d",&x,&N);
  if((x<0)||(x>2*M_PI))
    printf("angulo errado\n");
   else
    { for(i = 0; i<=N;i++)
        X = X + (pow(-1.0,i)*pow(x,(2.0*i)))/fat(2*i);
      printf("cos(%.2f) = %.6f\n",x,X);
   }    
return 0;
}