#include<stdio.h>
#include<math.h>
main(){
	double x_8 = 0.71428571;
	double x_5 = truncf(x_8*1e5)/1e5;
	double y_8 = 0.33333333;
	double y_5 = truncf(y_8*1e5)/1e5;
	double u = 0.714251;
	double v = 98765.9;
	double w = .111111e-4;
	
	// Ejercicio 1 (Impar)
	double res1_a = x_8-y_8;
	double res1_b = truncf((x_5-y_5)*1e5)/1e5;
	double res1_c = fabs (res1_a-res1_b);
	double res1_d = fabs(res1_c)/fabs(res1_a);
	printf("X-Y:  %1.8f, %1.5f, %1.8f, %1.8f\n", res1_a, res1_b, res1_c, res1_d);

	// Ejercicio 2 (Impar)
	double res2_a = x_8/y_8;
	double res2_b = truncf((x_5/y_5)*1e5)/1e5;
	double res2_c = fabs (res2_a-res2_b);
	double res2_d = fabs(res2_c)/fabs(res2_a);
	printf("X/Y: %1.8f, %1.5f, %1.8f, %1.8f\n", res2_a, res2_b, res2_c, res2_d);

	// Ejercicio 3 (Impar)
	double res3_a = (x_8-u)/w;
	double res3_b = truncf(((x_5-u)/w)*1e5)/1e5;
	double res3_c = fabs (res3_a-res3_b);
	double res3_d = fabs(res3_c)/fabs(res3_a);
	printf("(X-U)/W: %1.8f, %1.5f, %1.8f, %1.8f\n", res3_a, res3_b, res3_c, res3_d);

}
