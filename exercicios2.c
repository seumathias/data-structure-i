#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Desenvolva um programa que gere e imprima vários números aleatórios entre
//-100 e 100 (inclusos). O programa deve encerrar quando sortear o número 0.
//Ao fim imprima a quantidade de números obtidos.
int main(){
	int random, cont=0;
	srand(time(NULL));
	do{
		random = rand()%201;
		printf(" %d\n", random-100);
		cont++;
		}
	while(random != 0);
	printf("Foram sorteados o total de %d\n", cont);
	return 0;
}

