#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int q = (int) sqrt(n);
    if (n != 2 && n % 2 == 0) {
        sum = 1;
    } 
    else if (n != 3 && n % 3 == 0) {
        sum = 1;
    } 
    else {
        for (i = 5; i <= q; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                sum = 1;
                break;
            }
        }
    }

    if (sum == 0) 
        printf("%d is a Prime Number.", n);
    else 
        printf("%d is a Composite Number.", n);

    return 0;
}
