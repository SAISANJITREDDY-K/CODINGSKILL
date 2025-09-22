#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    int q = (int) sqrt(n);
    for (i = 2; i <= q; i++) {
        if (n % i == 0 && i != n / i) {
            sum += (i + n / i);
        }
    }

    if (sum == n) {
        printf("%d is a perfect number.", n);
    } else {
        printf("Not a perfect number.");
    }

    return 0;
}
