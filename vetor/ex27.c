#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int A[MAX];

    srand(time(NULL));

    for (int i = 0; i < MAX; i++){
        A[i] = rand()%51;
        printf("%d, ", A[i]);
    }
    for (int i = 0; i < MAX; i++){
        if (A[i] % i == 0){
            
        }
        
    }
    
    
}