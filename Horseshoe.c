#include<stdio.h>
int main()
{
    int i,j,temp,a[4],count=0;
    for(i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<3-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    printf("%d", count);
    return 0;
}
