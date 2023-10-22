#include <stdio.h>
int main(int argc, char *argv[]){
    char* agenda[10][4];
    agenda[0][0]="adhemar";
    agenda[0][1]="quinteiro";
    agenda[0][2]="18393";
    agenda[0][3]="prueba@prueba";
    printf("mi nombre es: %s", agenda[0][0]);
    printf(" apellido: %s ", agenda[0][1]);
    printf(" el numero es: %s ", agenda[0][2]);
    printf(" el correo es:  %s", agenda[0][3]);
 return 0;   
}