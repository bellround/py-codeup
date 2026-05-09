#include <stdio.h>
long long int memo[100010] = {0, 1, 2, 4};
long long int ge(int n, int a)
{
    memo[a] = (memo[a - 1] + memo[a - 2] + memo[a - 3]) % 1000;
    if (n == a)
    {
        return memo[n];
    }
    return ge(n, a + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 3)
    {
        ge(n, 4);
    }
    printf("%lld", memo[n] % 1000);
    return 0;
}
