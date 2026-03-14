#include <stdio.h>
#include <string.h>
struct test
{
    char name[200];
    int jum;
};
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    struct test po[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&po[i].name);
        scanf("%d", &po[i].jum);
    }
    char q[200];
    for (int i = 0; i < m; i++)
    {
        int a = 0;
        scanf("%s", &q);
        for (int j = 0; j < n; j++)
        {
            if (strcmp(po[j].name, q) == 0)
            {
                a += po[j].jum;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}
