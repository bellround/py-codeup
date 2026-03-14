#include <stdio.h>
int RRe(int a)
{
    int j=0;
    while(a!=0)
    {
        j+=a%10;
        a/=10;
    }
    return j;
}
int main()
{
    int a,b;
    int re=0,aa=1;
    scanf("%d %d",&a,&b);
    int l[6001]={0};
    for(int aa=1;aa!=5001;aa+=1)
    {
        int n=0;
        n+=aa;
        n+=RRe(aa);
        l[n]=1;
    }
    for(int i=a;i<=b;i+=1)
    {
        if(l[i]==0)
        {
            re+=i;
        }
    }
    printf("%d",re);
    return 0;
}
