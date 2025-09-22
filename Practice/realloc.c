#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter elements: ");
        scanf("%d", (a + i));
    }

    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    int m;
    printf("Enter new size: ");
    scanf("%d", &m);

    int *temp = (int *)realloc(a, m * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(a);
        return 1;
    }
    a = temp;

    if (m > n) {
        for (j = n; j < m; j++) {
            printf("Enter elements: ");
            scanf("%d", (a + j));
        }
    }

    for (i = 0; i < m; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    free(a);
    return 0;
}
