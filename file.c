#include <stdio.h>

#define MAX 100

int main () {

    FILE *f_paco = NULL;

    char basura[MAX];
    char info[MAX];


    f_paco = fopen("perfil.txt", "r");


    if (f_paco == NULL){
        printf("Error al abrir archivo\n");
    } else {
        printf("Archivo abierto correctamente\n");
        printf("\nLeyendo archivos...\n");
        fscanf(f_paco, "%s", basura); //Leer hasta  ':' (termina al encontrar un espacio)
        fgets(info, MAX, f_paco); //Lee hasta el final de la linea (o supera el límite de caracteres de MAX)

        printf("En la primera línea se ha encontrado al Jugador:%s", info);


        fscanf(f_paco, "%s", basura); //Leer hasta  ':' (termina al encontrar un espacio)
        fgets(info, MAX, f_paco); //Lee hasta el final de la linea (o supera el límite de caracteres de MAX)

        printf("En la segunda linea se ha encontrado que el nivel del jugador es de:%s", info);

        fclose(f_paco);
    }
 

    return 0;

}