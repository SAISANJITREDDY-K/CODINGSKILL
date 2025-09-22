#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;  
        }
    }

    printf("%s\n", str);

    return 0;
}
