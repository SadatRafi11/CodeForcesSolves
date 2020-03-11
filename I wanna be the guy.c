#include<stdio.h>
int main()
{
    int n,p,q,i,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=0;

    scanf("%d",&p);
    int a1[p];
    for(i=0; i<p; i++)
    {
        scanf("%d",&a1[i]);
        a[a1[i]-1]=1;
    }

    scanf("%d",&q);
    int a2[q];
    for(i=0; i<q; i++)
    {
        scanf("%d",&a2[i]);
        a[a2[i]-1]=1;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0) count++;
    }
    if(count==0)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");

    return 0;
}
