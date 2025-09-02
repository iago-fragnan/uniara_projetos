// Crie um programa que some 10 números digitados pelo usuario.
#include<stdio.h>

int main(){
    int soma = 0;
    for(int i = 0; i <= 9; i++){
        int valor = 0;
        printf("Digite o numero para somar:\n>");
        scanf("%d", &valor);
        soma += valor;
    }
    printf("A soma dos valores é: %d\n", soma);
    return 0;
}