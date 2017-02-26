#include<stdio.h>
main(){
    int arreglo[7];

    printf("Tamaño en bytes de la posición 0 de arreglo: %ld\n", sizeof(arreglo[0]));
    printf("Longitud de arreglo: %ld\n", sizeof(arreglo)/sizeof(arreglo[0]));
    printf("Tamaño en bytes del arreglo: %ld\n", sizeof(arreglo));
    
    int leng;
    leng = sizeof(arreglo);
    printf("Size of: %d\n", leng);
    
    
}
