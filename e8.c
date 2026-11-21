#include <stdio.h> 
#include <string.h>

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