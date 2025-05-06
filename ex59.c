#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Digite o valor do primeiro ângulo: ");
    scanf("%f", &angulo1);
    printf("Digite o valor do segundo ângulo: ");
    scanf("%f", &angulo2);
    printf("Digite o valor do terceiro ângulo: ");
    scanf("%f", &angulo3);

    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
        printf("O triângulo é Retângulo.\n");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
        printf("O triângulo é Obtusângulo.\n");
    } else {
        printf("O triângulo é Acutângulo.\n");
    }

}