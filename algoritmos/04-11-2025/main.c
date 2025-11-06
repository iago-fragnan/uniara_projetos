#include <stdio.h>
#define MAX_ALUNOS 20

int main(){
    int index = 0;
    char nomes[MAX_ALUNOS][120];
    int nota1[MAX_ALUNOS];
    int nota2[MAX_ALUNOS];
    int frequencia[MAX_ALUNOS];

    while(index < MAX_ALUNOS){
        printf("Digite o nome do aluno #%d\n>", index);
        fgets(nomes[index], 120, stdin);

        printf("Digite a primeira nota do aluno #%d (0-10)\n>", index);
        scanf("%d", &nota1[index]);

        printf("Digite a segunda nota do aluno #%d (0-10)\n>", index);
        scanf("%d", &nota2[index]);

        printf("Digite a frequencia do aluno #%d (0-100)\n>", index);
        scanf("%d", &frequencia[index]);
        
        index++;
        getchar();
    }

    for(int i = 0; i < MAX_ALUNOS; i++){
        printf("-----------------\n");
        printf("Aluno: %s", nomes[i]);
        printf("Nota 1: %d\n", nota1[i]);
        printf("Nota 2: %d\n", nota2[i]);
        printf("Frequencia: %d\n", frequencia[i]);
        if(frequencia[i] > 75 && (nota1[i]+nota2[i])/2 >= 6){
            printf("Estado: APROVADO\n");
        }
        else{
            printf("Estado: REPROVADO\n");
        }
        printf("-----------------\n");
    }



    return 0;
}