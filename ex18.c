#include <stdio.h>

int main() {
    float potenciaLampada, largura, comprimento, area;
    int numeroLampadas;

    printf("Digite a potência da lâmpada (em watts): ");
    scanf("%f", &potenciaLampada);
    printf("Digite a largura do cômodo (em metros): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do cômodo (em metros): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    numeroLampadas = 18 * area / potenciaLampada;

    printf("Número de lâmpadas necessárias: %d\n", numeroLampadas);
}