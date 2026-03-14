#include <stdio.h>
struct wi
{
    int c;
    int s;
    int n;
};
int main()
{
    int n,k[200]={0},kk=0,nnn=3;
    scanf("%d",&n);
    struct wi po[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&po[i].c,&po[i].s,&po[i].n);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(po[i].n<po[j].n)
            {
                struct wi a=po[i];
                po[i]=po[j];
                po[j]=a;
            }
        }
    }
    while(nnn!=0)
    {
        if(k[po[kk].c]<2)
        {
            printf("%d %d\n",po[kk].c,po[kk].s);
            k[po[kk].c]+=1;
            nnn-=1;
        }
        kk+=1;
    }
    return 0;
}
