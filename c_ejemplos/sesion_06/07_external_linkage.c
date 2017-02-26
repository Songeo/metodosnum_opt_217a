#include<stdio.h>


int funcion(int var); //declaración de funcion
extern int variable_externa; //declaración de variable_externa

int variable_externa = -2; //definición, declaración e inicialización de variable externa
                            //es global para todas las funciones 
                            //definidas en este programa


int main(void){
    int variable_main=10;
    int respuesta;
    
    printf("variable_externa:%d\n", variable_externa);
    
    respuesta=funcion(variable_main);
    printf("respuesta:%d\n", respuesta);
    printf("variable_externa:%d\n", variable_externa);
    
    return 0;
}

//definición de funcion:
int funcion(int variable_funcion){
    int variable2_funcion=5;
    variable_externa = 1;
    
    printf("variable_externa funcion:%d\n", variable_externa);
    return (variable_funcion - variable2_funcion)/variable_externa;
}