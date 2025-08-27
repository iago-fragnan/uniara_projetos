#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valor, subtotal, desconto, troco;
    char metodo;
    bool isValid = false;

    printf("Digite o valor total da compra:\n> ");
    scanf("%f", &valor);

    while (!isValid)
    {
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
            isValid = true;
            desconto = (valor * 0.03);
            break;
        case 'D': // cartão débito
            isValid = true;
            desconto = (valor * 0.05);
            break;
        case 'P': // Pix
        case 'M': // Dinheiro
            isValid = true;
            desconto = (valor * 0.1);
            if (metodo != 'P')
            {
                printf("Deseja calcular troco?\n> ");
                scanf("%f", &troco);
                subtotal = valor - desconto;
                if (subtotal < troco)
                {
                    troco = troco - subtotal;
                }
            }
            break;
        default:
            printf("Método de pagamento inválido.\n");
        }
    }
    subtotal = valor - desconto;
    printf("======================\n");
    printf("Compra: %.2f\n", valor);
    printf("Desconto: %.2f (%c)\n", desconto, metodo);
    printf("Total: %.2f\n", subtotal);
    if (troco > 0)
    {
        printf("Troco: %.2f\n", troco);
    }

    return 0;
}