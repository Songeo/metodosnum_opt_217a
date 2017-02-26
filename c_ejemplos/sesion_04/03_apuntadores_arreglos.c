#include<stdio.h>
main(){
    int *arreglo[4]; //arreglo de tamaño 4, en cada entrada se tiene
                    //un apuntador a un tipo de dato int
    int arr_mult[4][2];
    int i, j;
    int longitud_arreglo = sizeof(arreglo)/sizeof(arreglo[0]);
    int num_columnas = sizeof(arr_mult[0])/sizeof(arr_mult[0][0]);
    
    
    printf("num_columnas: %d\n", num_columnas);
    
    
    //Inicializamos el arreglo de apuntadores
    for(i=0;i<longitud_arreglo;i++)
        arreglo[i] = arr_mult[i];//recordamos que arr_mult es un arreglo de tamaño 4. En
                                //cada entrada tenemos un arreglo de tamaño 2. 
    
    
    //Damos valores a arreglo usando dereference
    for(i=0;i<longitud_arreglo;i++)
        for(j=0;j<num_columnas;j++)
            *(arreglo[i]+j) = i+j;
    
    
    printf("Imprimimos arr_mult:\n");
    
    for(i=0;i<longitud_arreglo;i++){
        for(j=0;j<num_columnas;j++)
            printf("arr_mult[%d][%d] = %d\n", i, j, arr_mult[i][j]);
        printf("\n");
    }
    
    printf("Imprimimos a arreglo:\n");
    
    for(i=0;i<longitud_arreglo;i++){
        for(j=0;j<num_columnas;j++)
            printf("*(arreglo[%d] + %d) = %d\n", i, j, *(arr_mult[i] + j));
        printf("\n");
    }
}
