// Crie um programa que a partir de uma entrada n mostre um triangulo de n linhas.
#include<stdio.h>

int main(){
    int alt = 0;
    printf("Digite a altura do triangulo:\n>");
    scanf("%i", &alt);
    for(int i = 0; i <= alt; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("*\n");

    }
    return 0;
}