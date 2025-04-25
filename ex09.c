#include <stdio.h>
int main(){
    float l;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &l);
    printf("O dobro da aréa do quadrado de lado %f é %f\n", l, (l*l)*2);
}