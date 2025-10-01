#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Leia um número X. O programa deve gerar e imprimir vários números aleatórios sorteados
 * no intervalode [0,X]. O programa só deve encerrar a execução
 * quando sortear e imprimir um número primo.
 */
int main(){
	int x, primo, random;
	scanf("%d", &x);
	srand(time(NULL));
	do {
		random = rand()%x+1;
		printf(" %d", random);
		if ((random % 2 == 0) && (random%3==0) & (random%5==0)){
			continue;};
		primo = random;
			
		} while(random <= primo);
	return 0;
}

