#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[1000];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (!isVowel(str[i])) {
            i++;
        }
        else if (!isVowel(str[j])) {
            j--;
        }
        else {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    printf("String after swapping vowels: %s\n", str);

    return 0;
}
