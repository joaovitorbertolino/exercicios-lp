#include <stdio.h>
int main(){
    int anonascimento, anoatual, idade;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anonascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    idade = anoatual - anonascimento;
    if (idade >= 16)
        printf("Você pode votar\n");
    else
        printf("Você não pode votar\n");
}