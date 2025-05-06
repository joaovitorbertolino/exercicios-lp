#include <stdio.h>
int main(){
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
    if (n1 > 0)
        printf("esse numero é positivo\n");
    else if (n1 < 0)
        printf("esse numero é negativo\n");
    else
        printf("esse numero é zero\n");
}