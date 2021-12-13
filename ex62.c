#include<stdio.h>
 
int main() {
    int n,h,c1,c2,i,j,qh,qc1,qc2;
    scanf("%d",&n);
    if(n<5){
    printf("NAO EXISTE HIPOTENUSA\n");}
    else{
    for(h=5;h<=n;h++){
        qh=h*h;
        for(c1=1;c1<(h-1);c1++){
            qc1=c1*c1;
            for(c2=(c1+1);c2<h;c2++){
                qc2=c2*c2;
                if(qh==(qc1+qc2)){
                    printf("hipotenusa = %d, catetos %d e %d\n",h,c1,c2);
                }
            }
        }
    }}
 return 0;
}