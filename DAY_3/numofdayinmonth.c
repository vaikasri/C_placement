#include <stdio.h>
int main() {
    int month, year;
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    printf("Enter ");
    scanf("%d", &month);

    printf("year");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("not valid\n");
        return 1;
    }
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days[1] = 29; 
        }
    }
    printf("\n%s %d has %d days.\n", months[month - 1], year, days[month - 1]);
    return 0;
}