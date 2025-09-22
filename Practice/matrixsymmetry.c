#include <stdio.h>

int main() {
    int a[100][100], i, j, n, count = 0;
    printf("Enter no. of rows: ");
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
            if (a[i][j] == a[j][i]) {
                count++;
            }
        }
    }

    if (count == n * n) {
        printf("It is symmetric.");
    } else {
        printf("It is not symmetric");
    }

    return 0;
}
