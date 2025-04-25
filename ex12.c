#include <stdio.h>
int main(){
    float salario, reajuste;
    printf("Digite seu salario atual: ");
    scanf("%f", &salario);
    printf("Digite o valor de reajuste, o numero inteiro: ");
    scanf("%f", &reajuste);
    printf("O novo salario é: %.2f\n", salario * (1 + reajuste/100));
}