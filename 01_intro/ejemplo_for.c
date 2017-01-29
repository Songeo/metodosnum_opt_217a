#include<stdio.h>
#define limite_inferior 0
#define limite_superior 5

main(){
	int contador;
	double var1 = 3485.7, var2 = -4.01;
	printf("var1  = %4.2f \t var2 = %1.2f \n", var1, var2);
	printf("limite inferior: %d \n", limite_inferior);
	printf("limite superior: %d \n", limite_superior);
	printf("iterac \t var1 \t var2 \t Division var1/var2 \n");
	for(contador = limite_inferior; contador < limite_superior; contador = contador + 1){
		printf(" %d \t %4.2f \t  %1.2f \t %1.3f \n", contador, var1, var2, var1/var2);
	}
}
