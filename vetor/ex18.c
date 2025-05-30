#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM];
    int x;
    int multiplos[TAM]; 
    int contador = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número x: ");
    scanf("%d", &x);

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % x == 0) {
            multiplos[contador] = vetor[i];
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", x);
    } else {
        printf("Múltiplos de %d encontrados no vetor:\n", x);
        for (int i = 0; i < contador; i++) {
            printf("%d ", multiplos[i]);
        }
        printf("\n");
    }

}
