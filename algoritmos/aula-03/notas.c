#include<stdlib.h>
#include<stdio.h>

int main(){
    float n1, n2, media;
    printf("Digite as duas notas do aluno. [N1 N2]\n");
    scanf("%f %f", &n1, &n2);
    media = ((n1 + n2) / 2);
    printf("\nMedia: %.2f\n", media);
    if(media >= 6){
        printf("Aluno aprovado!\n");
        return 0;
    }
    if(media < 6 && media >= 3){
        printf("Aluno em exame.\n");
        return 0;
    }
    printf("Aluno reprovado.\n");
    return 0;
}
