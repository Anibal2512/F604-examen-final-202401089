#include <stdio.h>
/*Se realizó el mismo proceso que en el ejercio e3. Cambiando la variable celcius. Y ahora la valiable fahr dependerá del ciclo while
*/
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