#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("[%d]\n",a - (a % 10000));
    a %= 10000;
    printf("[%d]\n",a - (a % 1000));
    a %= 1000;
    printf("[%d]\n",a - (a % 100));
    a %= 100;
    printf("[%d]\n",a - (a % 10));
    a %= 10;
    printf("[%d]\n",a - (a % 1));
    return 0;
}