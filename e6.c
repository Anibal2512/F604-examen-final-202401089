#include <stdio.h>
#include <string.h>
/*Defini una variable "oración" de longitud 1024 bytes para que sea más larga. utilizando if verifico la condición que la oración 
sea mayor a 80 caracteres.
*/
int main(void){
    printf("Escriba una oración: ");
    char oracion[1024];
    fgets(oracion, sizeof(oracion), stdin);
    int longitud = strlen(oracion);
    if (longitud>80) {
        printf("%s", oracion);
    }

}
