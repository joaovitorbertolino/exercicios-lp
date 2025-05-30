#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int v[TAM], v1[TAM] = {0}, v2[TAM] = {0}; 

    srand(time(NULL));

    printf("Vetor original:\n");
    for (int i = 0; i < TAM; i++) {
        v[i] = rand() % 51;
        printf("%d ", v[i]);
    }

    // Separa pares e ímpares
    for (int i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0) {
            v2[i] = v[i]; 
        } else {
            v1[i] = v[i];
        }
    }

    // Imprime vetores separados
    printf("\n\nVetor de ímpares (v1):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\nVetor de pares (v2):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");

}
