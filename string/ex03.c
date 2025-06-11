#include <stdio.h> 
#include <string.h>

int main(){
    char A[100], B[100], C[100], D[300];
    int i = 0, j = 0;
    int LenB, LenC;

    printf("Digite o Texto: ");
    fgets(A, sizeof(A), stdin);
    printf("Digite a palvra que vai ser modificada: ");
    fgets(B, sizeof(B), stdin);
    printf("Digite a nova palavra: ");
    fgets(C, sizeof(C), stdin);

    A[strlen(A) - 1 ] = '\0';
    B[strlen(B) - 1 ] = '\0';
    C[strlen(C) - 1 ] = '\0';



    LenB = strlen(B);
    LenC = strlen(C);

    while(i < strlen(A)){
        if (strncmp(&A[i], B, LenB) == 0){
            strcpy(&D[j], C);
            i += LenB;
            j += LenC;
        }
        else{
            D[j] = A[i];
            i++;
            j++;
        }
        
    }
    printf("A nova frase é: %s", D);

}