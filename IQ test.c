#include<stdio.h>
int main()
{
    int i,n,k,count1=0,count2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2) count1++;
        else count2++;
    }
    if(count1>count2)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                k=i+1;
        }
    }
    else if(count2>count1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2)
                k=i+1;
        }
    }
    printf("%d",k);
    return 0;
}
