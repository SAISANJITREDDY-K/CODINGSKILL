#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int *)malloc(5 * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter elements: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}
