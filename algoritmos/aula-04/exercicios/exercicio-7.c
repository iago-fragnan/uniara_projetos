// Crie um programa que a partir de uma entrada n mostre um triangulo de n linhas alinhado a
// direita.
#include <stdio.h>

int main() {
    int alt = 0;
    printf("Digite a altura do triangulo:\n>");
    scanf("%d", &alt);

    for (int i = 1; i <= alt; i++) {
        for (int j = 1; j <= alt - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
