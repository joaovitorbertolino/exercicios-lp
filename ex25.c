#include <stdio.h>
int main() {
    int n1, n2, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%d", &n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%d", &n2);
    media = (n1 + n2) / 2;
    if (media >= 6)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}