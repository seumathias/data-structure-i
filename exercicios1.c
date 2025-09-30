
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Faça um programa em C que leia do usuário dois números inteiros X e Y
//Após isto, o programa deve imprimir X números aleatórios sorteados entre 0 e Y
int main(){
	int x,y,random,cont=0;
	printf("Quantos números?\n");
	scanf(" %d", &x);
	printf("De 0 até quanto?\n");
	scanf(" %d", &y);
	srand(time(NULL));	
	do{
	    random = rand()%y;		
		printf(" %d\n", random);
		cont++;
		}
	while(cont < x);

	return 0;
}

