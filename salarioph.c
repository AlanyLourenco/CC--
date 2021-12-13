#include <stdio.h>

int main(){
	
	double vHora, sHora, dsr, inss, sBruto, sLiquido, sSB = 0, sINSS = 0;
	int codigo[99], hTrab[99], qtd = -1, cont;
	
	scanf("%lf", &vHora);
	
	do{
		qtd++;
		scanf("%d %d", &codigo[qtd], &hTrab[qtd]);
	}while(codigo[qtd] != -1);
	
	for(cont=0;cont<qtd;cont++){

		sHora = hTrab[cont] * vHora * 4.5;
		dsr = hTrab [cont] * vHora * 0.75;
		sBruto = sHora + dsr;
		
		if(sBruto < 1659.38) inss = 0.08 * sBruto;
		else if (sBruto < 2765.66) inss = 0.09 * sBruto;
		else if (sBruto < 5531.31) inss = 0.11 * sBruto;
		else inss = 0.11 * 5531.31;
		
		sLiquido = sBruto - inss;
		
		sSB += sBruto;
		sINSS += inss;
		
		printf("%d => %.2lf + %.2lf = %.2lf - %.2lf = %.2lf\n", codigo[cont], sHora, dsr, sBruto, inss, sLiquido);
		
	}
	
	printf("SOMA DOS SALARIOS BRUTOS: %.2lf\n", sSB);
	printf("SOMA DOS INSS: %.2lf\n", sINSS);
	
	return 0;
	
}