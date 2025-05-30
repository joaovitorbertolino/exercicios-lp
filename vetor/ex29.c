#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

int main() {
    int numeros[TAM];
    int pares[TAM], impares[TAM];
    int soma_pares = 0, qtd_impares = 0, qtd_pares = 0;

    srand(time(NULL));

    printf("Numeros gerados:\n");
    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 101;
        printf("%d ", numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[qtd_pares++] = numeros[i];
            soma_pares += numeros[i];
        } else {
            impares[qtd_impares++] = numeros[i];
        }
    }

    // Resultados
    printf("\n\nNumeros pares digitados:\n");
    for (int i = 0; i < qtd_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nSoma dos numeros pares: %d\n", soma_pares);

    printf("\nNumeros impares digitados:\n");
    for (int i = 0; i < qtd_impares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\nQuantidade de numeros impares: %d\n", qtd_impares);
}
