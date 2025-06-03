#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3 

int main(){
    int M[MAX][MAX];
    int soma=0;

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            M[i][j] = rand()%21;
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < MAX; i++){
        for (int j = i+1; j < MAX; j++){
            soma += M[j][i];
        }
        
    }
    printf("%d", soma);
    
    
}