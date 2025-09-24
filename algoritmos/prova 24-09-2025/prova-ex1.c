#include <stdio.h>
// Prova 24/09/2025 - Marcelo Torres
// Iago Fragnan - RA: 04725-058

// Valores acima de R$1.000 - 10% de desconto
// Valores superior a R$5.000 - 15% de desconto
// Valores superior a R$10.000 - 20% de desconto

int main(){
    float valor = 0;
    float desconto = 0.0;
    float a_pagar = 0.0;
    printf("Digite o valor da compra:\n>");
    scanf("%f", &valor);

    if(valor >= 1000 && valor < 5000){
        desconto = (valor * 0.1);
    }
    if(valor >= 5000 && valor < 10000){
        desconto = (valor * 0.15f);
    }
    if(valor >= 10000){
        desconto = (valor * 0.2f);
    }
    a_pagar = (valor - desconto);

    printf("Subtotal: %0.2f\n", valor);
    printf("Desconto: %0.2f\n", desconto);
    printf("A pagar: %0.2f\n", a_pagar);
    
    return 0;
}