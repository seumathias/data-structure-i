#include <stdio.h>
#include <stdlib.h>

int main() {
    //TRIANGLE-LEFT
    printf("TRIANGLE-1-LEFT\n");
    int row =5;
    for (int i = 0; i < row; i++){
        for (int j = 0; j <= i; j++){
          printf("*"); 
        }
         printf("\n");
    }
    printf("\n\n\n");
    
    //TRIANGLE-INVERT-LEFT
    printf("TRIANGLE-1-INVERT\n");
    for (int i = row; i > 0; i--){
        for (int j = 0; j < i; j++){
          printf("*"); 
        }
         printf("\n");
    }
    
    printf("\n\n\n");
     //TRIANGLE-CENTER
     printf("TRIANGLE-1-RIGHT\n");
    for (int i = 0; i < row; i++){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf(" *");
        }
         printf("\n");
    }
     printf("\n\n\n");
     //TRIANGLE-RIGHT
     printf("TRIANGLE-1-RIGHT\n");
    for (int i = 0; i < row; i++){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("*");
        }
         printf("\n");
    }
  return 0;
}
