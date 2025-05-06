#include <stdio.h>

int main() {
    int operacao;
    float resultado, valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%f", &valor2);

    printf("Escolha a operação (1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação): ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = valor1 + valor2;
        printf("Resultado da Adição: %.2f\n", resultado);
    } else if (operacao == 2) {
        resultado = valor1 - valor2;
        printf("Resultado da Subtração: %.2f\n", resultado);
    } else if (operacao == 3) {
        if (valor2 != 0) {
            resultado = (float)valor1 / valor2;
            printf("Resultado da Divisão: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else if (operacao == 4) {
        resultado = valor1 * valor2;
        printf("Resultado da Multiplicação: %.2f\n", resultado);
    } else {
        printf("Operação inválida. Escolha entre 1, 2, 3 ou 4.\n");
    }

    return 0;
}
