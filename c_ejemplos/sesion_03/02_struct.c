#include<stdio.h>

main(){

    struct fraccion{
        int numerador;
        char caracter;
    }; //declaramos el nombre del struct con dos miembros: un int y un char

    struct fraccion f1,f2; //definimos y declaramos f: el struct fraccion
    f1.numerador = -5; //inicializamos al miembro int
    f1.caracter = 'E'; //inicializamos al miembro caracter
    f2 = f1;
    printf("struct fraccion numerador: %d\n", f1.numerador);
    printf("scruct fraccion caracter: %c\n", f1.caracter);
    
    printf("struct fraccion numerador: %d\n", f2.numerador);
    printf("scruct fraccion caracter: %c\n", f2.caracter);
}
