#include <stdio.h>
int main() {
    int valor = 0;
    printf("Digite um numero:>\n");
    scanf("%d", &valor);

    int contador = 0;
    while(contador <= valor){
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}