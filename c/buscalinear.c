#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//encontrar notas piores que x
//encontrar notas melhores que x
//pivô sendo o ultimo

int encontrmenor(double nota,double vet[],int tam){
    int menores=0;
    for(int at=0;at<tam;at++){
        if(vet[at]<nota){
            menores++;
        }
    }
    return menores;
}

void troca(double vet[],int de,int para){
    double nota1=vet[de];
    double nota2=vet[para];
    vet[para]=nota1;
    vet[de]=nota2;
}

int particiona(double vet[],int ini,int fim){
    double pivo=vet[fim-1];
    int menores=0;
    for(int analis= 0;analis<fim-1;analis++){
        if(vet[analis]<=pivo){
            troca(vet,analis,menores);
            menores++;
        }
    }
    troca(vet,fim-1,menores);
    return menores;
}

void ordena(double vet[],int de,int ate){
    int elementos=ate-de;
    if(elementos>1){
        int posicaopivo=particiona(vet,de,ate);
        ordena(vet,de,posicaopivo);
        ordena(vet,posicaopivo+1,ate);
    }
}

int busca(double vet[],int ini,int fim,double num){
    for(int i=ini; i < fim; i++){
        //printf("%d",i);
        if(vet[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    //2 vetores ordenados
    double vet01[]={4,5,8.5,9};
    double vet02[]={3,6.7,7,9.3,10};
    double vet03[]={4,1,2.5,3,9.4,10,9.3,2,7};
    int len1 = sizeof(vet01)/sizeof(vet01[0]);
    int len2 = sizeof(vet02)/sizeof(vet02[0]);
    int len3 = sizeof(vet03)/sizeof(vet03[0]);
    
    //quebranopivo
    ordena(vet03,0,len3);
    int att=busca(vet03,0,len3,9.3);
    
    printf("Encontrei a nota em %d\n",att+1);
    
    for (int i=0; i<len3;i++){
        printf("%.2lf\n",vet03[i]);
    }
    
    return 0;
}