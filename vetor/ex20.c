#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int vetor[MAX], impar[MAX], par[MAX];
    int p = 0, im = 0;

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        vetor[i] = rand()%51;
        printf("[%d] = %d\n", i, vetor[i]);
    }
    for (int i = 0; i < MAX; i++){
        if (vetor[i] % 2 == 0){
            par[p++] = vetor[i];
        }
        else{
            impar[im++] = vetor[i];
        }
        
    }
    
    for (int i = 0; i < p; i++){
        printf("%d, ", par[i]);

    }
    printf("\n");
    for (int i = 0; i < im; i++){
        printf("%d, ", impar[i]);

    }
    

}