#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 3

int main(){
    int m[M][M];
    int soma;

    srand(time(NULL));

    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            m[i][j] = rand()%21;
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            if (i == j){
                soma += m[i][j];
            }
            
        }
         
    }
    printf("%d", soma);
}