#include <stdio.h>
#include <string.h>

int main(){
    char A[60];
    int i;

    printf("Digte a frase: ");
    fgets(A, sizeof(A), stdin);
    
    A[strlen(A) - 1];

    A[0] -= 32;

    for (int i = 0; i < strlen(A); i++)
    {        
        if (A[i] == ' '){
            A[i+1] -= 32;
        }
        
    }
    
    printf("%s", A);
}