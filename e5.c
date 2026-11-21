#include <stdio.h> 
#include <string.h>

/* Utilice IA (inteligencia de Alberto). Es un amigo :3 de segundo año de la carrera de matemáticas, me ayudo proporcionandome
 la página 
https://stackoverflow.com/questions/7709452/how-to-read-string-from-keyboard-using-c
para guiarme utilizando "fgets"

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