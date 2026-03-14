#include <stdio.h>
struct wi
{
    int a;
    int r;
};

int main()
{
    int n,li[101]={0};
    scanf("%d",&n);
    struct wi po[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&po[i].a);
    }
    for (int i=0;i<n;i++)
    {
        int r=1;
        for (int j=0;j<n;j++)
        {
            if (po[j].a > po[i].a)
            {
                r++;
            }
        }
        po[i].r = r;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",po[i].a,po[i].r);
    }
    return 0;
}
