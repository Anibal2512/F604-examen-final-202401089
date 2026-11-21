#include <stdio.h> 
#include <string.h>

/* Utilice IA (inteligencia de Alberto). Es un amigo :3 de segundo año de la carrera de matemáticas, me ayudo proporcionandome
 la página 
https://stackoverflow.com/questions/7709452/how-to-read-string-from-keyboard-using-c
para guiarme utilizando "fgets"

En el  código defini una función espacio, la cual me ayuda a verificar si el caracter es un espacio. Utilizando fgets evaluamos 
la varialbe oración, su longitud en bytes, desde el standart input del teclado. El ciclo while me permitio leer la oración 
en reversa, para así, cuando se detecte un caracter que no es un espacio, para el bucle de while y se le disminuye la longitud de
la variable. 

*/

int espacio(char ch){
    if (ch==' ') {
        return 1;    
    
    }
    else if (ch=='\t') {
        return 1;
    }
    else if (ch=='\n') {
        return 1;
    }
    else {
        return 0;
    }
}
int main(void) {
    printf("Ingrese una oración: ");
    char oracion[256];
   fgets(oracion, sizeof(oracion), stdin);
   int longitud = strlen(oracion);
  // printf("%s",oracion);
   //printf("%d",longitud);

   while (longitud >=0) {
   // putchar(oracion[longitud]);
    longitud = longitud-1;
    char ch=oracion[longitud];
    if (!espacio(ch)) {
        break;
    }
    
    
   }
printf("%.*s", longitud+1, oracion);


}