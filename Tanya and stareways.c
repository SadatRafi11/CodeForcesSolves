#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int a[n],count=0,b[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    j=0;
    for(i=1; i<n; i++)
    {
        if(a[i]==1)
        {
            count++;
            b[j]=a[i-1];
            j++;
        }
    }
    b[count]=a[n-1];
    if(count==0)
    {
        count=1;
        b[0]=a[n-1];
        printf("%d\n", count);
        printf("%d",b[0]);
        return 0;
    }
    printf("%d\n", count+1);
    for(i=0; i<=count; i++)
        printf("%d ",b[i]);

    return 0;
}
