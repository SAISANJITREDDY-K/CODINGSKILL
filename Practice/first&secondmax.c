#include <stdio.h>

int main() {
    int i, j, a[100], n, Max1, Max2;
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1]) {
        Max1 = a[0];
        Max2 = a[1];
    } else {
        Max1 = a[1];
        Max2 = a[0];
    }

    for (j = 2; j < n; j++) {
        if (Max1 < a[j]) {
            Max2 = Max1;
            Max1 = a[j];
        } else if (Max2 < a[j]) {
            Max2 = a[j];
        }
    }

    printf("%d %d", Max1, Max2);

    return 0;
}
