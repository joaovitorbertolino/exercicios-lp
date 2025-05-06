#include <stdio.h>
int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("esse numero é positivo\n");
    else
        printf("esse numero é negativo\n");
}