#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valor, subtotal, troco;
    char metodo;

    printf("Digite o valor total da compra:\n> ");
    scanf("%f", &valor);

    printf("Qual sera o metodo de pagamento?\n");
    printf("[C] Cartão de Crédito\n");
    printf("[D] Cartão de Débito\n");
    printf("[P] Pix\n");
    printf("[M] Dinheiro\n");
    printf(">");
    scanf(" %c", &metodo);

    switch (metodo)
    {
    case 'C': // cartão crédito
        subtotal = valor - (valor * 0.03);
        break;
    case 'D': // cartão débito
        subtotal = valor - (valor * 0.05);
        break;
    case 'P': // Pix
    case 'M': // Dinheiro
        subtotal = valor - (valor * 0.1);
        printf("Troco?\n> ");
        scanf("%f", &troco);
        if (subtotal < troco)
        {
            troco = troco - subtotal;
        }
        break;
    default:
        printf("Método de pagamento inválido.\n");
    }

    printf("Subtotal: %.2f\n", subtotal);
    if (troco > 0)
    {
        printf("Troco: %.2f\n", troco);
    }

    return 0;
}