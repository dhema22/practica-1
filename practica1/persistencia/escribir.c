int main (int argc, char *argv[]){
    FILE *archivo;
    archivo=fopen("agenta.txt","w");
    fprintf(archivo,"Esto es una prueba de escritura");
    fclose(archivo);
    return 0;
}
