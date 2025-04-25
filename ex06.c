#include <stdio.h>
int main(){
    float altura, base, area;
    printf("Digite o comprimento da altura do retangulo: ");
    scanf("%f", &altura);
    printf("Digite o comprimento da base do retangulo: ");
    scanf("%f", &base);
    area = altura * base;
    printf("A area do retangulo é: %f\n", area);
}