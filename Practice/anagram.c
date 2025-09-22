#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int compare_chars(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int Anagram(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        s1[i] = tolower((unsigned char)s1[i]);
        s2[i] = tolower((unsigned char)s2[i]);
    }

    qsort(s1, len1, sizeof(char), compare_chars);
    qsort(s2, len2, sizeof(char), compare_chars);

    return strcmp(s1, s2) == 0;
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove trailing newline

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin
