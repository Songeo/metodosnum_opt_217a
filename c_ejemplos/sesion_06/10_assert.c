#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

main(void){
    int *apuntador;
    apuntador = malloc(sizeof(int)*10);
    assert( apuntador != NULL); //en caso de ser NULL con assert se muestra un mensaje de error y se aborta la
                        //ejecución del programa
    apuntador[0] = 3;
    apuntador[1] = 2;
    apuntador[2] = 5;

    printf("apuntador[%d] = %d\t apuntador[%d] = %d\t apuntador[%d] = %d\n",0,apuntador[0],1,apuntador[1],2,apuntador[2]);
    printf("&apuntador[%d] = %p\t &apuntador[%d] = %p\t &apuntador[%d] = %p\n",0,&apuntador[0],1,&apuntador[1],2,&apuntador[2]);

    printf("size de apuntador: %ld\n", sizeof(apuntador));

    free(apuntador);

    return 0;
}
