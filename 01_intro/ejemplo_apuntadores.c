#include<stdio.h>
main(){
	int *p; // int * p o int* p
	int c;
	printf("total de bytes para apuntador: %ld\n", sizeof(p));
	printf("total de bytes para variable: %ld\n", sizeof(c));
	printf("adress: %p\n", &c);
	printf("adress: %p\n", &p);
}
