#include <stdio.h>

int main(){
    int id_curso = 0, predio_n = 0;
    printf("Digite o código de curso:\n>");
    scanf("%d", &id_curso);
    switch(id_curso){
        case 47:
        predio_n = 1;
        break;
        case 54:
        predio_n = 2;
        break;
        default:
        printf("Entrada proibida!\n");
        return 0;
    }

    printf("Você deve ir ao predio nº %d\n", predio_n);

    return 0;
}