#include<stdio.h>
int main()
{
    int n,i,flag=0,count=0;
    scanf("%d", &n);
    char a[n+1];
    scanf("%s", a);
    if(n==1&&a[0]=='0')
        printf("No");
    else if(n==1&&a[0]=='1')
        printf("Yes");
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if((a[i]=='1')&&(a[i+1]=='1'))
            {
                flag=1;
                break;
            }
            else if((a[i]=='0')&&(a[i+1]=='0')&&(a[i+2]=='0'))
            {
                flag=1;
                break;
            }
            else if((a[0]=='0'&&a[1]=='0')||(a[n-2]=='0'&&a[n-1]=='0'))
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("No");
        else
            printf("Yes");
    }
    return 0;
}
