#include <stdio.h>
int main() {
    int valor = 15;
    int digitado = 0;
    while(digitado != valor){
        printf("Digite o valor %d,\n>", valor);
        scanf("%d", &digitado);
    }

    printf("Finalizado.");

    return 0;
}