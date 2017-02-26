#include<stdio.h>
#include<stdlib.h> //para malloc y free

int main(void){

    int *apuntador; //variable definida en el stack
    //llamamos a malloc, la cual aloja un bloque en la memoria heap. Como malloc regresa un apuntador,
    //guardamos este apuntador en el valor de p:

    apuntador = malloc(sizeof(int));
    //podemos imprimir la dirección de memoria del bloque en la memoria heap:
    printf("address de apuntador: %p\n", apuntador);
    printf("size de apuntador: %ld\n", sizeof(apuntador));
    

    *apuntador = 42; //damos valor al bloque de memoria en la memoria heap.
    //imprimimos el valor guardado en el bloque de memoria:

    printf("valor de *apuntador:%d\n", *apuntador);
    //desalojamos el bloque de memoria en la memoria heap con free:

    free(apuntador);
    return 0;
}