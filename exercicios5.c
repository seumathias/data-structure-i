#include <stdio.h>
#include <stdlib.h>
/*Calendário em formato quadrado. Informe os dias tem o mês e o dia da semana que começa o mês.
 * Considere 1==domingo, 2==segunda, 3==terça;
 * */
int main(){
	int dias, prim, mes;
	printf("Quantos dias tem o mês?\n");
	scanf("%d", &dias);
	printf("Qual o primeiro dia da semana? Domingo = 1 e assim por diante até Sábado = 7\n");
	scanf("%d", &prim);
	printf("Qual o mês?\n");
	scanf("%d", &mes);
	switch(mes) {
	case 1: printf("Janeiro\n");
	break;
	case 2: printf("Fevereiro\n");
	break;	
	case 3: printf("Março\n");
	break;
	case 4: printf("Abril\n");
	break;
	case 5: printf("Maio\n");
	break;
	case 6: printf("Junho\n");
	break;
	case 7: printf("Julho\n");
	break;
	case 8: printf("Agosto\n");
	break;
	case 9: printf("Setembro\n");
	break;
	case 10: printf("Outubro\n");
	break;
	case 11: printf("Novembro\n");
	break;
	case 12: printf("Dezembro\n");
	break;}

	printf("Dom\tSeg\tTer\tQua\tQui\tSex\tSab\n");
	for (int i = 1; i < prim; i++)
		printf("\t");
	for (int i = 1; i <= dias; i++){
				printf("%d\t", i);
		if((i + prim - 1) % 7 == 0)
		printf("\n");
		};

	return 0;
}
/*
for(int k = 0; k == prim; k++)
				printf(" ");
*/
