#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long c = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;

            printf("%lld ", c);
        }
        printf("\n");
    }

    return 0;
}
