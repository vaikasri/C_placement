#include <stdio.h>
int main() {
    int year;
    printf("year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d leap year.\n", year);
    } else {
        printf("%d not a leap year.\n", year);
    }
    return 0;
}