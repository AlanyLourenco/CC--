#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//unico array
//mergesorte
//começa no meio
//trecho totalmete desordenado
//iniciando em outras posições que não a 0

//n*logn
void imprime(double vet[], int tam){
    for (int i=0; i<tam;i++){
        printf("%.2lf\n",vet[i]);
    }
}

double junta(double vet01[],double vet02[],int len1, int len2){
    
    double result[len1+len2];
    int atual01=0,atual02=0,atual=0;

    while(atual01<len1 && atual02<len2){
        
        double nota1=vet01[atual01];
        double nota2=vet02[atual02];

        printf("Estou comparando %.2lf com %.2lf\n",nota1,nota2);
        
        if(nota1<nota2){
            //vet01
            result[atual]=nota1;
            atual01++;
        }
        else{
            //vet02
            result[atual]=nota2;
            atual02++;
        }
        atual++;
        
    }
    while (atual01<len1)
    {
        result[atual]=vet01[atual01];
        atual01++;
        atual++;
    }
    while (atual02<len2)
    {
        result[atual]=vet02[atual02];
        atual02++;
        atual++;
    }
    printf("Estou saindo\n");
    imprime(result,len1+len2);
    return result[len1+len2];
}

//linear
//n op
void merge(double vet[],int ini,int meio,int fim,int tam){
    
    double result[fim-ini];
    int atual=0;
    int atual1=ini;
    int atual2=meio;
    //printf("%d",len3);

    while(atual1<meio &&atual2<fim){
        double nota1=vet[atual1];
        double nota2=vet[atual2];
        if(nota1<nota2){
            result[atual]=nota1;
            atual1++;
        }
        else{
            result[atual]=nota2;
            atual2++;
        }
        atual++;

    }
    while (atual1<meio)
    {
        result[atual]=vet[atual1];
        atual1++;
        atual++;
    }
    while (atual2<fim)
    {
        result[atual]=vet[atual2];
        atual2++;
        atual++;
    }
    for(int cont=0;cont<atual;cont++){
        vet[ini+cont]=result[cont];
    }
    printf("Estou saindo\n");
    
    imprime(vet,tam);
    
    }
//log n
void mergesort(double vet[],int inicial,int final){
    int quant = final-inicial;
    if(quant>1){
        int meio = (inicial+final)/2;
        mergesort(vet,inicial,meio);
        mergesort(vet,meio,final);
        merge(vet,inicial,meio,final,final);
    }
 }

int main(){
    //2 vetores ordenados
    double vet01[]={4,5,8.5,9};
    double vet02[]={3,6.7,7,9.3,10};
    double vet03[]={4,1,2.5,7,3,9.4,10,9.3,2};
    int len1 = sizeof(vet01)/sizeof(vet01[0]);
    int len2 = sizeof(vet02)/sizeof(vet02[0]);
    int len3 = sizeof(vet03)/sizeof(vet03[0]);
    
    mergesort(vet03,0,len3);
    
    
    
    /*junta(vet01,vet02,len1,len2);
    intercala(vet03,0,1,2,len3);
    intercala(vet03,2,3,4,len3);
    intercala(vet03,0,2,4,len3);

    intercala(vet03,4,5,6,len3);
    intercala(vet03,6,7,8,len3);
    intercala(vet03,4,6,8,len3);

    intercala(vet03,0,4,8,len3);

    intercala(vet03,0,8,9,len3);
    
    /*for (int i=0; i<len3;i++){
        printf("%.2lf\n",vet03[i]);
    }*/
    
    
    return 0;
}