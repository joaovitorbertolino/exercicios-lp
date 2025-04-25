#include <stdio.h>
int main(){
    float vv, vb, vn, eleitores;
    printf("Digite a quantidade de eleitores: ");
    scanf("%f", &eleitores);
    printf("Digite a quantidade de votos validos: ");
    scanf("%f", &vv);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%f", &vn);
    printf("Digite a quantidade de votos em branco: ");
    scanf("%f", &vb);
    printf("O percentual de votos validos é de: %.2f%%\n", (vv * 100) / eleitores);
    printf("O percentual de votos em branco é de: %.2f%%\n", (vb * 100) / eleitores);
    printf("O percentual de votos nulos é de: %.2f%%\n", (vn * 100) / eleitores);

}