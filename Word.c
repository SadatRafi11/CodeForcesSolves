#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,count=0;
    char s[101];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            count++;
    }
    if(count>(l/2))
    {
        for(i=0;i<l;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
        }
    }
    else
    {
        for(i=0;i<l;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
    return 0;
}
