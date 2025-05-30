#include <stdio.h>

#define MAX 50

int main(){
    int V[MAX];

    for (int i = 0; i < MAX; i++){
        V[i] = (i+5*i) % (i+1);
    }
    for (int i = 0; i < MAX; i++){
        printf("%d, ", V[i]);
    }
    
    
}