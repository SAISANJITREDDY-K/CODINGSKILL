#include <stdio.h>

int main() {
    int a[100][100], i, j, n, sum = 0;
    printf("Enter no.of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter elements: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix entered by user: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum is: %d", sum);

    return 0;
}
