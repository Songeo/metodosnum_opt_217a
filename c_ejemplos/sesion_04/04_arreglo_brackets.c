#include<stdio.h>
main(){
    int (*apuntador)[2]; //apuntador a un arreglo de tamaño 2
    int arr_mult[3][2];

    apuntador = arr_mult +1 ;

    arr_mult[1][0] = -4;
    arr_mult[1][1] = 2;

    printf("(*apuntador)[0] :%d\n", (*apuntador)[0]);
    printf("(*apuntador)[1] : %d\n", (*apuntador)[1]);
}