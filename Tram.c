#include<stdio.h>
int main()
{
    int n,i,j,t=0,k=0;
    scanf("%d",&n);
    int a[n][2];

    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        t=t+(a[i][1]-a[i][0]);
        if(t>k) k=t;
    }

    printf("%d",k);

    return 0;
}
