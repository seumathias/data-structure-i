/******************************************************************************
Faça um programa C para ler do usuário dois valores inteiros X e Y. Alimente dois vetores de tamanhos X
e Y com números inteiros aleatórios, não repetitivos, sorteados no intervalo entre 0 e X+Y (inclusive).
Faça a impressão das seguintes informações:
a) Vetores X e Y;
b) Todos os números exclusivos do vetor X;
c) Todos os números exclusivos do vetor Y;
d) Os números existentes nos dois vetores;
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int x, y;
    scanf(" %d", &x);
    scanf(" %d", &y);
    int arr1[x], arr2[y];
    int soma = x + y;
    srand(time(NULL));
    
    int jaSaiu[soma];
    //ALIMENTANDO X
    for(int i = 0; i < x; i++){
        jaSaiu[i] = 0;
    }
    for(int i = 0; i < x; i++){
        int num;
        do{
            num = rand()%soma;
        }while(jaSaiu[num] == 1);
        jaSaiu[num] = 1;
        arr1[i] = num;
    }
    //ALIMENTANDO Y
    for(int i = 0; i < y; i++){
        jaSaiu[i] = 0;
    }
    for(int i = 0; i < y; i++){
        int num;
        do{
            num = rand()%soma;
        }while(jaSaiu[num] == 1);
        jaSaiu[num] = 1;
        arr2[i] = num;
    }
    //IMPRIMINDO A
    printf("Linha X \n");
    for(int i = 0; i < x; i++)
        printf("[%d]", arr1[i]);
    printf("\nLinha Y \n");
    for(int i = 0; i < y; i++)
        printf("[%d]", arr2[i]);
   
    //IMPRIMINDO B
    printf("\nExclusivos X\n");
    for(int i = 0; i < x; i++){
        int find = 0;
        for(int j = 0; j < y; j++){
            if(arr1[i] == arr2[j]){
                find = 1;
                break;
            }
        }
        if(!find)
            printf("[%d]", arr1[i]);
    }
    //IMPRIMINDO C
    printf("\nExclusivos X\n");
    for(int i = 0; i < y; i++){
        int find = 0;
        for(int j = 0; j < x; j++){
            if(arr2[i] == arr1[j]){
                find = 1;
                break;
            }
        }
        if(!find)
            printf("[%d]", arr2[i]);
    }
    return 0;
}
