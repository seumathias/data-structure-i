#include <stdio.h>
#include <stdlib.h>

int main() {
    //TRIANGLE-LEFT
    printf("TRIANGLE-1-LEFT\n");
    int row =5;
    for (int i = 0; i < row; i++){
        for (int j = 0; j <= i; j++){
          printf("* "); 
        }
         printf("\n");
    }
    printf("\n\n\n");
    
    //TRIANGLE-INVERT-LEFT
    printf("TRIANGLE-1-INVERT\n");
    for (int i = row; i > 0; i--){
        for (int j = 0; j < i; j++){
          printf("* "); 
        }
         printf("\n");
    }
    
    printf("\n\n\n");
     //TRIANGLE-CENTER
     printf("TRIANGLE-CENTER\n");
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
     printf("TRIANGLE-RIGHT\n");
    for (int i = 0; i < row; i++){
        for (int j = i ; j < row; j++){
          printf("  ");
        }
        for(int k = 0; k <= i; k++){
            printf("* ");
        }
         printf("\n");
    }
    //SANDCLOCK
     printf("HOURGLASS\n");
    for (int i = row; i >= 0; i--){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf(" *");
        }
        printf("\n");
    }
    for (int i = 0; i <= row; i++){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf(" *");
        }
         printf("\n");
    }
    printf("DIAMOND \n");
	for (int i = 0; i <= row; i++){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf(" *");
        }
         printf("\n");
    }
    for (int i = row; i >= 0; i--){
        for (int j = i ; j < row; j++){
          printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf(" *");
        }
        printf("\n");
    }
	printf("RHOMBUS PATTERN \n");
	for (int i = 0; i < row; i++){
		for(int k = i; k < row; k++){
			printf(" ");;
			}
		for(int j = 0; j < row; j++){
			printf(" *");
			}
		printf("\n");
	}
    
  return 0;
}
