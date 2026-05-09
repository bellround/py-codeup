#include <stdio.h>
long long int memo[100] = {1};

long long int hap(int n, int a)
{
    memo[a] = memo[a - 1] * 2 + 1;
    if (a == n)
    {
        return memo[n];
    }
    return hap(n, a + 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", hap(n, 2));
    return 0;
}
