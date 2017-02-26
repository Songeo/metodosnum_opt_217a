#include<stdio.h>
void main(){

    int *p; //definición y declaración de un apuntador hacia una 
            //variable tipo int.
    int variable = 5;            
    
    p = &variable; //inicializamos al apuntador p
    
    printf("Total de bytes para apuntador: %ld\n", sizeof(p));
    printf("Total de bytes para variable: %ld\n", sizeof(variable));
    
    
    printf("Address de variable int &: %p\n", &variable);
    printf("Address de apuntador p: %p\n", p);
    printf("Apuntador: %d\n", p);
    printf("variable: %d\n", variable);
    
    printf("Accedemos al objeto con *p: %d\n", *p);
    
}