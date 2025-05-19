#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("vowel.\n", ch);
        } else {
            printf("consonant.\n", ch);
        }
    } else {
        printf("not an alphabet\n", ch);
    }
    return 0;
}
