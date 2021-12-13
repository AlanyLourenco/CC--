#include<stdio.h>

 
int main() {
    int mat;
    float h,vh,s=0;
     scanf("%d %f %f",&mat,&h,&vh);
     getchar();
    while((mat!=0)&&(h!=0)&&(vh!=0)){
        s=h*vh;
        printf("%d %.2f\n",mat,s);
        scanf("%d %f %f",&mat,&h,&vh);
        getchar();
        
    }
 return 0;
}