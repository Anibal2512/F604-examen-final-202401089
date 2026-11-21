#include <stdio.h>
#include <string.h>


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