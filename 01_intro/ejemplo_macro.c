#include<stdio.h>
#define SQUARE(x) x*x
#define SQUARE2(x) (x)*(x)
main(){
    int variable1;
    int variable2;
    int variable3;
    int variable4;
    int variable5;
    int variable6;
    variable1 = SQUARE(3);
    variable2 = SQUARE(variable1);
    variable3 = SQUARE(variable1 + 1);
    printf("variable1 = SQUARE(3):%d\n", variable1);
    printf("variable2 = SQUARE(variable1):%d\n", variable2);
    printf("variable3 = SQUARE(variable1 + 1): %d\n", variable3);
    variable4 = SQUARE2(3);
    variable5 = SQUARE2(variable1);
    variable6 = SQUARE2(variable1 + 1);
    printf("variable4 = SQUARE2(3):%d\n", variable4);
    printf("variable5 = SQUARE2(variable4):%d\n", variable5);
    printf("variable6 = SQUARE2(variable4 + 1): %d\n", variable6);
}

