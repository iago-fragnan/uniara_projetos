#include <stdio.h>

#define max_size 10

int main()
{
    float valoresA[max_size];
    float valoresB[max_size];
    int indice = 0;

    while(indice < (max_size*2)) {
        if(indice < max_size){
            float addA = 0;
            printf("Digite o valor A:\n>");
            scanf("%f", &addA);
            valoresA[indice] = addA;
        }
        else {
            float addB = 0;
            printf("Digite o valor B:\n>");
            scanf("%f", &addB);
            valoresB[indice - max_size] = addB;
        }
        indice++;
    }

    for(int i = 0; i < max_size; i++){
        if(valoresA[i] < valoresB[i]){
            printf("%.2f é menor que %.2f, B GANHOU\n", valoresA[i], valoresB[i]);
        }
        else if(valoresA[i] > valoresB[i]){
            printf("%.2f é maior que %.2f, A Ganhou\n", valoresA[i], valoresB[i]);
        }
        else {
            printf("%.2f é igual a %.2f, EMPATE\n", valoresA[i], valoresB[i]);
        }
    }

    return 0;
}
