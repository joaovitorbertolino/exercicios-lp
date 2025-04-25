#include <stdio.h>
int main(){
    int carrosVendidos;
    float totalVendas, salarioFixo, comissaoPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor da comissão por carro vendido: ");
    scanf("%f", &comissaoPorCarro);

    salarioFinal = salarioFixo + (comissaoPorCarro * carrosVendidos) + (0.05 * totalVendas);

    printf("O salário final do vendedor é: %.2f\n", salarioFinal);
}