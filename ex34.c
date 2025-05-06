#include <stdio.h>
int main() {
    int quantidadeAtual, quantidadeMinima, quantidadeMaxima, quantidadeMedia;
    printf("Digite a quantidade atual: ");
    scanf("%d", &quantidadeAtual);
    printf("Digite a quantidade minima: ");
    scanf("%d", &quantidadeMinima);
    printf("Digite a quantidade maxima: ");
    scanf("%d", &quantidadeMaxima);
    quantidadeMedia = (quantidadeMinima + quantidadeMaxima) / 2;
    if (quantidadeAtual >= quantidadeMedia)
        printf("Não efetuar compra\n");
    else
        printf("Efetuar compra\n");


}