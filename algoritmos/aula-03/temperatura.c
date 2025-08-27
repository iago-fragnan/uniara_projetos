#include<stdlib.h>
#include<stdio.h>

int main(){
    float farenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &farenheit);
    printf("Farenheit: %.2f\n", farenheit);
    printf("Celsius: %.2f\n", ((farenheit - 32) * 5 / 9));
    return 0;
}