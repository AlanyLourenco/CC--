#include <stdio.h>
//alany 202105018

void radixsort(int vet[], int tam) {
	int i;
	int exp = 1;
	int m = 0;
	int bucket[tam];
	int temp[tam];

	for(i = 0; i < tam; i++) {
		if(vet[i] > m) {
			m = vet[i];
		}
	}

	while((m/exp) > 0) {
		for (i = 0; i < tam; i++) {
			bucket[i] = 0;
		}
		for(i = 0; i < tam; i++) {
			bucket[(vet[i] / exp) % 10]++;
		}
		for(i = 1; i < tam; i++) {
			bucket[i] += bucket[i-1];
		}
		for(i = (tam - 1); i >= 0; i--) {
			temp[--bucket[(vet[i] / exp) % 10]] = vet[i];
		}
		for(i = 0; i < tam; i++) {
			vet[i] = temp[i];
		}
		exp *= 10;
	}
}

int main() {
	int vet[] = {5,78,2,8,10,50,1,4,90,3,100,45,66,91,73};
	int len = sizeof(vet)/sizeof(vet[0]);
	int i;
	radixsort(vet,len);
	for (i = 0; i < len; i++) {
		printf("%d\n", vet[i]);
	}
	return(0);
}
