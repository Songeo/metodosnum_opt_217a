#include<stdio.h>
main(){
	char var_char;
	int var_int1, var_int2;
	double var_double1, var_double2, var_double3;

	//Inicializacion de variables:
	var_int1 = 3;
	var_int2 = -1;
	var_double1 = 5.0;
	var_double2 = -3.0;
	var_double3 = .678928173628194798239273928;
	var_int1  = var_int1/var_int2;
	printf("Variable entera dividida por: -1 %d\n", var_int1);
	var_double1 = var_double1/var_double2;
	printf("Variable double1 entre double2: %1.9f\n", var_double1);
	//Nota exponencial
	printf("Variable double 1 notacion exponencial: %1.9e\n", var_double1);
	printf("Variable double 3:  %e\n", var_double3);
	printf("Variable double 3 todos los decimales: %1.15e\n", var_double3);
}
