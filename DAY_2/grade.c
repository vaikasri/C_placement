#include <stdio.h>
int main() {
    int n1, n2, n3, n4, n5;
    float average;
    printf(" 5 sub marks:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    average = (n1+n2+n3+n4+n5) / 5.0;
    printf("Average: %.2f\n", average);
    if (average >= 90) {
        printf("A\n");
    } else if (average >= 80) {
        printf("B\n");
    } else if (average >= 70) {
        printf("C\n");
    } else if (average >= 60) {
        printf("D\n");
    } else {
        printf("F(Fail)\n");
    }
    return 0;
}