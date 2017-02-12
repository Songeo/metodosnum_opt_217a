// Tarea 2
// Sonia Mendizabal 


// 1. Investiga lo que quieren decir las letras EOF. ¿Por qué se debe definir c como int?

// ‘End Of File’: generalmente es entero -1
// Es una macro que define un entero no negativo producto 
// de varias funciones para determinar el final de un archivo. 
// Similar a ctrl + D

// Se debe definir c como integer por que la
// función regresa un valor int. Por lo tanto,
// la comparación debe ser un valor entero. 
// De lo contrario siempre es diferente de EOC y 
// el ciclo no acaba. 

// 2. Modifica main para que sólo se llame una vez a la función getchar()

// 3. Utiliza getchar para escribir un programa que cuente el número de caracteres.
// Al dar enter (salto de línea) el programa termina.

#include <stdio.h>
#include <string.h>

int main(void){
    char str[100], aux;
    int c, n = 0, len;
    
    //while( (c = getchar()) != EOF){   
    while( (c = getchar()) != '\n'){
        str[n] = c;
        //printf("str[%d]: %c\n", n, str[n]); 
        //printf("char ");
        //putchar(c);
        //printf("\n");
        n++;
        
    } 
    len = strlen(str);
    printf("%d\n", len);
    //printf("length total: %d\n", len);
    //printf("count final %d\n", n);
    printf("\n");

return(0);
}
