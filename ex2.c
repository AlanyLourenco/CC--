#include <stdio.h>

int main()
{ float sal, consumo, vunit, vcons,vdesc;
  scanf("%f %f",&sal,&consumo);
  vunit = (sal*0.7)/100.0;
  vcons = vunit*consumo;
  vdesc = vcons - (vcons*0.1);
  printf("Custo por kW: R$ %.2f\n",vunit);
  printf("Custo do consumo: R$ %.2f\n",vcons);
  printf("Custo com desconto: R$ %.2f\n",vdesc);
  return 0;
}