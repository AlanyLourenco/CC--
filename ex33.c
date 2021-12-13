#include <stdio.h>
int main()
{ int mat,dep;
    float salm,sal,taxa,ib,il,id;
    scanf ( "%d %f %d %f %f",&mat,&salm,&dep,&sal,&taxa);
    if (sal>(salm*12)){
        ib=sal*0.2;}
            else if (sal>(salm*5)){
            ib=sal*0.08;}
                else if (sal<=(salm*5)){
                ib=0;}  
    il=ib-(300*dep);
    id=il-((taxa/100)*sal);

    if (id<0){
    printf("MATRICULA = %d\n",mat); 
    printf("IMPOSTO BRUTO = %0.2f\n",ib);
    printf("IMPOSTO LIQUIDO = %0.2f\n",il);
    printf("RESULTADO = %0.2f\n",id);
    printf("IMPOSTO A RECEBER\n");}
    else if(id=0){printf("MATRICULA = %d\n",mat); 
    printf("IMPOSTO BRUTO = %0.2f\n",ib);
    printf("IMPOSTO LIQUIDO = %0.2f\n",il);
    printf("RESULTADO = %0.2f\n",id);
    printf("IMPOSTO QUITADO\n");}
    else{printf("MATRICULA = %d\n",mat); 
    printf("IMPOSTO BRUTO = %0.2f\n",ib);
    printf("IMPOSTO LIQUIDO = %0.2f\n",il);
    printf("RESULTADO = %0.2f\n",id);
    printf("IMPOSTO A PAGAR\n");} 

 return 0;
}
