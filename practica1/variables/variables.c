#include <stdio.h>
int main(int argc, char *argv[]){
    int edad =45;
    float altura =1.84;
    //el texto en C es con char's
    char inicial ='b';
    //array de caracteres
    char nombre[]="Adhemar";
    printf("mi edad es de: %i", edad);
    printf("\n mi altura es de %f metros",altura);
    printf("\n la inicial de mi apellido es la %c",inicial);
    printf("\n mi nombre es %s", nombre);
     return 0;   
}