#include<stdio.h>
int main()
{
    int n,k,x,i,count=0,count2=0,j=0;
    scanf("%d %d", &n, &k);
    int a[n],b[n];
    while(n--)
    {
        int flag=0;
        scanf("%d", &x);
        for(i=0; i<count; i++)
        {
            if(a[i]==x)
                flag=1;
        }
        if(!flag)
        {
            count2++;
            b[j]=count+1;
            j++;
        }
        a[count]=x;
        count++;
    }
    if(k<=count2)
    {
        printf("YES\n");
        for(i=0; i<k; i++)
            printf("%d ", b[i]);
    }
    else
        printf("NO");
    return 0;
}
