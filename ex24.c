#include <stdio.h>
int main() {
    int maca, preco;
    printf("Digite quantas maças você comprou: ");
    scanf("%d", &maca);
    if (maca < 12)
        preco = maca * 1.30;
    else
        preco = maca * 1.00;
    printf("O preço total é: R$%d\n", preco);
}