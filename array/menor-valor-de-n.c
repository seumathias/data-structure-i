#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS 100000
int main() {
	srand(time(NULL));
	int n = 1;
    int cont=0;
	// PROGRAMA
	do {
	   	int porcentagem = 0;
		for(int t = 0; t < TENTATIVAS; t++) {
			int ar[n], valido = 1;

			for (int i = 0; i < n; i++)
				ar[i] = rand() % (2 * n);

			for (int i = 0; i < n; i++)	{
				for (int j = i + 1; j < n; j++) {
					if (ar[i] == ar[j]) {
						valido = 0;
						break;
					}
				}
				if (!valido)
					break;
			}
			if(valido)
				porcentagem++;
		}
	
		float prob = ((float)porcentagem / TRIALS) * 100;
		printf("n-> %d probabilidade de nC#o repetir -> %f %%\n", n, prob);
		if(prob == 0.0) {
			printf("A probabilidade de 0%% é com n = %d", n);
			return 0;
		}
		n++;
		cont++;
	} while(1);
	return 0;
}
