#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int k, aux;
	printf("Dame el tamaño del vector: ");
	scanf("%i", &n);
	int v[n];
	printf("\n");
	for(int i=0;i<n;i++){
		printf("Dame un numero para el vector: ");
		scanf("%i", &v[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%i ", v[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		k=i;
		for(int j=i+1;j<=n;j++){
			if(v[j]<v[k]){
				k=j;
			}
		}
		aux=v[i];
		v[i]=v[k];
		v[k]=aux;
	}
	printf("-------Vector Ordenado-------\n");
	for(int i=0;i<n;i++){
		printf("%i ", v[i]);
	}
	
	return 0;
}
