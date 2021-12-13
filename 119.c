#include <stdio.h>
#include <math.h>

int next_power( int n, int p ){
	int aux, base, aux2;
	base = 0;
	aux = pow(base, p);
	
	while(aux < n){
		base++;
		aux = pow(base, p);
		//printf("%d %d\n", aux, base);
	}
	
	aux2 = pow((base-1), p);
	//****************TESTE****************//
	printf("\nBase: %d aux - n = %d\n", base, aux - n);
	printf("Base: %d n - aux2 = %d\n\n", base-1, n - aux2);
	//****************TESTE****************//
	if( (aux - n) > (n - aux2) ){
		base--;
	}

	return base;
}

int main(){
	int n, p, base, result;
	
	scanf("%d %d", &n, &p);
	
	base = next_power(n, p);
	result = pow(base, p);
	
	printf("%d -> %d^%d = %d\n", n, base, p, result);
}