#include <stdio.h>
int main() {
    int valor = 0;
    int digitado = 0;
    while(valor > -1000){
        printf("%d\n", valor);
        printf("Digite um valor\n>");
        scanf("%d", &digitado);

        valor -= digitado;
        
    }
    printf("%d\n", valor);
    printf("Finalizado.");

    return 0;
}