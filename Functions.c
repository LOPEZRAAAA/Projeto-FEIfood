#include <stdio.h>

void cadastrar_usuario()(char usuario[255]) {
    FILE *f = fopen("usuario.txt", "w");
    fprintf(f, "%s", usuario);
    printf("Usuario cadastrado com sucesso");




}
