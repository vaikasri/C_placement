#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;          
    char choice;     
    printf("Operator (+, -, *, /): ");
    scanf(" %c", &choice);  
    printf("Enter: ");
    scanf("%d %d", &x, &y);

    switch (choice) {
        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;

        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;

        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;

        case '/':
            if (y != 0) {
                printf("%d / %d = %d\n", x, y, x / y);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid Operator Input.\n");
    }
   return 0;
}
