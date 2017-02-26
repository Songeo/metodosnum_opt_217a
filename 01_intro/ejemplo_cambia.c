#include<stdio.h>
void cambia(int x, int y);
int main(){
    int a=1; //variable declarada y definida en main
    int b=2; //variable declarada y definida en main
    cambia(a,b);
    printf("valor de a: %d, valor de b: %d\n", a,b);
    return 0;
}
void cambia(int x, int y){
    int temporal;
    temporal = x;
    x=y;
    y=temporal;
}
