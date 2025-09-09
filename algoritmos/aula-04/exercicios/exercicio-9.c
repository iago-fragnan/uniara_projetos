// Crie um programa que a partir de uma entrada n mostre um triangulo invertido de n linhas
// alinhado a esquerda
#include <stdio.h>

int main() {
    int alt;
    printf("Digite a  altura do triangulo:\n>");
    scanf("%d", &alt);

    for (int i = alt; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
