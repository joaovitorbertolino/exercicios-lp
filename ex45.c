#include <stdio.h>

int main() {
    float kg_morangos, kg_macas;
    float preco_morango, preco_maca;
    float total_morango, total_maca, total;
    
    printf("Digite a quantidade de morangos (Kg): ");
    scanf("%f", &kg_morangos);
    
    printf("Digite a quantidade de macas (Kg): ");
    scanf("%f", &kg_macas);

    if (kg_morangos <= 5) {
        preco_morango = 2.50;
    } else {
        preco_morango = 2.20;
    }

    if (kg_macas <= 5) {
        preco_maca = 1.80;
    } else {
        preco_maca = 1.50;
    }

    total_morango = kg_morangos * preco_morango;
    total_maca = kg_macas * preco_maca;
    total = total_morango + total_maca;

    if ((kg_morangos + kg_macas > 8) || total > 25.00) {
        total = total * 0.90; // 10% de desconto
    }
    printf("Valor a ser pago: R$ %.2f\n", total);
    
}
