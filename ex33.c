#include <stdio.h>
int main(){
    float numeroconta, saldo, debito, credito, saldoatual;
    printf("Digite o número da conta: ");
    scanf("%f", &numeroconta);
    printf("Digite o saldo: ");
    scanf("%f", &saldo);
    printf("Digite o débito: ");
    scanf("%f", &debito);
    printf("Digite o crédito: ");
    scanf("%f", &credito);
    saldoatual = saldo - debito + credito;
    if (saldoatual >= 0)
        printf("Saldo Positivo: %.2f\n", saldoatual);
    else
        printf("Saldo negativo: %.2f\n", saldoatual);
}