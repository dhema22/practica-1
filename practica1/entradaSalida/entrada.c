#include <stdio.h>
int main(int argc, char *argv[]){
    printf("Elige un número entre 0 y 9:");
    char numero = getchar();
    printf("el caracter seleccionado es %c", numero);
 return 0;   
}