#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%I64d %I64d", &n, &m);
    long long int a[m],i,t=0;
    for(i=0; i<m; i++)
        scanf("%I64d", &a[i]);
    for(i=1; i<m; i++)
    {
        if(a[i]==a[i-1])
            t=t;
        else if(a[i]>a[i-1]&&a[i]<=n)
            t=t+a[i]-a[i-1];
        else
            t=t+n-a[i-1]+a[i];
    }
    printf("%I64d", t+a[0]-1);
    return 0;
}
