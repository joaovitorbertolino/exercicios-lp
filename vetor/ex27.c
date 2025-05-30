#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int vetor[TAM];

    srand(time(NULL));
    printf("Vetor gerado:\n");
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 51;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Elementos primos e suas posicoes:\n");
    for (int i = 0; i < TAM; i++) {
        int n = vetor[i];
        int primo = 1;
        if (n < 2) {
            primo = 0;
        } else {
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }
        if (primo) {
            printf("Valor: %d, Posicao: %d\n", n, i);
        }
    }

    return 0;
}