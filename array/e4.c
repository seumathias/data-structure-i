#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int sort=0;
	int naoSorteados[10];
	int vet[15] = {0};
	for(int i = 0; i < 25; i++){
		sort = rand()%25 + 1;
		while(i < 15){
			vet[i] = sort;}
		naoSorteados[i] = sort;
		}
	for (int i = 0; i < 25; i++){
		printf("Os números sorteados foram: ");
		while(i < 15){
		printf("%d, ", vet[i]);}
		printf("Os números não sorteados foram: ");
		printf("%d, ", naoSorteados[i]);
	}
	return 0;
	}
