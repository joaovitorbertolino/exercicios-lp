#include <stdio.h>

int main() {
    float comprimento_pista_m, consumo_km_por_litro;
    int total_voltas, num_reabastecimentos;
    
    printf("Comprimento da pista (em metros): ");
    scanf("%f", &comprimento_pista_m);

    printf("Número total de voltas: ");
    scanf("%d", &total_voltas);

    printf("Número de reabastecimentos desejados: ");
    scanf("%d", &num_reabastecimentos);

    printf("Consumo do carro (em Km/L): ");
    scanf("%f", &consumo_km_por_litro);

    float comprimento_pista_km = comprimento_pista_m / 1000.0;

    int voltas_antes_reabastecer = total_voltas / (num_reabastecimentos + 1);

    float distancia_total_km = voltas_antes_reabastecer * comprimento_pista_km;

    float litros_necessarios = distancia_total_km / consumo_km_por_litro;

    printf("Litros mínimos necessários até o primeiro reabastecimento: %.2f\n", litros_necessarios);

}
