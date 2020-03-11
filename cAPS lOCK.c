#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,l,cnt=0,cnt2=0;
    gets(a);
    l=strlen(a);

    if(a[0]>='A'&&a[0]<='Z')
    {
        for(i=1;i<l;i++)
        {
            if(a[i]>='A'&&a[i]<='Z') cnt++;
            else break;
        }
        if(cnt==l-1)
        {
            a[0]=a[0]+32;
            for(i=1;i<l;i++){
                a[i]=a[i]+32;
            }
        }

    }
    else if(a[0]>='a'&&a[0]<='z')
    {
        for(i=1;i<l;i++)
        {
            if(a[i]>='A'&&a[i]<='Z') cnt2++;
            else break;
        }
        if(cnt2==l-1)
        {
            a[0]=a[0]-32;
            for(i=1;i<l;i++){
                a[i]=a[i]+32;
            }
        }
    }

    printf("%s",a);
    return 0;
}
