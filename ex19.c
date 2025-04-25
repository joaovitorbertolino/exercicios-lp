#include <stdio.h>

int main() {
    float comprimento, largura, altura, area_paredes, caixas_necessarias;

    printf("Digite o comprimento da cozinha (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura da cozinha (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da cozinha (em metros): ");
    scanf("%f", &altura);

    
    area_paredes = 2 * altura * (comprimento + largura);

    
    caixas_necessarias = area_paredes / 1.5;

    printf("Quantidade de caixas de azulejos necessárias: %.0f\n", caixas_necessarias);

}