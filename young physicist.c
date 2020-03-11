#include<stdio.h>
int main()
{
    int i,j,n,t=0,count=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<3;j++){
        for(i=0;i<n;i++){
            t=t+a[i][j];
        }
        if(t==0) count++;
    }
    if(count==3) printf("YES");
    else printf("NO");
    return 0;
}
