#include "feifood.h"
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    while (1) {
        printf("Bem vindo ao FEIFood\n");
        printf("1- Cadastrar-se\n");
        printf("2- Fazer Login\n");
        printf("3- Sair\n");
        int op = 0;
        printf("Escolha a opção desejada: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                char usuario[255];
                printf("Digite seu usuario: ");
                scanf("%s", usuario);
                cadastrar_usuario(usuario);
                case 2:
                login_usuario();
                case 3:
                printf("Sair\n");
                break;
                default:
                printf("Opção invalida, tente novamente\n");
                printf("\n");
                return main();

        }
        return 0;
    }

}