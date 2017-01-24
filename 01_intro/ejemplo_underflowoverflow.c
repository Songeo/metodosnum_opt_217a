#include<stdio.h>
#include<float.h>
main(){
	long double var1 = 2.22e-326;
	long double var2 = 1e309;
	printf("valor de var1: %Le\n", var1);
	printf("valor de var2: %Le\n", var2);
}
