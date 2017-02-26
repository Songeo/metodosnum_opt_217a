#include<stdio.h>
main(){
    int arreglo[3];
    int *apuntador;
 
    apuntador = arreglo;
    printf("Dirección de memoria de arreglo: %p\n", arreglo);
    printf("Dirección de memoria de apuntador: %p\n", apuntador);
 
    apuntador = apuntador + 1;
    printf("Dirección de memoria de apuntador+=1 : %p\n", apuntador);
 
    apuntador = apuntador -1;
    printf("Dirección de memoria de apuntador-=1: %p\n", apuntador);
    
    printf("Dirección de memoria de arreglo: %p\n", arreglo);
}