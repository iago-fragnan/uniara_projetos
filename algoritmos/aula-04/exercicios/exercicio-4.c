// Crie um programa que mostre todos os impares de 1 até 100
#include <stdio.h>

int main(){
    for(int i = 1; i <= 100; i++){
        if(i%2 == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}