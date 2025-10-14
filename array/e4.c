#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vet[15];
    int valor, cont = 0;
    do{
        valor = 1+rand()%25;
        int valido = 1;
        for(int i = 0; i < cont; i++){
            if(valor == vet[i]){
                valido = 0;
                break;
            }
        }
        if(valido){
            vet[cont] = valor;
            cont++;        
        }
        
    } while(cont < 15);
   
    printf("Números sorteados: \n");
    for(int i = 0; i < 15; i++)
        printf("[%d] ", vet[i]);
        
        
    //NÃO sorteado
    printf("\n\nNúmeros não sorteados: \n");
    for (int numero = 0; numero < 25; numero++) {
        int foi_sorteado = 0;
        for (int i = 0; i < 15; i++) {
            if (numero == vet[i]) {
                foi_sorteado = 1;
                break;
            }
        }
        if (!foi_sorteado) {
            printf("[%d] ", numero);
        }
    }
    printf("\n");
        
    return 0;
}
