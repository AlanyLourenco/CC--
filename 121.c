#include <stdio.h>


int E_Triangulo(float a,float b,float c,int num) {
    num=0;
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
    num=1;}
    else{
        num=0;}
    
return num;
}

float perimetro(float a,float b,float c,float peri) {
    peri=a+b+c;
return peri;
}

float area1(float a,float b,float c,float area) {
    area=((a+b)*c)/2;
return area;
}



int main() {
  float a,b,c,peri,area;
  int nume,num;
  scanf ("%f %f %f",&a,&b,&c);
   num=E_Triangulo(a,b,c,num);
   if(num==1)
   {
       peri= perimetro(a,b,c,peri);
       printf("Perimetro = %.1f\n",peri);
   }
   else{
       area= area1(a,b,c,area);
        printf("Area = %.1f\n",area);
   }
 
return 0;
}