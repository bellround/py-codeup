#include <stdio.h>
int main()
{
    int y,x;
    scanf("%d %d",&y,&x);
    int a[y+1][x+1],no[x+1];
    for(int i=1;i<=y;i+=1){
        for(int j=1;j<=x;j+=1){
            scanf("%d",&a[i][j]);
            no[j]=0;
            a[i][0]=0;
        }
    }
    for(int i=1;i<=y;i+=1){
        for(int j=1;j<=x;j+=1){
            no[j]+=a[i][j];
            a[i][j]+=no[j]-a[i][j]+a[i][j-1];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
