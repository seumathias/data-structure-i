#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num1, num2, contH=0, contP=0,chutePC, adv, maior, menor;
	srand(time(NULL));
	num1 = 1 + rand()%100;
	printf("----------------------------------------------\n");
	printf("O PC SORTEOU UM NÚMERO\n");
	printf("Qual o número secreto? de 1 a 100\n");
	printf("----------------------------------------------\n");

	do{
	scanf("%d", &num2);
	if(num2 > num1){
		printf("Número errado. Número sorteado é menor: \n");
		} else {
			printf("Número errado. Número sorteado é maior: \n");
			}
	contH++;	
		}while(num1 != num2);
	system("clear");
	printf("Parabéns, o número secreto era %d.\n", num1);
		printf("Acertado em %d tentativas.\n", contH);
		system("sleep 3");
		system("clear");
	//
	//	
	//AGORA A TENTATIVA DO PC//////////////////////////////////////////////////////////////
	printf("----------------------------------------------\n");
	printf("AGORA PENSE EM UM NÚMERO E A MÁQUINA TENTARÁ ADIVINHAR\n");
	printf("Pense em um número de 1 a 100.\n");
	printf("----------------------------------------------\n");
	maior = 100;
	menor = 1;
	do{
		chutePC = rand() % (maior - menor + 1) + menor;
		contP++;
		printf("\nO PC chutou: %d\n", chutePC);
		printf("0 se Maior\n 1 se Menor\n 2 para acertou:\n ");
		scanf("%d", &adv);
		if (adv == 0) {
            menor = chutePC + 1;
        } else if (adv == 1) {
            maior = chutePC - 1;
        }
		
	} while(adv != 2);
	
	system("clear");
	printf("O PC acertou! Era %d.\n", chutePC);
	printf("Acertado em %d tentativas.\n", contP);
	if(contP < contH)
		printf("Vocề venceu a máquina por %d tentiva(s).", contH - contP);
		else
		printf("Vocề perdeu para a máquina por %d tentivas.", contP - contH);

	return 0;
}

