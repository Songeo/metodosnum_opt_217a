#include<stdio.h>
main(){
	int i,j;
	i = 3;
	printf("valor inicial i: %d\n", i);
	i++; //  i = i + 1
	printf("valor de i con i++: %d\n", i);
	// reiniciamos i
	i = 3;
	++i; // i =  1 + i
	printf("valor de i con ++i: %d\n", i);
	// nuevo i
	i = 12;
	printf("Valor de i antes de j: %d\n", i);
	j = i++ + 5;
	printf("Valor de i despues de j con i++: %d\n", i);
	printf("Valor de j: %d\n", j);
	// reiniciamos i 
	i = 12;
	printf("Valor de i antes de j: %d\n", i);
	j = ++i + 5;
	printf("Valor de i despues de j con ++i: %d\n", i);
	printf("Valor de j: %d\n", j);
}
