#include <stdio.h>
int main(){
    float custo_fabrica, custo_final;
    printf("Digite o preço de fabrica do carro: ");
    scanf("%f", &custo_fabrica);
    custo_final = custo_fabrica * 1.73;
    printf("O preço do carro com todos os impostos fica: %.2f\n", custo_final); 
}