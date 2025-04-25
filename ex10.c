#include <stdio.h>
int main(){
    float salario;
    int horas; 
    printf("Digite seu salario por hora: ");
    scanf("%f", &salario);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Seu salario neste mes foi de: %f\n", salario * horas);

}