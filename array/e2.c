#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int sort=0;
	int naoSorteados[10] = {0};
	int vet[15] = {0};
	
	for(int i = 0; i < 25; i++){
	    sort = rand()%25 + 1;
	    if(vet[i] == sort){
	        vet[i] = sort;
	        continue;
	       }
		naoSorteados[i] = sort;
		}
	
	//IMPRIMIR DADOS
	printf("\nOs números sorteados foram: ");	
	for (int i = 0; i < 15; i++){
		 printf("%d, ", vet[i]);
	}
	printf("\nOs números não sorteados foram: ");
	for (int i = 0; i < 10; i++){
	
		printf("%d, ", naoSorteados[i]);
	}
	return 0;
	}
