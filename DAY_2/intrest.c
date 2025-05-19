#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simpleInterest);
    return 0;
}