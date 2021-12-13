#include <stdio.h>

int min(int i, int j){
	int aux=i<j?i:j;
	return(aux);
}

int main(){
	char num[100001];
	char num_final[100001];
	int N,D,i,j,k,ind_maior;
	scanf("%d %d", &N,&D);
	getchar();
	while (N || D) {
		i=1;j=N-D;k=0,ind_maior=0;
		scanf("%s", num);
		while (k<D) {
			while (i<=j) {
				if(num[ind_maior]<num[i]){
					ind_maior=i;
				}
				i++;
			}
			num_final[k++]=num[ind_maior];
			ind_maior++;
			i=ind_maior+1;
			j=min(j+1,N-1);
		}
		num_final[D]='\0';
		printf("%s\n", num_final);
		scanf("%d %d", &N,&D);
		getchar();
	}
}