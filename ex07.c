#include <stdio.h>
int main(){
    int anos, meses, dias, idade;
    printf("Digite seus anos vividos: ");
    scanf("%d", &anos);
    printf("Digite os meses : ");
    scanf("%d", &meses);
    printf("Digte os dias: ");
    scanf("%d", &dias);
    idade = 365 * anos + 30 * meses + dias;
    printf("Voce tem %d dias vividos\n", idade);
}