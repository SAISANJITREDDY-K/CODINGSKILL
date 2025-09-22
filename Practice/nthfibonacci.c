#include <stdio.h>

int Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main() {
    int n, res;
    printf("Enter a Number: ");
    scanf("%d", &n);
    res = Fibonacci(n);
    printf("%d", res);

    return 0;
}
