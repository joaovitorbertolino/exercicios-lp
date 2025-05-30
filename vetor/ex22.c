#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int A[MAX], B[MAX], C[MAX];
    int conta = 0, contb = 0;

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        A[i] = rand()%51;
        B[i] = rand()%51;
        printf("%d, ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++){
        printf("%d, ", B[i]);
    }
    for (int i = 0; i < MAX; i++){
        if (i % 2 == 0){
            C[i] = A[conta++];
        }
        else{
            C[i] = B[contb++];
        }
        
    }
    printf("\n");
    for (int i = 0; i < MAX; i++){
        printf("%d, ", C[i]);
    }
    
    
}