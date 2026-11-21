#include <stdio.h>
/*Definimos dos variables de tipo float. la variable "fahr" tomara valores de 0 a 300, avanzando 20 cada vez. 
La variable "Celcius" dependerá del ciclo while para, a través de la operación definida, cambiar los datos de la variable "fahr"
*/
/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("Fahrenheit vs Celcius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}