#include<stdio.h>

main(){

    struct fraccion{
        int numerador;
        char caracter;
    }; //declaramos el nombre del struct con dos miembros: un int y un char

    struct fraccion f; //definimos y declaramos f: el struct fraccion
    f.numerador = -5; //inicializamos al miembro int
    f.caracter = 'E'; //inicializamos al miembro caracter
    printf("struct fraccion numerador: %d\n", f.numerador);
    printf("scruct fraccion caracter: %c\n", f.caracter);
}