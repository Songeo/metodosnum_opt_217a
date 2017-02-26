#include<stdio.h>
main(){
    int *apuntador1, *apuntador2;
    int variable = -5;

    apuntador1 = &variable;
    apuntador2 = apuntador1;
    *apuntador2 = 10;

    printf("Valor de variable: %d\n", variable);
    printf("Valor de variable: %p\n", &variable);
    printf("Valor de apuntador 1: %d\n", *apuntador1);
    printf("Valor de apuntador 1: %p\n", &apuntador1);    
    printf("Valor de apuntador 2: %d\n", *apuntador2);
    printf("Valor de apuntador 2: %p\n", &apuntador2);    
    
}