#include <stdio.h>
#include <stdbool.h>

int main(){

    int indice = 0;
    float notas[100];

    bool isRunning = true;

    while(isRunning){

        printf("Menu:\n");
        printf("===================\n");
        printf(" [1] Adicionar Nota\n");
        printf(" [2] Alterar Nota\n");
        printf(" [3] Remover Nota\n");
        printf(" [4] Listar Notas\n");
        printf(" [5] Mostrar nota por indice\n");
        printf(" [6] Sair\n");
        printf("===================\n>");
        int opcao;
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite a nota a ser adicionada:\n>");
                float nota;
                scanf("%f", &notas[indice]);
                indice++;
            break;
            case 2:
                printf("Digite o indice da nota a ser alterada:\n>");
                int indiceAlterar;
                scanf("%d", &indiceAlterar);
                if(indiceAlterar >= 0 && indiceAlterar < indice){
                    printf("Digite a nova nota:\n>");
                    float novaNota;
                    scanf("%f", &novaNota);
                    notas[indiceAlterar] = novaNota;
                } else {
                    printf("Indice invalido\n");
                }
            break;
            case 3:
                printf("Digite o indice da nota a ser removida:\n>");
                int indiceRemover;
                scanf("%d", &indiceRemover);
                if(indiceRemover >= 0 && indiceRemover < indice){
                    for(int i = indiceRemover; i < indice - 1; i++){
                        notas[i] = notas[i + 1];
                    }
                    indice--;
                } else {
                    printf("Indice invalido\n");
                }
            break;
            case 4:
                printf("Notas cadastradas:\n");
                for(int i = 0; i < indice; i++){
                    printf(" [%d] %.2f\n", i, notas[i]);
                }
            break;
            case 5:
                printf("Digite o indice da nota a ser exibida:\n>");
                int indiceExibir;
                scanf("%d", &indiceExibir);
                if(indiceExibir >= 0 && indiceExibir < indice){
                    printf("Nota no indice %d: %.2f\n", indiceExibir, notas[indiceExibir]);
                } 
            break;
            case 6:
                isRunning = false;
            break;
            default:
                printf("Opcao invalida!\n");
            break;
        }

    }



    return 0;
}