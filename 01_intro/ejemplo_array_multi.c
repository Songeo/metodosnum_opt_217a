#include<stdio.h>
main(){
	int arreglo_mult[4][3];
	int num_reng, num_cols;
	printf("total %ld\n", sizeof(arreglo_mult));
	printf("total %ld\n", sizeof(arreglo_mult[0]));
	printf("total %ld\n", sizeof(arreglo_mult[0][0]));
	printf("total %ld\n", sizeof(arreglo_mult[0])/sizeof(arreglo_mult[0][0]));
}
