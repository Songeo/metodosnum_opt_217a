#include<stdio.h>
void cambia(int *x, int *y); //utilizamos apuntadores
int main(){
    int a=1;
    int b=2;
    cambia(&a,&b); //utilizamos las direcciones de memoria de a,b
    printf("valor de a: %d, valor de b: %d\n", a,b);
    return 0;
}
void cambia(int *x, int *y){
    int temporal;
    temporal = *x;
    *x=*y;
    *y=temporal;
}
