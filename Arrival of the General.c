#include<stdio.h>
int main()
{
    int i,n,k=0,l,count=0,count1=0,t1,t2;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>k)
            k=a[i];
    }
    l=100;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<l)
            l=a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            t1=i;
            break;
        }
        count++;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==l)
        {
            t2=i;
            break;
        }
        count1++;
    }
    if(t1>t2)
        printf("%d",count+count1-1);
    else
        printf("%d",count+count1);

    return 0;
}
