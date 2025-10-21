#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool loop = true;
    int valores[10];
    int indice = 0;
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    while(indice < tamanho) {
        int add = 0;
        printf("Digite um numero inteiro: \n> ");
        scanf("%d", &add);
        valores[indice] = add;
        indice++;
    }

    int maior = valores[0];
    int menor = valores[0];
    int media = 0;

    for(int i = 0; i < tamanho; i++){
        if (valores[i] > maior){
            maior = valores[i];
        }
        if (valores[i] < menor){
            menor = valores[i];
        }
        media += valores[i];
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %d\n", (media / tamanho));

    return 0;
}