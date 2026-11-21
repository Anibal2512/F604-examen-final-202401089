#include <stdio.h>

int main(void) {
    printf("Ingrese un nombre: ");
    char nombre[256];
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola :3 %s", nombre);
}