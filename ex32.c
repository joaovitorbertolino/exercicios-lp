#include <stdio.h>

int main() {
    float salario_fixo, vendas, comissao, salario_total;

    // Entrada de dados
    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor das vendas efetuadas: ");
    scanf("%f", &vendas);

    if (vendas <= 1500.0) {
        comissao = vendas * 0.03;
    } else {
        comissao = 1500.0 * 0.03 + (vendas - 1500.0) * 0.05;
    }

    salario_total = salario_fixo + comissao;

    printf("O salario total do vendedor e: R$ %.2f\n", salario_total);

    return 0;
}