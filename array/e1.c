#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int vet[100];
	int valor, cont=0;
	int n=0;
	scanf(" %d", &valor);
	do{
	for(int i = 0; i < 100; i++){
		vet[i] = n = rand()%21 + 1;
		if(valor == n){
		printf("* ");
		cont++;
			}
		printf("%d\t", vet[i]);
		
	}
	printf("\n\nO número %d foi impresso %d vezes\n\n", valor, cont);
	valor--;
	cont = 0;
	}while(valor >= 0);
	
	return 0;
}

