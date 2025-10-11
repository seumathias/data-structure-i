#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	//quantidade de linhas e colunas
	int numRow=20, numCol=15;
	
	
	
	//contador e adivinhação
	int cont=0, adv, acertos;	
	int numRandom, numeroPadrao;
	
										//MENU
	printf("ATENÇÃO, COMEÇARÁ O JOGO, VOCÊ PRECISA ADIVINHAR\nQUAL NÚMERO É DIFERENTE\nE VAI FICAR MAIS DIFÍCIL\n");
	printf("------------------------------------------------\n");
	printf("Pressione ENTER para continuar\n");
	getchar();
	system("clear");
									//FIM MENU//
							
									//GERADOR DO JOGO//
	for(int k = 0; k < 10; k++){
		
								//Gerador de número aleatório 
	do{
	numRandom = 1 + rand()%9;
	numeroPadrao = 1 + rand()%9;
	}while(numRandom == numeroPadrao);
	
							//posição aleatória na coluna e linha
	int row = rand()%numRow;
	int col = rand()%numCol;
	
								//criador de tabela
	for (int i = 0; i < numCol; i++){
		for (int j = 0; j < numRow; j++){
			//Imprimindo numero aleatório
			if (row == i && col == j){
				printf(" %d ", numRandom);
				continue;}
			//Imprimindo o número do padrão
			printf(" %d ", numeroPadrao);
			}
		
	printf("\n");
		} //fim da tabela
	system("sleep 3");
	system("clear");
	printf("Qual o número diferente do padrão?\n");
	scanf(" %d", &adv);
	if(adv == numRandom){
		acertos++;
		printf("\nAcertou! O número era %d.\n", numRandom);
		} else 
			printf("Errou! O número era %d. \n", numRandom);		
	while (getchar() != '\n');	
	
	printf("Pressione ENTER para continuar\n");
	getchar();
	system("clear");
	cont++;
	//aumentar a tabela por rodada
	numCol += 2;
	numRow += 2;
	}									//Fim do jogo
	if (cont >= 8)
		printf("PARABÉNS, você acertou %d de %d tentaivas!\n", acertos, cont);
		else if (cont >=5 && cont < 8)
			printf("BOA! Você acertou %d de %d tentativas!\n", acertos, cont);
			else if (cont < 5)
				printf("Dá para melhorar! Você acertou %d de %dtentativas\n", acertos, cont);
	return 0;
}

