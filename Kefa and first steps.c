#include<stdio.h>
int main()
{
    int n,i,count,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    i=0;
    while(n)
    {
        count=0;
        while(1)
        {
            if(a[i+1]>=a[i]) count++;
            else{
                count=count+1;
                break;
            }
            if(i==(n-1)) break;
            i++;
        }
        if(count>k) k=count;
        if(i==(n-1)) break;
        i++;
    }
    printf("%d",k);
    return 0;
}
