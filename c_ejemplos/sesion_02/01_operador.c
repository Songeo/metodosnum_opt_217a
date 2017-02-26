#include<stdio.h>
main(){
    double variable =1;
    printf("variable %f\n", variable);
    variable /=2;//se realiza:variable = variable /2;
    printf("variable: %0.4e\n",variable);
    printf("variable: %0.4f\n",variable);
}