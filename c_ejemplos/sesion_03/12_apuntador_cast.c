#include<stdio.h>
main(){
    int variable, *apuntador;
    void *apuntador2;

    variable = -10;
    apuntador2 = &variable; 

    printf("Valor de apuntador2: %p\n", apuntador2);
    printf("Dirección de memoria variable: %p\n", &variable);

    apuntador = (int *)apuntador2; //cast
    printf("Dereferenced apuntador: *apuntador: %d\n", *apuntador);
}
