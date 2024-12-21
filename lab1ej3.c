#include <stdio.h>
int main(){
    float Celsius;
    float grados_farenheit;
    scanf("%.2f",&Celsius);
    grados_farenheit = Celsius*9/5 +32;
    printf("Los grados farenheit son: %.2f", grados_farenheit);
    return 0;
}