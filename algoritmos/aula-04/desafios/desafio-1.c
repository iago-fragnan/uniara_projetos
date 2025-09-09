// Ao digitar um número n, mostrar os n primeiros números primos.

#include<stdio.h>

int main(){
    int value = 0;
    printf("Digite um numero:\n>");
    scanf("%i", &value);

    for(int i = 2; i * i <= value; i++){
        if(i < 2){
            return;
        }
        if(value%i == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}