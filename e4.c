#include <stdio.h>

int main(void){
    int lower = 0; 
    int upper = 300;
    int step = 20;
    float celsius = lower;
    
    printf("Celcius vs Fahrenheit\n");
    while (celsius<= upper) {
        float fahr = (9.0/5.0) * (celsius)+32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}