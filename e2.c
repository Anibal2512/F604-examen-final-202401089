#include <stdio.h>
//Se define una variable "nombre" con una longitud de 256 bytes que el usuario ingresará. El codigo lo escaneará y emitirá la misma salida
int main(void) {
    printf("Ingrese un nombre: ");
    char nombre[256];
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola :3 %s", nombre);
}