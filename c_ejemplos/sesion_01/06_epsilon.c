#include<stdio.h>
main(){
    double variable = 1.0;
    while(1.0+variable != 1.0){ // cuando ya no suma, ie variable == 0
        variable = variable/2.0;
        // printf("Valor de epsilon de la máquina %e\n", variable);
    }

    printf("Valor de epsilon de la máquina %e\n", variable);
}