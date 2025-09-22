#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);

    int *p = (int *)malloc(m * n * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter elements: ");
            scanf("%d", (p + i * n + j));
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(p + i * n + j));
        }
        printf("\n");
    }

    free(p);
    return 0;
}
