#include <stdio.h>

#define M 10

int main(){
    int V[M];

    for (int i = 0; i < M; i++){
        printf("[%d] = ",i);
        scanf("%d", &V[i]);        
    }
    for (int i = 0; i < M; i++){
        if (V[i] < 0)
        {
            V[i] = 0;
        }        
    }
    for (int i = 0; i < M; i++)
    {
        printf("[%d] = %d\n ",i, V[i]);
    }
    
}