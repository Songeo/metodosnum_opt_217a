#include<stdio.h>
main(){
    int a = -1, b = 4, arreglo[5];
    int *p;
    
    p = &b;
    a = *p;
    *p = -321;
    arreglo[0] = -2;
    p = &arreglo[0];
    
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de arreglo[0]: %d\n", arreglo[0]);
    printf("Valor de *p: %d\n", *p);
    
    printf("Address de *p: %p\n", &p);
    printf("Address de b: %p\n", &b);
    printf("Address de a: %p\n", &a);
    printf("Address de arreglo: %p\n", arreglo[0]);
    
    
    *arreglo = 8;
    printf("arreglo[0]: %d\n", arreglo[0]);
    printf("Dirección de memoria: &arreglo[0]: %p\n", &arreglo[0]);
    printf("Dirección de memoria: arreglo: %p\n", arreglo);
}
