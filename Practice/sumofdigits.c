#include <stdio.h>

int sum_of_digit(int n, int r) {
    int sum;
    if (n % 9 == 0 || r % 9 == 0) {
        sum = 9;
    } else {
        n = n % 9;
        sum = n * (r % 9);
    }
    return sum;
}

int main() {
    int n, i, sum;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Enter no. of times: ");
    scanf("%d", &i);

    sum = sum_of_digit(n, i);
    printf("%d", sum);

    return 0;
}
