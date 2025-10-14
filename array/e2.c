#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n;
	printf("Quantas roladas?\n");
	scanf("%d", &n);
	int tent[6] = {0};
	
	for(int i = 0; i < n; i++){
		int dado = rand()%6 + 1;
		tent[dado -1] += 1;
		}
	for(int i = 0; i < 6; i++)
		printf("O dado de lado %d, foi rodado %d vezes, %d por cento das vezes\n", i+1, tent[i], (tent[i]*100)/n);
	return 0;
}

