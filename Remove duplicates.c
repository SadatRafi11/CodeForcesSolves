#include<stdio.h>
int main()
{
    int n,i,j,k,flag;
    scanf("%d", &n);
    int a[n],b[n];
    for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
    b[0]=a[n-1];
    k=1;
    for(i=n-2; i>=0; i--)
    {
        flag=0;
        for(j=0; j<k; j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
            else
            {
                b[k]=a[i];
                k++;
                break;
            }
        }
        if(flag)
    }
    printf("%d\n", k);
    for(i=k-1; i>=0; i--)
        printf("%d ", b[i]);
    return 0;
}
