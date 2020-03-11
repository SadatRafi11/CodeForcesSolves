#include<stdio.h>
int main()
{
    int n,i,j,k,l,flag=0;
    scanf("%d",&n);
    for(i=4,j=n-4;i<=n/2;i++,j--)
    {
        for(k=2;k<i;k++)
        {
            if(i%k==0)
            {
                for(l=2;l<j;l++)
                {
                    if(j%l==0)
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag!=0)
                break;
        }
        if(flag!=0)
            break;
    }

    printf("%d %d",i,j);

    return 0;
}
