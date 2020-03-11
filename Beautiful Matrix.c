#include<stdio.h>
int main()
{
    int i,j,x,y;
    int a[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++) scanf("%d",&a[i][j]);
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            if(a[i][j]==1){
                x=i;
                y=j;
                break;
        }
    }

    if(x>2) x=x-2;
    else x=2-x;
    if(y>2) y=y-2;
    else y=2-y;
    printf("%d",x+y);

    return 0;
}
