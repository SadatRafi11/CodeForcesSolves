#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,temp,n,m;
    char a[101];
    gets(a);
    l=strlen(a);
    while(1)
    {
        n=0;
        m=0;
        for(j=0;j<l-2;j=j+2)
        {
            if(a[j]>a[j+2])
            {
                temp=a[j];
                a[j]=a[j+2];
                a[j+2]=temp;
            }
        }
        for(j=0;j<l-2;j=j+2)
        {
            if(a[j]<=a[j+2]) n++;
            m++;
        }
        if(n==m) break;

    }
    printf("%s",a);
}
