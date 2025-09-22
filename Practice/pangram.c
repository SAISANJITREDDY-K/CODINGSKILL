#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPangram(const char *str) {
    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            char c = tolower((unsigned char)str[i]);
            int index = c - 'a';
            if (!seen[index]) {
                seen[index] = true;
                count++;
            }
        }
    }
    return (count == 26);
}

int main() {
    char str[1000];

    printf("Enter a phrase to check : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    if (isPangram(str)) {
        printf("The string is a Pangram.\n");
    } else {
        printf("The string is not a Pangram.\n");
    }

    return 0;
}
