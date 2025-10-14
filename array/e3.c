#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int valor;
	int vet[20] = {0};
	int vet2[20] = {0};
	int vet3[20] = {0};
	//NORMAL
			for(int i = 0; i < 20; i++){
			valor = rand()%20;
			vet[i] = valor;	
			printf("%d\n", vet[i]);
			}
	//METADE INVERTIDA
		printf("A metade invertida \n\n");
		for(int i = 0; i < 10; i++){
		vet2[i] = vet[i+10];
		printf("%d\n", vet2[i]);			
			}

		for(int i = 0; i < 10; i++){
		vet2[i] = vet[i];
		printf("%d\n", vet2[i]);			
			}
		
		//METADE INVERTIDA
		printf("A metade invertida partido novamente \n\n");
		for(int i = 0; i < 5; i++){
		vet3[i] = vet2[i+5];
		printf("%d\n", vet3[i]);			
			}
		for(int i = 0; i < 5; i++){
		vet3[i] = vet2[i];
		printf("%d\n", vet3[i]);			
			}
		for(int i = 0; i < 5; i++){
		vet3[i] = vet2[i+15];
		printf("%d\n", vet3[i]);			
			}
		for(int i = 0; i < 5; i++){
		vet3[i] = vet2[i+10];
		printf("%d\n", vet3[i]);			
			}
	return 0;
}

