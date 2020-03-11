#include<stdio.h>

int main()
{
    int n,i,count=0,count2=0;
    scanf("%d", &n);
    char a[n+1];
    scanf("%s", a);
    for(i=0; i<n; i++)
    {
        if(a[i]=='x')
        {
            count++;
            if(a[i+1]!='x')
            {
                if(count>=3)
                {
                    count2=count2+(count-2);
                    count=0;
                }
                else
                    count=0;
            }
        }
    }
    printf("%d", count2);
    return 0;
}
