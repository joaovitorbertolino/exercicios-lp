#include <stdio.h>
int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n > 10)
        printf("esse numero é maior que 10\n");
    else
        printf("esse numero é menor que 10\n");
}