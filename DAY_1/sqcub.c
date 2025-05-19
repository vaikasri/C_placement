#include <stdio.h>

int main() {
    int x, square, cube;

    printf("Enter: ");
    scanf("%d", &x);

    square = x * x;
    cube = x * x * x;
    printf("Square %d  %d\n", x, square);
    printf("Cube  %d  %d\n", x, cube);
    return 0;
}