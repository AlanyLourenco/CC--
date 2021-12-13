#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,a,n;
    double f,c,c1;
    scanf("%d",&n);
    c = ((5 * (f-32))/9);
    for(i=0;i<n;i++){
        scanf("%lf",&f);
        printf("%0.2lf FAHRENHEIT EQUIVALE A %0.2lf\n",f,c);}
    return 0;
    }