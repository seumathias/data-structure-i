#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int cont = 0, porcentagem = 0, n;
	
	//PROGRAMA
	do{
	printf("Digite o tamanho da lista: ");
		scanf(" %d", &n);
		int ar[n];
	//LÓGICA GERAL	
	while(cont < 100000){
		int valido = 1;
		for(int i = 0; i < n; i++){
			int num = rand()%(2*n);
			ar[i] = num;
		}
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(ar[i] == ar[j]){
					valido = 0;
					break;
				}
			}	
			if(!valido)
				break;	
		}
		if(valido)
			porcentagem++;
		cont++;
	}
	cont = 0;
	if(n <= 0)
		break;
	printf("%d", porcentagem);
	printf(" %f por cento\n\n", ((float)porcentagem/100000)*100);
	porcentagem = 0;
	}while(1);
	return 0;
}

