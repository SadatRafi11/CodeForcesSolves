#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++){
        for (j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        if(a[i][0]<a[i][1]-1){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}
