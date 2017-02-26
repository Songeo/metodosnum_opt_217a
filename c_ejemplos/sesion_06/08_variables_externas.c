#include<stdio.h>

int variable_externa = -2; //definición y declaración de variable externa
                            //es global para todas las funciones 
                            //definidas en este programa
int funcion(int var);
extern void funcion2(void);

int main(void){
    int variable_main=10;
    int respuesta;
    
    printf("variable_externa:%d\n", variable_externa);
    
    respuesta = funcion(variable_main);
    
    printf("respuesta:%d\n", respuesta);
    printf("variable_externa:%d\n", variable_externa);
    printf("llamando a funcion2:\n");
    
    funcion2();
    return 0;
}

int funcion(int variable_funcion){
    
    int variable2_funcion=5;
    
    variable_externa = 1;
    
    return (variable_funcion - variable2_funcion)/variable_externa;
}

extern variable_externa;
void funcion2(void){
    printf("variable_externa: funcion 2 %d\n", variable_externa);
}