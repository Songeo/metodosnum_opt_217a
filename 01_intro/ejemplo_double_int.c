#include<stdio.h>
main(){
	int var_int;
	double var_double = -5191.485;
	printf("variable double = %0.5f\n", var_double);
	var_int = var_double;
	// al igualar la variable double a int la vuelve int
	printf("variable int = %d\n", var_int);
	// sumar double vuelve double el resultado
	printf("int + double= %f\n", (var_int + var_double));

}
