#include<stdio.h>
main(){
    int i,j;
    
    // OPERADOR ++
    i=3;
    printf("Valor de i inicial :%d\n",i); // 3
    i++; //i = i+1;
    printf("Valor de i con i++: %d\n", i); // 4
    i=3;
    //++i; //i = i+1;
    printf("Valor de i con i++: %d\n", ++i); // 4
    
    
    i=12;
    printf("Valor de i antes de dar valor a j: %d\n", i); // 12
    j=i++ + 5;
    printf("Valor de i después de dar valor a j con i++: %d\n", i); // 13
    printf("Valor de j con i++: %d\n", j); // 12 + 5 = 17 : la asignación ++ va al final
    
    i=12;
    printf("Valor de i antes de dar valor a j: %d\n", i); // 12
    j=++i + 5;
    printf("Valor de i después de dar valor a j con ++i: %d\n", i); // 13
    printf("Valor de j con ++i: %d\n", j); // 13 + 5 = 18 : la asignación ++ va primero
    
    // OPERADOR --
    i=0;
    printf("Valor de i antes de dar valor a j: %d\n", i); // 0
    j = i-- + 5;
    printf("Valor de i con i--: %d\n", i);
    printf("Valor de j = i-- + 5: %d\n", j);
    
    i=0;
    printf("Valor de i antes de dar valor a j: %d\n", i);
    j = --i + 5;
    printf("Valor de i con --i: %d\n", i);
    printf("Valor de j = --i + 5: %d\n", j);
}