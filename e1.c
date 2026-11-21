#include <stdio.h> 
//Se define una valible "valor" en la cual se tomara una entrada que el usuario ingresará. El codigo lo escanerá y dará una
//salida si el valor ingresado es de tipo entero

int main(void) {
    printf("Ingrese un valor entero: ");
    int valor;
    scanf("%d", &valor);
    printf("Salida: %d\n", valor);
}