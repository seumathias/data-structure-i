#include <stdio.h>
#include <stdlib.h>

int main() {
    //TRIANGLE-1
    int row =5;
    for (int i = 0; i < row; i++){
        for (int j = 0; j <= i; j++){
          printf("*"); 
        }
         printf("\n");
    }
    printf("\n\n\n");
    
    //TRIANGLE-1-INVERT
    for (int i = row; i > 0; i--){
        for (int j = 0; j < i; j++){
          printf("*"); 
        }
         printf("\n");
    }
  return 0;
}
