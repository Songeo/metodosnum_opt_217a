#include<stdio.h>
main(){
    int variable1 = -5;
    int variable2;

    switch(variable1){
        case 0:
            variable2 = -variable1; // 5
            printf("Primer caso se cumplió, variable2=%d\n",variable2);
            // break; // para que la función ya no se cumpla
        case -10:
            variable2 = variable1; // -5
            printf("Segundo caso se cumplió, variable2=%d\n",variable2);
        default:
        variable2 = variable1*10; // -5 *10 = 50
        printf("Caso default se cumplió, variable2=%d\n",variable2);

    }
}
