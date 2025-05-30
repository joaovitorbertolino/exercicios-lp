#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5 

int main(){
    int A[MAX], B[MAX];
    int produtoEscalar;

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        A[i] = rand()%21;
        B[i] = rand()%21;
        printf("%d, ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d, ", B[i]);
    }
    
    for (int i = 0; i < MAX; i++){
        produtoEscalar += (A[i] * B[i]); 
    }
    printf("\n");
    printf("%d\n", produtoEscalar);
    
    
}