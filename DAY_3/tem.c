#include <stdio.h>

int main() {
    int temp;

    printf(" temperature  ");
    scanf("%d", &temp);

    if (temp < 10) {
        printf("jacket.\n");
    } else if (temp >= 10 && temp <= 20) {
        printf("sweater.\n");
    } else {
        printf("t-shirt.\n");
    }
   return 0;
}