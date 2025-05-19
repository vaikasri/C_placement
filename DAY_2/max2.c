#include <stdio.h>

int main() {
    int x, y;
     printf("Enter 2 num");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("Max %d\n", x);
    } else if (y > x) {
        printf("Max%d\n", y);
    } 
    return 0;
}