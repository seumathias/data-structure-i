#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*O número 5.832 possui a seguinte características: 5+8+3+2 == 18 e
 18³ == 5.832. Faça um prograam que verifique se existem outros números de
 quatro algarismos que possuem essa mesma características
 */
int main(){
	int a,b,c,d, soma, cubo;
	for (int i = 1000; i < 9999; i++){
		a = i / 1000;
		b = (i / 100 ) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		soma = a + b + c + d;
		cubo = soma * soma * soma;
		if( i == cubo){
		printf("Número encontrado: %d\n", i);
		printf("Justificativa: %d + %d + %d + %d == %d e %d³ = %d\n", a, b, c, d, soma, soma, i);
		}
	}
	
	}

