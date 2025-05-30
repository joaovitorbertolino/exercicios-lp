#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int A[MAX], B[MAX], C[MAX];

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        A[i] = rand()%100;
        B[i] = rand()%100;
        C[i] = A[i] - B[i];
    }
    for (int i = 0; i < MAX; i++){
        printf("%d, ", C[i]);
    }
    
    
}