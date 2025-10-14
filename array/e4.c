/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    int vet2[10];
    do{
         valor = 1+rand()%25;
        int valido = 1;
        for(int i = 0; i < cont; i++){
            if(valor == vet[i] && valor == vet[2]){
                valido = 0;
                break;
            }
        }
        if(valido){
            vet[cont] = valor;
            cont++;        
        }
        
    }while(cont < 10);
    printf("Números sorteados: \n\n");
    for(int i = 0; i < 15; i++)
        printf("[%d] ", vet[i]);
        
    printf("\nNúmeros não sorteados: \n");
    for(int i = 0; i < 10; i++)
        printf("[%d] ", vet2[i]);
    return 0;
}
