#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, y;
    char choice;
    printf("Operator");
    scanf(" %c", &choice);
    printf("Enter  two numbers: ");
    scanf("%d %d", &x, &y);
     switch (choice) {
    case '+':
        printf("%d", x, y, x + y);
        break;
    case '-':
        printf("%d", x, y, x - y);
        break;
    case '*':
        printf("%d", x, y, x * y);
        break;
    case '/':
        printf("%d", x, y, x / y);
        break;
    default:
        printf(" not valid Operator");
    }
     return 0;
}