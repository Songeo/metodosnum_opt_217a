#include<stdio.h>
main(){
    int *arreglo[4]; //arreglo de tamaño 4, en cada entrada se tiene
                    //un apuntador a un tipo de dato int
    int arr_mult[4][2];
    int i;
    int longitud_arreglo = sizeof(arreglo)/sizeof(arreglo[0]);
 
    //Inicializamos el arreglo de apuntadores
    for(i = 0; i < longitud_arreglo; i++)
        arreglo[i] = arr_mult[i]; //recordamos que arr_mult es un arreglo de tamaño 4. En
                                //cada entrada tenemos un arreglo de tamaño 2. 
 
    //Damos valores a arr_mult
    for(i = 0; i < longitud_arreglo; i++)
            arr_mult[i][0] = i;
    printf("Imprimimos el arreglo:\n");
 
    for(i = 0; i < longitud_arreglo; i++){
        printf("arreglo[%d]=%d\n", i, *arreglo[i]);
        //printf("arreglo + %d=%d\n", i, *(arreglo + i));
        }
}