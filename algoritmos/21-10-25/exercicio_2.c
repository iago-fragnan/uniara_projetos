#include <stdio.h>
#define size 30

int main()
{
    int valores[size];

    int pares[size];
    int impares[size];

    int indice = 0;

    while(indice < size) {
        int add = 0;
        printf("Digite um numero: \n> ");
        scanf("%d", &add);
        valores[indice] = add;

        indice++;
    }

    for(int i = 0; i < size; i++){
        if (valores[i] % 2 == 0){
            pares[i] = valores[i];
            impares[i] = 0;
        } else {
            impares[i] = valores[i];
            pares[i] = 0;
        }
    }

    int tam_pares = 0;
    int tam_impares = 0;

    for(int j = 0; j < size; j++){
        if (pares[j] != 0){
            tam_pares++;
        }
        if (impares[j] != 0){
            tam_impares++;
        }
    }

    printf("Total de pares: %d\n", tam_pares);
    printf("Total de impares: %d\n", tam_impares);

    return 0;
}
