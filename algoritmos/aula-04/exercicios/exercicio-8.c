// Crie um programa que a partir de uma entrada n mostre um triangulo invertido de n linhas.

#include <stdio.h>

int main(){
    int alt = 0;
    printf("Digite a altura do triangulo:\n>");
    scanf("%i", &alt); // 5

    //altura
    for (int j = alt; j > 0; j--){
        //linha
        for (int k = 0; k < j; k++){
            printf("*");
        }
        printf("*\n");
    }
    printf("*");

    return 0;
}