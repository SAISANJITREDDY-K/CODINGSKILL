#include <stdio.h>

int main() {
    int n, i, a[100], target, index = -1;
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Element does not present.");
    } else {
        printf("Element is at - %d", index);
    }

    return 0;
}
