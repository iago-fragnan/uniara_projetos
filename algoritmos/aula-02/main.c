#include <stdio.h>

int main(void) {
    char secao, coluna;
    float valor, pagar, troco;
    printf("======================\n");
    printf("Produtos:\n");
    printf("[A1] - Ruffles R$3,50 | [A2] - Doritos R$3,20\n");
    printf("[B1] - Prestigio R$1,99 | [B2] Galak R$1,99\n");
    printf("[C1] - Niquito R$1,99 | [C2] Snickers R$7,99\n");
    printf("[D1] - Pepsi R$1,99 | [D2] KitKat R$3,99\n");
    printf("[E1] - Coca-Cola R$1,99 | [E2] Guarana R$1,99\n");
    printf("======================\n");
    scanf("%c%c", &secao, &coluna);
    switch (secao) {
        case 'A':
            if (coluna == '1') {
                valor = 3.5;
            }
            if (coluna == '2') {
                valor = 3.2;
            }
            break;
        case 'B':
            if (coluna == '1') {
                valor = 2.2;
            }
            if (coluna == '2') {
                valor = 1.99;
            }
            break;
        case 'C':
            if (coluna == '1') {
                valor = 1.99;
            }
            if (coluna == '2') {
                valor = 7.99;
            }
            break;
        case 'D':
            if (coluna == '1') {
                valor = 1.99;
            }
            if (coluna == '2') {
                valor = 3.99;
            }
            break;
        case 'E':
            if (coluna == '1') {
                valor = 1.99;
            }
            if (coluna == '2') {
                valor = 1.99;
            }
            break;
        default:
            printf("Produto inválido.\n");
            break;
    }
    printf("Sub-total: R$%.02f\n", valor);
    int inserir;
    printf("Digite qual nota vai inserir: (Faltam R$%.02f)\n", (valor - pagar));
    scanf("%d", &inserir);
    switch (inserir) {
        case 2:
            pagar = pagar + 2;
            break;
        case 5:
            pagar = pagar + 5;
            break;
        case 10:
            pagar = pagar + 10;
            break;
        case 20:
            pagar = pagar + 20;
            break;
        case 50:
            pagar = pagar + 50;
            break;
        case 100:
            pagar = pagar + 100;
            break;
        case 200:
            pagar = pagar + 200;
            break;
        default:
            printf("Nota invalida");
            break;
    }
    printf("Sub-total: R$%.02f\n", pagar);
    if (valor > pagar) {
        troco = valor - pagar;
        printf("Valor inserido insuficiente faltam R$%0.2f\n", troco);
    }
    else {
        troco = pagar - valor;
        printf("troco: R$%.02f\n", troco);
    }
    printf("Valor pago: R$%.02f\n", pagar);


    return 0;
}
