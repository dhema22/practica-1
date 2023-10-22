#include <stdio.h>

int sumar(){
    int operador1=3;
    int operador2=17;
    int suma=operador1+operador2;
    return suma;
}

int resta(int operador1,int operador2){
    int op1=operador1;
    int op2=operador2;
    int resta=op1-op2;
    return resta;
}
int main (int argc, char *argv[]){
    printf("La suma es %i: \n", sumar());
    printf("La resta es: %i \n",resta(5,2));
    return 0;
}

