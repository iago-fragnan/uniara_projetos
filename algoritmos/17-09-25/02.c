#include <stdio.h>

int main() {
    int contador = 0;
    char resposta = 's';

    while (resposta == 's' || resposta == 'S') {
        printf("Corinthians é o melhor time do mundo? (S/n)\n>");
        scanf(" %c", &resposta);
        contador++;
    }

    printf("Quantidade de vezes repetido: %d\n", contador);
    return 0;
}
