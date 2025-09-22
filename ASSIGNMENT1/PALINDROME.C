#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    char s[100], t[100];
    int n = 0, i, j;

    scanf("%s", s);

    while (s[n] != '\0') n++;

    for (i = 0; i < n; i++) t[i] = s[n - i - 1];
    t[n] = '\0';

    int dp[101][101];
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int lps = dp[n][n];
    int deletions = n - lps;

    printf("No of deletions to be done : %d\n", deletions);
    return 0;
}
