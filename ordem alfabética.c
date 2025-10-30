#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n = 50;
    char nomes[n][100];
    
    char nomeTemp[100];
    
    int contadorNomes = 0;

    printf("Digite os nomes em ordem alfabetica. Digite EXIT para parar.\n");

    while (contadorNomes < n) {
        printf("Nome %d: ", contadorNomes + 1);
        
        scanf(" %[^\n]s", nomeTemp);
        if (strcmp(nomeTemp, "EXIT") == 0) {
            printf("Fim do programa\n");
            break;
            else if(strcmp(nomeTemp, "exit")==0){
                printf("Fim do programa\n");
                break;
            }
        }
        //CHECAR SE É O PRIMEIRO
        if (contadorNomes > 0) {
            if (strcmp(nomeTemp, nomes[contadorNomes - 1]) < 0) {
                printf("Erro: '%s' fora de ordem, siga a ordem.\n", nomeTemp);
                printf("O ultimo nome '%s'. Siga a ordem.\n", nomes[contadorNomes - 1]);

                continue; 
            }
        }
        //COPIAR PARA A STRING NOMES 
        strcpy(nomes[contadorNomes], nomeTemp);
        
        contador_nomes++;
    }
    //IMPRIMINDO    
    printf("\n--- Nomes Inseridos em Ordem Alfabetica ---\n");
    if (contador_nomes == 0) {
        printf("Nenhum nome foi inserido.\n");
    } else {
        for (i = 0; i < contador_nomes; i++) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
