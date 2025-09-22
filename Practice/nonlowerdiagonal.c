#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    int a[10][10];

    printf("Enter Rows: ");
    scanf("%d", &r);
    printf("Enter Columns: ");
    scanf("%d", &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (j > i) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum is : %d", sum);

    return 0;
}
