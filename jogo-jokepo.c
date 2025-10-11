#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int pontoPC=0, pontoUser=0, chutePC=0, chuteUser=0, contador=0, empate=0;
	do{
	printf("-----------JOKENPO MELHOR DE 7----------------------\nPLACAR: PC: %d  USER: %d EMPATE: %d\n\n", pontoPC, pontoUser, empate);
	chutePC = rand()%3 + 1;
	printf("(1) PEDRA\n");
	printf("(2) TESOURA\n");
	printf("(3) PAPEL\n");
	printf("\nTentativas: %d\n", contador);
	printf("-----------------------------------------------------\n");
	printf("Qual sua opção?\n");
	scanf("%d", &chuteUser);
	//COMPARADOR//
	switch(chutePC){
		case 1:
		switch(chuteUser){
			case 1:
				empate++;
				break;
			case 2:
				pontoPC++;
				break;
			case 3:
				pontoUser++;
				break;}
		break;
			
		case 2:
		switch(chuteUser){
			case 1:
				pontoUser++;
				break;
			case 2:
				empate++;
				break;
			case 3:
				pontoPC++;
				break;}
		break;
			
		case 3:
		switch(chuteUser){
			case 1:
				pontoPC++;
				break;
			case 2:
				pontoUser++;
				break;
			case 3:
				empate++;
				break;}
	break;
			}
		
	//FIM COMPARADOR//
	
	system("clear");
	contador++;
	}while(pontoPC != 5 && pontoUser != 5);
		
		if(pontoUser == 5)
			printf("O USUÁRIO VENCEU! :) \n");
			else
				printf("O PC VENCEU :(\n");
		printf("Foram usadas %d rodadas.", contador);
	return 0;
}

