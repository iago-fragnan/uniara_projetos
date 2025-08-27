#include<stdlib.h>
#include<stdio.h>

int main(){
    float l1, l2, l3;
    printf("Digite os comprimentos dos tres lados do triangulo. [L1 L2 L3]\n");
    scanf("%f %f %f", &l1, &l2, &l3);
    
    if(l1 + l2 > l3 || l1 + l3 > l2 || l2 + l3 > l1){
        if(l1 == l2 && l2 == l3){
            printf("E um triangulo equilatero.\n");
            return 0;
        }
        if(l1 == l2 || l1 == l3 || l2 == l3){
            printf("E triangulo isosceles.\n");
            return 0;
        }
        if(l1 != l2 && l1 != l3 && l2 != l3){
            printf("E um triangulo escaleno\n");
            return 0;
        }
    }
    printf("Nao e possivel formar um triangulo\n");
    return 0;
}