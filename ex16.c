#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media_final;
    int peso1 = 2, peso2 = 3, peso3 = 5;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media_final = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média final do aluno é: %.2f\n", media_final);

}