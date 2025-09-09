// Ao digitar um número n, mostrar os n primeiros números da sequencia de Fibonnaci (0, 1, 1, 2,
// 3, 5, 8, 13, 21, 34, 55, 89, 144) .

#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor:\n>");
    scanf("%d", &valor);

    int x = 0;
    int y = 1; 
    int fib = 0;

    int valor_ant = 0;
    int valor_calc = 0;

    if (valor >= 1) {
        printf("%d\n", x);
    }
    if (valor >= 2) {
        printf("%d\n", y);
    }

    for (int i = 3; i <= valor; i++) {
        //printf("L: %d | X: %d | Y: %d |\n", i, x, y);
        int r = x + y;
        printf("%d\n", r);
        x = y;
        y = r;
    }
    return 0;
}