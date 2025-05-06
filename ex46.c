#include <stdio.h>

int main() {
    int codigoUsuario, senha, codigoCorreto, senhaCorreta;

    codigoCorreto = 1234;
    senhaCorreta = 9999;

    printf("Digite o código do usuário: ");
    scanf("%d", &codigoUsuario);

    if (codigoUsuario != codigoCorreto) {
        printf("Usuário inválido!\n");
    } else {
        // Leitura da senha
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != senhaCorreta) {
            printf("Senha incorreta!\n");
        } else {
            printf("Acesso permitido\n");
        }
    }
}