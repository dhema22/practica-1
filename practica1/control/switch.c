#include <stdio.h>
int main(int argc, char *argv[]){
    int dia=1;
    switch (dia)
    {
    case 1:
        printf("lunes");
        break;
    case 2:
        printf("martes");
        break;
    case 3:
        printf("miercoles");
        break;
    case 4:
        printf("jueves");
        break;
    case 5:
        printf("viernes"); 
        break;  
    case 6:
        printf("sabado");
        break;
    default:
        printf("domingo");
        break;
    }
    return 0;   
}