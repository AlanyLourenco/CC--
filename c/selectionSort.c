#include <stdio.h>
//selectionSort
//n^2

void barat(int vet[],int* barato,int att,int final){
    *barato=att;
    for (int i=att ; i < final; i++){
        if((vet[i]) < vet[*barato]){
            *barato=i;
        }

    }
}

void selectionsort(int vet[], int* barato,int final){
for( int att=0; att<final; att++){
    
        
        barat(vet,barato,att,final);
        if(att<final-1){
    printf("Estou na casinha %d\n",att);
        printf("Trocando %d=%d com o %d=%d\n",att,vet[att],*barato,vet[*barato]);}
        int atual=vet[att];
        int menor=vet[*barato];
        //printf("Trocando %d=%d com o %d=%d\n",att,vet[att],*barato,vet[*barato]);
        vet[att]=menor;
        vet[*barato]=atual;
        
    }
}

void imprime(int vet[]){
    
    printf("0= %d\n",vet[0]);
    printf("1= %d\n",vet[1]);
    printf("2= %d\n",vet[2]);
    printf("3= %d\n",vet[3]);
    printf("4= %d\n",vet[4]);
    printf("5= %d\n",vet[5]);
    printf("6= %d\n",vet[6]);
    printf("7= %d\n",vet[7]);
    
}

void selectionSort(int vet[],int final){
    for( int att=0; att<final; att++){
    
    printf("Estou na casinha %d\n",att);
    printf("Antes\n");
    imprime(vet);

    printf("\n");
    int analise=att;
     while(analise>0 && vet[analise]<vet[analise-1]){
        printf("\n");
        printf("Estou trocando %d=%d com %d=%d\n",analise,vet[analise],analise-1,vet[analise-1]);
        printf("\n");
        int atual=vet[analise];
        int esquerda=vet[analise-1];
        vet[analise]=esquerda;
        vet[analise-1]=atual;
        printf("Depois\n");
        imprime(vet);
        analise--;
        }   
    }
}

int main(){
    int vet[8] = {5,90,3,1,70,30,20,101};
    int barato=0; 
    int final=8;
    
    selectionSort(vet,final);

    return 0;
}
