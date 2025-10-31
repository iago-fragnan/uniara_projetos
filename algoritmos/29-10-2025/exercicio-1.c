#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define quant 50

int main(){

    int jogadas[50];
    int contador = 0;

    int quantidades_iguais[50] = {0};
srand(time(NULL));
    while(contador < quant){
        int soma = ((rand() % 6) + 1) + ((rand() % 6) + 1);
        jogadas[contador] = soma;
        printf("[%d] - %d\n", contador, soma);
        quantidades_iguais[soma]++;
        contador++;
    }

    printf("\n=====================\nSairam nos dados\n");
    printf("o nº 1 saiu %d vezes\n", quantidades_iguais[1]);
    printf("o nº 3 saiu %d vezes\n", quantidades_iguais[3]);
    printf("o nº 2 saiu %d vezes\n", quantidades_iguais[2]);
    printf("o nº 4 saiu %d vezes\n", quantidades_iguais[4]);
    printf("o nº 5 saiu %d vezes\n", quantidades_iguais[5]);
    printf("o nº 6 saiu %d vezes\n", quantidades_iguais[6]);
    printf("o nº 7 saiu %d vezes\n", quantidades_iguais[7]);
    printf("o nº 8 saiu %d vezes\n", quantidades_iguais[8]);
    printf("o nº 9 saiu %d vezes\n", quantidades_iguais[9]);
    printf("o nº 10 saiu  %d vezes\n", quantidades_iguais[10]);
    printf("o nº 11 saiu  %d vezes\n=====================\n", quantidades_iguais[11]);

    float chance_sete = (float)quantidades_iguais[7]/quant * 100;
    float chance_onze = (float)quantidades_iguais[11]/quant * 100;
    printf("A chance de sair 7 é de %.2f%\n", chance_sete);
    printf("A chance de sair 11 é de %.2f%\n", chance_onze);

    return 0;
}