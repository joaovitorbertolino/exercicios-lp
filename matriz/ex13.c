#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 4

int main(){
    int m[M][M];

    srand(time(NULL));
    printf("---Matriz---");
    printf("\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            m[i][j] = rand()%21;
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++){
        for (int j = i+1; j < M; j++){
            m[i][j] = 0;
        }
    }
    
    printf("---Matriz Trinagular Inferior---");
    printf("\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", m[i][j]);     
        
        }
        
    printf("\n");
    }
    
}