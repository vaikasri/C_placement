#include <stdio.h>
int main() {
    int num;
    printf("number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0) {
        printf("divisible\n", num);
    } else {
        printf("NOT divisible\n", num);
    }
    return 0;
}