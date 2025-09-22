#include <stdio.h>

int main() {
    int a = 0, b = 1, c;
    int n;
    printf("Enter no. of terms: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input");
    } 
    else if (n == 0) {
        printf("%d ", a);
    } 
    else if (n == 1) {
        printf("%d %d ", a, b);
    } 
    else {
        printf("%d %d ", a, b);
        for (int i = 2; i < n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
