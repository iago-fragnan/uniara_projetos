#include <stdio.h>
// Prova 24/09/2025 - Marcelo Torres
// Iago Fragnan - RA: 04725-058

int main(){
    int contador = 0;
    int maior_numero = 0;
    int menor_numero = 0;
    int media_aritmetica = 0;
    int num_digitado = 0;

    while(contador < 8){
        printf("Digite um numero:\n>");
        scanf("%d", &num_digitado);

        if(num_digitado >= maior_numero){
            maior_numero = num_digitado;
        }
        if(num_digitado < menor_numero){
            menor_numero = num_digitado;
        }

        contador++;
    }

    if(num_digitado != 0 && contador != 0){
        media_aritmetica = (num_digitado / contador);
    }

    printf("Maior numero: %d\n", maior_numero);
    printf("Menor numero: %d\n", menor_numero);
    printf("Quantida de numeros lidos: %d\n", contador);
    printf("Média aritmética: %d\n", media_aritmetica);

    return 0;
}