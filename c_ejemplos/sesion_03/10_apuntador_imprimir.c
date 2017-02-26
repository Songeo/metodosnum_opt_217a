#include<stdio.h>
main(){
    int arreglo[4] = {-3, 5, 7, 8};
    int i;
 
 
    for(i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++)
        printf("posición %d, memoria: %p\n", i, arreglo+i);
 
    printf("-----------------\n");
 
    for(i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++)
        printf("arreglo[%d]=%d\n", i, arreglo[i]);
 
    printf("-----------------\n");

 
    for(i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++)
        printf("arreglo[%d]=%d\n", i, *(arreglo + i));
}