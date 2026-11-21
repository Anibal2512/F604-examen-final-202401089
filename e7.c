#include <stdio.h>
#include <string.h>
/*Defino una función que me tomará la longitud de mi oración. Con el ciclo for lo utilizo para intercambiar el primer caracter 
por el último, y lo hago para idx menor  a la mitad de la longitud de la oración, para evitar repeticiones. 
Utilizo fgets como el ejercicio anterior.
*/

void reverse(char*str){
    int len = strlen(str);

    for (int idx = 0; idx < len/2; ++idx){
        char temp = str[idx];
        str[idx] = str[len-idx-1];
        str[len-idx-1]=temp;
    }
    
}

int main(void) {
    char oracion[256];
    fgets(oracion,256,stdin);
    reverse(oracion);
    printf("La oración invertida es: %s\n", oracion);
}