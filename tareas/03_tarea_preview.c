// Tarea 3




#include<stdio.h>
    int arrmult[5][10] = {{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10},
                          {-11, -12, -13, -14, -15, -16, -17, -18, -19, -20},
                          {-21, -22, -23, -24, -25, -26, -27, -28, -29, -30},
                          {-31, -32, -33, -34, -35, -36, -37, -38, -39, -40},
                          {-41, -42, -43, -44, -45, -46, -47, -48, -49, -50}};
                          
int imprime_arreglo(int *row, int *arreglo){
    int pos;
    
    for(pos = 0; pos < row; pos++){
        if ( (pos % 2) == 1 ){
            printf("posicion %d valor: %d\n", pos, arreglo[pos]);     
        }  
    } 
    return(0);
}

int imprime_posicion(int *row, int *arreglo){
    int pos;
    
    for(pos = 0; pos < row; pos++){
        if ( (pos % 2) == 1 ){
            printf("posicion %d dirección: %p\n", pos, &arreglo[pos]);     
        }  
    } 
    return(0);
}

int main(){
    int len;    
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    //double arrmult[][] = {{-1, -2, -3, -4, -5},{-1, -2, -3, -4, -5}};

    
    len = sizeof(arr)/sizeof(arr[0]);
    printf("length %d\n", len);
        
    imprime_arreglo(len, arr);
    imprime_posicion(len, arr);
    
return(0);    
}
    



int imprime_arreglo(int *row, int *col, int *arreglo){
    int pos;
    
    if(col == 0){
        for(pos = 0; pos < row; pos++){
            if ( (pos % 2) == 1 ){
                printf("posicion %d valor: %d\n", pos, arreglo[pos]);
                }
            }
        }
        
    
    return(0);
}




#include<stdio.h>

int imprime_arreglo(int *row, int *arreglo){
    int pos, i, j;
    
    if(col == 0){
        for(pos = 0; pos < row; pos++){
            if ( (pos % 2) == 1 ){
                printf("posicion %d valor: %d\n", pos, *(arreglo+pos));
                }
            }
    }else{
        //int **arreglom = arreglo;
        for(i = 0; i < (row+1); i++){
            printf("row %d\n", i);
            //if ( (i % 2) == 1 ){
                for(j = 0; j < col; j++){
                    //printf("column %d\n", j);
                    //if ( (j % 2) == 1 ){
                        printf("posicion %d + %d = %d es valor: %d\n", i, j, i+j, *(arreglo + i + j) );
                        //}
                    }
            //}
        }
    }
    return(0);
}


#include<stdio.h>

int print_array(int *elems, int *arreglo){
    int pos, i, j;
    
    for(pos = 0; pos < elems; pos++){
        if ( (pos % 2) == 1 ){
                printf("posicion %d valor: %d\n", pos, *(arreglo+pos));
            }
        }
    return(0);
}

int print_pos(int *elems, int *arreglo){
    int pos, i, j;
    
    for(pos = 0; pos < elems; pos++){
        if ( (pos % 2) == 1 ){
                printf("posicion %d dirección: %p\n", pos, *(arreglo+pos));     
            }
        }
    return(0);
}


int main(){
    int len, row, column, lenmulti;    
    int arrmult[2][3] = {{-1, -2, -3},
                          {-4, -5, -6},
                          {-7, -8, -9}};
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    
    
    // dimensiones
    len = sizeof(arr)/sizeof(arr[0]);
    row = sizeof(arrmult) / sizeof(arrmult[0]);
    column = sizeof(arrmult[0])/sizeof(arrmult[0][0]);
    lenmulti = row*column;
    
    //Funciones
    printf("Arreglo de longitud %d \n", len);
    print_array(len, arr);
    print_pos(len, arr);
    
    printf("\n");
    printf("Arreglo de renlones %d y columnas %d\n", row, column);
    print_array(lenmulti, arrmult);
    print_pos(lenmulti, arrmult);
    
return(0);    
}
    