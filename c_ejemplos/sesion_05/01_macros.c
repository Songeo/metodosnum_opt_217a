#include<stdio.h>
#define MAX(A,B) ((A) > (B) ? (A) : (B))
main(){
    int variable1=15;
    int variable2=8;
    int variable3;
    
    printf("variable1: %d\n", variable1);
    printf("variable2: %d\n", variable2);
    
    variable3=MAX(++variable1,++variable2);
    
    printf("variable3=MAX(++variable1,++variable2) :%d\n",variable3);
    
    printf("variable1: %d\n", variable1);
    printf("variable2: %d\n", variable2);
    
    
    // No tiene que ver con el orden ++i o i++
    variable3=MAX(variable1++,variable2++);
    
    printf("variable3=MAX(variable1++,variable2++) :%d\n",variable3);
    printf("variable1: %d\n", variable1);
    printf("variable2: %d\n", variable2);
    
    
    // Los argumentos son evaluados dos veces: para la prueba y para el resultado.

}

