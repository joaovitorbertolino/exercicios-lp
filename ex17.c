#include <math.h>
#include <stdio.h>

int main() {
    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = M_PI * raio * raio;

    printf("A área do círculo é: %.2lf\n", area);
}