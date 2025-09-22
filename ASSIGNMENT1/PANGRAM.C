#include <stdio.h>

int main() {
    char str[200];
    int alpha[26] = {0}, i, all = 1;

    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') alpha[str[i] - 'A'] = 1;
        if (str[i] >= 'a' && str[i] <= 'z') alpha[str[i] - 'a'] = 1;
    }
    for (i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            all = 0;
            break;
        }
    }
    if (all == 1)
        printf("This phrase is a pangram\n");
    else
        printf("This phrase is not a pangram\n");

    return 0;
}
