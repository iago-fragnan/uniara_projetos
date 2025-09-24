#include <stdio.h>

// Prova 24/09/2025 - Marcelo Torres
// Iago Fragnan - RA: 04725-058

// imprimir todos numeros pares
// entre 80 e 908 e imprimir a quantidade pares impressos

int main(){
    int valor_min = 80;
    int valor_max = 908;
    int contador = 0;

    for(int i = valor_min; i <= valor_max; i++){
        if(i%2 == 0){
            printf("%d é par\n", i);
            contador++;
        }
    }

    printf("Quantidade de números pares impressos: %d\n", contador);

    return 0;
}