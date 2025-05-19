#include <stdio.h>

int main() {
    float length, width, area, perimeter;
    printf("length of the rec: ");
    scanf("%f", &length);
    printf("width of the rec: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}