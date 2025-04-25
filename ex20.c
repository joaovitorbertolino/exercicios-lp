#include <stdio.h>

int main() {
    float preco_combustivel = 2.90;
    float marcacao_inicial, marcacao_final, litros_gastos, recebido, distancia, media, gasto, lucro; 

    printf("Digite a marcação inicial do odômetro: ");
    scanf("%f", &marcacao_inicial);

    printf("Digite a marcação final do odômetro: ");
    scanf("%f", &marcacao_final);

    printf("Digite a quantidade de litros de combustível gasto: ");
    scanf("%f", &litros_gastos);

    printf("Digite o valor recebido no dia: ");
    scanf("%f", &recebido);

    distancia = marcacao_final - marcacao_inicial;
    media = distancia / litros_gastos;
    gasto = litros_gastos * preco_combustivel;
    lucro = recebido - gasto;

    printf("\nConsumo médio: %.2f Km/L\n", media);
    printf("Lucro do dia: R$ %.2f\n", lucro);

}
