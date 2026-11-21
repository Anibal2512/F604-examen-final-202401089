#include <stdio.h> 
#include <string.h>
/*estaba pensando en utilizar la misma funcion que en el ejercio 5 para ir detectando los caracteres que fueran espacios.
Solo que ya no supe como seguirlo realizando, me quede trabado. Y ya no me dio el tiempo. 
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