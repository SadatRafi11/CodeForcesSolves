#include<stdio.h>
int main()
{
    int n,i,j,t=0,k=0,count=0,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=n;i>1;i--)
    {
        k=0;
        t=0;
        for(j=0;j<=i-2;j++) t=t+a[j];
        for(j=n-1;j>i-2;j--) k=k+a[j];
        count++;
        if(k>t) break;
    }
    if(n==2&&a[0]==a[1]) printf("%d",count+1);
    else if(n==1) printf("1");
    else printf("%d",count);
    return 0;
}
