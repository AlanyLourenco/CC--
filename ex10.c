#include<stdio.h>
#include<math.h>

int main()
{ float x1,y1,x2,y2,d,r1,r2;
    scanf ("%f %f %f %f",&x1, &y1, &x2 ,&y2);
    r1=pow((x2-x1),2);
    r2=pow((y2-y1),2);
    d= sqrt(r1+r2);
    printf("A DISTANCIA ENTRE A e B = %0.2f\n",d);
    return 0;
}