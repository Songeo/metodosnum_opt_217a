#include<stdio.h>
//Declaración de la función calcula_epsilon_maquina:
double calcula_epsilon_maquina(double variable); //esta línea se llama prototipo de la función                                    
//Declaración de la función imprime_resultado:
void imprime_resultado(double res);//esta línea se llama prototipo de la función
//definición de la función main:
int main(){
        double epsilon=1.0;
        double resultado;
        resultado=calcula_epsilon_maquina(epsilon);
        imprime_resultado(resultado);
    return 0;
}
//definición de la función imprime_resultado:
void imprime_resultado(double result){
    printf("Valor del epsilon de la máquina: %e\n", result);
}
//definición de la función calcula_epsilon_maquina:
double calcula_epsilon_maquina(double var){ 
    double respuesta;
        while(1.0+var != 1.0)
        var = var/2.0;
        respuesta = var;
        return respuesta;
}
