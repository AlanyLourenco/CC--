#include<stdio.h>
int main(){
    float renda;
    int pess,esc,etni,r1=0,contl1=0,contl2=0,contl3=0,contl4=0,cont=0;

    scanf("%f %d %d %d",&renda,&pess,&esc,&etni);
    
    r1=renda/pess;

    while ((renda!=-1)&&(pess!=-1)&&(esc!=-1)&&(etni!=-1))
    {
    if ((esc==2)&&(r1<=1405.50)&&(etni==4)){
    printf("ALUNO COTISTA (L1)\n");
    contl1=contl1+1; 
    }

    else if ((esc==2)&&(r1<=1405.50)&&(etni==1)){
    printf("ALUNO COTISTA (L2)\n");
    contl2=contl2+1;}
    else if ((esc==2)&&(r1<=1405.50)&&(etni==2)){
    printf("ALUNO COTISTA (L2)\n");
    contl2=contl2+1;}
    else if ((esc==2)&&(r1<=1405.50)&&(etni==3)){
    printf("ALUNO COTISTA (L2)\n");
    contl2=contl2+1;}

    else if ((esc==2)&&(r1>1405.50)&&(etni==4)){
    printf("ALUNO COTISTA (L3)\n");
    contl3=contl3+1;}
    
    else if ((esc==2)&&(r1>1405.50)&&(etni==1)){
    printf("ALUNO COTISTA (L4)\n");
    contl4=contl4+1;}
    else if ((esc==2)&&(r1>1405.50)&&(etni==2)){
    printf("ALUNO COTISTA (L4)\n");
    contl4=contl4+1;}
    else if ((esc==2)&&(r1>1405.50)&&(etni==3)){
    printf("ALUNO COTISTA (L4)\n");
    contl4=contl4+1;}


    else {
    printf("ALUNO NAO COTISTA\n"); 
    cont=cont+1;
    }
    scanf("%f %d %d %d",&renda,&pess,&esc,&etni);
    r1=renda/pess;}
    printf("TOTAL (L1): %d\n",contl1);
    printf("TOTAL (L2): %d\n",contl2);
    printf("TOTAL (L3): %d\n",contl3);
    printf("TOTAL (L4): %d\n",contl4);
    printf("TOTAL NAO COTISTA: %d\n",cont);
    return 0;
}