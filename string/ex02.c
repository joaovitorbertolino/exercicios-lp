#include <stdio.h> 
#include <string.h>

int main(){
    char A[30], B[30], C[60];

    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    A[strlen(A) - 1 ] = '\0';
    B[strlen(B) - 1 ] = '\0';

    if (strlen(A) >= strlen(B)){
        for (int i = 0; i < strlen(A); i++){
            C[i] = A[i];
            C[i+1] = B[i];
            printf("%c%c", C[i], C[i+1]);
        }
    }
    else if(strlen(A) <= strlen(B)){
            for (int i = 0; i < strlen(B); i++){
            C[i] = A[i];
            C[i+1] = B[i];
            printf("%c%c", C[i], C[i+1]);
        }
    }
    
}