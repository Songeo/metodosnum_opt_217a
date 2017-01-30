#include<stdio.h>
main(){
	struct fraccion{
		int numerador;
		char denominador;
	};
	struct fraccion f1, f2;
	f1.numerador = 5;
	f1.denominador = 'E';
	f2=f1;
	printf("struct fraccion num: %d \n", f2.numerador);
	printf("struct fraccion char: %c \n", f2.denominador);
}
