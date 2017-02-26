#include<stdio.h>
main(){
    int arreglo_multidimensional[4][3];
    int numero_renglones, numero_columnas;
    
    printf("Total de bytes para arreglo_multidimensional :%ld\n", sizeof(arreglo_multidimensional)); // (4*3) * 4 bytes = 48
    printf("Total de bytes para arreglo_multidimensional[0]: %ld\n",sizeof(arreglo_multidimensional[0])); // 3 celdas * 4 bytes = 12
    printf("Total de bytes para arreglo_multidimensional[0][0]: %ld\n", sizeof(arreglo_multidimensional[0][0])); // 4 bytes por celda
}