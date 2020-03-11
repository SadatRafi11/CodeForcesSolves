#include<stdio.h>
int main()
{
    int n,m,i=1,temp,sum,flag=0;
    scanf("%d %d", &n, &m);
    int a[n-1];
    n--;
    while(n--)
    {
        scanf("%d", &temp);
        if(i==1)
            sum=i+temp;
        if(i>1&&i==sum)
        {
            sum=i+temp;
        }
        if(sum==m)
                flag=1;
        i++;
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}
