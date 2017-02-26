#include<stdio.h>

main(){
    int arreglo1[5]; //declaración y definición
    int arreglo2[3] = {0}; //inicializamos con el valor de cero al arreglo2
    int i;
    //inicialización del arreglo1:
    for(i = 0; i < 5; i++ ){
        arreglo1[i] = i;
    }
    //Imprimimos al arreglo1

    for(i=0;i<5;i++){
        printf("arreglo1[%d] = %d\n",i,arreglo1[i]);
    }   

    printf("----------------\n");
    //Imprimimos al arreglo2:
    for(i=0;i<3;i++){
        printf("arreglo2[%d] = %d\n",i,arreglo2[i]);
    }   

}