#include <stdio.h>

struct carro {
    int id;
    char nome[64];
    char marca[64];
    char placa[12];
    int ano;
    float valor;
};

int main() {
    struct carro meuCarro;

    printf("Digite o ID do carro:\n> ");
    scanf("%d", &meuCarro.id);
    getchar(); // clear newline

    printf("Digite o nome do carro:\n> ");
    fgets(meuCarro.nome, sizeof(meuCarro.nome), stdin);

    printf("Digite a marca do carro:\n> ");
    fgets(meuCarro.marca, sizeof(meuCarro.marca), stdin);

    printf("Digite a placa do carro:\n> ");
    fgets(meuCarro.placa, sizeof(meuCarro.placa), stdin);

    printf("Digite o ano do carro:\n> ");
    scanf("%d", &meuCarro.ano);

    printf("Digite o valor do carro:\n> ");
    scanf("%f", &meuCarro.valor);

    printf("\n--- Dados do Carro ---\n");
    printf("ID: %d\n", meuCarro.id);
    printf("Nome: %s", meuCarro.nome);
    printf("Marca: %s", meuCarro.marca);
    printf("Placa: %s", meuCarro.placa);
    printf("Ano: %d\n", meuCarro.ano);
    printf("Valor: %.2f\n", meuCarro.valor);

    return 0;
}
