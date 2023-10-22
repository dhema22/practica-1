#include <stdio.h>
int main(int argc, char *argv[]){
    //usando el && si una de las condiciones no es cierta el resultado sera falso
    printf("dime si es cierto %i ",(4>3 && 2>0));
    printf("dime si es cierto %i ",(4>3 && 2>2));

    //con || es un or y solo falta que una sea cierta una condicion para cumplirlse, si ninguna lo es da false
    printf("dime si es cierto %i ",(4>3 || 2>0 || 2>2));
    printf("dime si es cierto %i ",(4>4 || 2>2 || 1>1));
    return 0;   
}