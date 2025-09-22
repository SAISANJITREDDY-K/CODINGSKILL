#include <stdio.h>
#include <math.h>

int is_Square(long long a) {
    long long s = (long long) sqrt(a);
    if (s * s == a) 
        return 1;
    else 
        return 0;
}

int check_number(long long n) {
    long long a, b;
    a = 5 * n * n + 4;
    b = 5 * n * n - 4;
    if (is_Square(a) || is_Square(b)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    long long n;
    printf("Enter a number to check whether the number is in fibonacci series or not: ");
    scanf("%lld", &n);

    int res = check_number(n);

    if (res == 1)
        printf("The number %lld exists in the fibonacci series.", n);
    else
        printf("The number %lld not exists in the fibonacci series.", n);

    return 0;
}
