#include<stdio.h>
int main()
{
    long long int s,n,i,j,flag=0,temp;
    scanf("%I64d %I64d", &s, &n);
    long long int a[n][2];
    for(i=0; i<n; i++)
        scanf("%I64d %I64d", &a[i][0], &a[i][1]);
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                temp=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=temp;

                temp=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(s>a[i][0])
        {
            s=s+a[i][1];
        }
        else flag=1;
    }
    if(flag) printf("NO");
    else printf("YES");

    return 0;
}
