#include<stdio.h>
int main()
{
    int c,n,k,i,j,flag=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=k;
    c=k;
    if(a[k-1]!=0)
    {
        while(1)
        {
            if(a[k-1]==a[k])
            {
                j++;
            }
            else break;
            k++;
        }

        printf("%d",j);
    }

    else if(a[c-1]==0)
    {
        for(i=c-1;a[i]!=0;i--)
            {
                if(i==0){
                    flag++;
                    break;}
            }
        if(flag==0)printf("%d",i+1);
        else if(flag==1) printf("%d",0);
    }
    return 0;
}
