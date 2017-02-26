#include<stdio.h>
#include<math.h>
main(){
    double x_8 = 3.71428571;
    double y_8 = 3.33333333;
    double x_5;
    double y_5;
    double variable_double = -3.0;
    //función: truncf
    printf("Valor x_8 con truncf: %1.5f\n", truncf(x_8));
    x_5 = truncf(x_5*1e5)*1e-5;
    printf("Valor x_5: %e\n", x_5);
    printf("Valor absoluto: %f\n", fabs(variable_double));
}