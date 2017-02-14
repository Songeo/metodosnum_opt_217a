#include<stdio.h>
#define VALOR_ABS_DIFERENCIA(x,y) ((x)>(y) ? (x)-(y):(y)-(x))
main(){
        int variable1=-10;
        int variable2=-5;
        int variable3=1;
        printf("variable1:%d\n",variable1);
        printf("variable2:%d\n",variable2);
        printf("variable3:%d\n",variable3);
        printf("abs(variable1-variable2):%d\n",VALOR_ABS_DIFERENCIA(variable1, variable2));
        printf("abs(variable3-abs(variable1-variable2)):%d\n",VALOR_ABS_DIFERENCIA(variable3,VALOR_ABS_DIFERENCIA(variable1, variable2)));
}
