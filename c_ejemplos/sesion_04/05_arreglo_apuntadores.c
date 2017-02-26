#include<stdio.h>
main(){
    char *arreglo_str[] = {"Hola\n", 
                            "este es un\n",
                            "ejemplo\t",
                            "de un arreglo de apuntadores\n"
                            };
                             
    printf("arreglo_str[0] : %s\n", arreglo_str[0]);
    printf("*arreglo_str : %s\n", *arreglo_str); // recorre cada elemento del arreglo
    printf("**arreglo_str: %c\n", **arreglo_str); // recorre cada caracter dentro de cada elemento
}