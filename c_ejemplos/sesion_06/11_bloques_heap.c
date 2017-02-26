#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

main(void){
    int *apuntador;

    printf("%ld\n",(long int)(20*1e9));

    apuntador = malloc(sizeof(int)*(long int)(20*1e9));
    assert( apuntador != NULL); //en caso de ser NULL con assert se muestra un mensaje de error y se aborta la
                        //ejecución del programa

    apuntador[0] = 3;
    apuntador[1] = 2;
    apuntador[2] = 5;

    apuntador[(long int)(20*1e9)] = -10;

    printf("apuntador[%d] = %d\t apuntador[%d] = %d\t apuntador[%d] = %d\n",0,apuntador[0],1,apuntador[1],2,apuntador[2]);
    printf("&apuntador[%d] = %p\t &apuntador[%d] = %p\t &apuntador[%d] = %p\n",0,&apuntador[0],1,&apuntador[1],2,&apuntador[2]);
    printf("&apuntador[%ld] = %p\t apuntador[%ld] = %d\n", (long int)(20*1e9), &apuntador[(long int)(20*1e9)], (long int)(20*1e9),apuntador[(long int)(20*1e9)]);

    free(apuntador);
    return 0;
}