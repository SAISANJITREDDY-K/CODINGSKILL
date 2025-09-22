#include <stdio.h>

int main() {
    int a[100][100], i, j, n, temp;
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

    // Transpose the matrix in-place
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\nTranspose Matrix: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
