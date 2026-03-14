#include <stdio.h>
int main()
{
    int a[3],d;
    for(int i=0;i!=3;i+=1){
        scanf("%d",&a[i]);
    }
    for(int i=0;i!=2;i+=1){
        for(int j=i+1;j!=3;j+=1){
            if(a[i]>a[j]){
                d=a[j];
                a[j]=a[i];
                a[i]=d;
            }
        }
    }
    for(int i=0;i!=3;i++){printf("%d ",a[i]);}
    return 0;
}
