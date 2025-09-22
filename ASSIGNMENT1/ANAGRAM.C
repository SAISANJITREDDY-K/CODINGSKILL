#include <stdio.h>

int main() {
    char x[50], y[50];
    int count[26] = {0}, i, same = 1;

    scanf("%s", x);
    scanf("%s", y);

    for (i = 0; x[i] != '\0'; i++) {
        if (x[i] >= 'A' && x[i] <= 'Z') x[i] += 32;
        if (x[i] >= 'a' && x[i] <= 'z') count[x[i] - 'a']++;
    }
    for (i = 0; y[i] != '\0'; i++) {
        if (y[i] >= 'A' && y[i] <= 'Z') y[i] += 32;
        if (y[i] >= 'a' && y[i] <= 'z') count[y[i] - 'a']--;
    }
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            same = 0;
            break;
        }
    }
    if (same == 1)
        printf("These words are anagrams\n");
    else
        printf("These words are not anagrams\n");

 return 0;
}
