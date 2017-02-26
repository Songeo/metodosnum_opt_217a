#include<stdio.h>
#include<string.h>

main(){
    char string[]="Hola, este es un string";
    char string2[100]; // máximo 100 elementos o characteres
    int longitud_string;
    int i=0;
    char *string3; // apuntador
    
    printf("*string: %c\n", *string); // imprime la posicion 0
    printf("*(string+1): %c\n", *(string+1)); // imprime la posicion  0+1 = 1

    strcpy(string2, string);
    printf("string: %s\n", string);
    printf("string2 copia de 2: %s\n", string2);

    longitud_string = strlen(string);
    printf("Longitud de string: %d\n",longitud_string);

    longitud_string = strlen(string2);
    printf("Longitud de string2: %d\n",longitud_string);
    
    printf("-----------------\n");
    printf("Último caracter \n");


    longitud_string = strlen(string3);

    string3 = string;
    for(i = 0; i < longitud_string; i++)
        string3++;
    if(*string3) 
        printf("Valor de *string3: %c\n", *string2);
    else
        printf("Caracter nulo\n");
        
    // if(*string3) evalúa si *string2 es diferente de nulo
    // similar a if(*string2 == '\0')
    
    
}