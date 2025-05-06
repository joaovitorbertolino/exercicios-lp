#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioHora, salarioTotal;
    float salarioBase, salarioExtra;
    int horasNormais = 160;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o salário por hora: ");
    scanf("%f", &salarioHora);

    if (horasTrabalhadas <= horasNormais) {
        salarioTotal = horasTrabalhadas * salarioHora;
    } else {
        float horasExtras = horasTrabalhadas - horasNormais;
        salarioBase = horasNormais * salarioHora;
        salarioExtra = horasExtras * salarioHora * 1.5;
        salarioTotal = salarioBase + salarioExtra;
    }

    printf("Salário total: R$ %.2f\n", salarioTotal);
}
