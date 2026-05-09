#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            a[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf("%lld ",a[i][0]);
        }
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
            printf("%lld ",a[i][j]);
        }
        printf("1\n");
    }
    return 0;
}
