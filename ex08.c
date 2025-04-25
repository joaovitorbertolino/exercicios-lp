#include <stdio.h>
int main(){
    float m, cm;
    printf(" --- Conversor de metros para centimetros ---\n");
    printf("Metros: ");
    scanf("%f", &m);
    cm = 100 * m;
    printf("%f metros são %f centimetros\n", m, cm);
}