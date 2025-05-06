#include <stdio.h>
int main(){
    int sexo;
    float peso, altura, pesoIdeal;
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite seu sexo (1 para masculino, 2 para feminino): ");
    scanf("%d", &sexo);
    if (sexo == 1){
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    }
    else{
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    }
}