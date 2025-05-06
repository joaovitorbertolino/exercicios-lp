#include <stdio.h>
int main() {
    int idadeHomem1, idadeHomem2, idadeMulher1, idadeMulher2;
    printf("Digite a idade do homem 1: ");
    scanf("%d", &idadeHomem1);
    printf("Digite a idade do homem 2: ");
    scanf("%d", &idadeHomem2);
    printf("Digite a idade da mulher 1: ");
    scanf("%d", &idadeMulher1);
    printf("Digite a idade da mulher 2: ");
    scanf("%d", &idadeMulher2);

    if (idadeHomem1 > idadeHomem2 && idadeMulher1 < idadeMulher2) {
        printf("A soma da idade do homem mais velho com a mulher mais nova é: %d\n", idadeHomem1 + idadeMulher1);
        printf("A multiplicação da idade da mulher mais velha com o homem mais novo é: %d\n", idadeMulher2 * idadeHomem2);
    } else if (idadeHomem1 < idadeHomem2 && idadeMulher1 > idadeMulher2) {
        printf("A soma da idade do homem mais velho com a mulher mais nova é: %d\n", idadeHomem2 + idadeMulher2);
        printf("A multiplicação da idade da mulher mais velha com o homem mais novo é: %d\n", idadeMulher1 * idadeHomem1);
    } else if (idadeHomem1 > idadeHomem2 && idadeMulher1 > idadeMulher2) {
        printf("A soma da idade do homem mais velho com a mulher mais nova é: %d\n", idadeHomem1 + idadeMulher2);
        printf("A multiplicação da idade da mulher mais velha com o homem mais novo é: %d\n", idadeMulher1 * idadeHomem2);
    } else if (idadeHomem1 < idadeHomem2 && idadeMulher1 < idadeMulher2) {
        printf("A soma da idade do homem mais velho com a mulher mais nova é: %d\n", idadeHomem2 + idadeMulher1);
        printf("A multiplicação da idade da mulher mais velha com o homem mais novo é: %d\n", idadeMulher2 * idadeHomem1);
    }
}
