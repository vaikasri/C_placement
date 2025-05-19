#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Tem in Fah= %.2f\n", fahrenheit);
    return 0;
}