#include<stdio.h>
 
int main() {
    float valormerc=5,valori=2,valorf=8,i,ingvmer,ing,ant=valormerc;
   
    ant=120;
     
     for(i=valori;i=valorf;i++){
        if (i<valormerc){
             ing=(((valormerc-i)/0.5)*25)+ant;
                ant=ing;
            }
        else if (i>ant) {
             ing=(((i-valormerc)/0.5)*30)-ant;
            ant=ing;
            }
        }

    printf("%0.2f",ing);
 return 0;
}
