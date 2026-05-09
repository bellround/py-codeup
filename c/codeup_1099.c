#include <stdio.h>
int main()
{
    int a[11][11]={0},x=2,y=2;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i!=-1;i+=1){
        if(a[y][x]==2){
            a[y][x]=9;
            break;}
        else if(a[y+1][x]==1 && a[y][x+1]==1){
            a[y][x]=9;
            break;}
        else{
            a[y][x]=9;
            if(a[y][x+1]!=1){
                x+=1;
            }
            else{
                y+=1;
            }
        }
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
