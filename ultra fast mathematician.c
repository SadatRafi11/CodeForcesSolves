#include<stdio.h>
#include<string.h>
int main()
{
    char a1[101],a2[101];
    int i,l;
    gets(a1);
    gets(a2);
    l=strlen(a1);
    for(i=0;i<l;i++)
    {
        if(a1[i]==a2[i])
            a1[i]='0';
        else
            a1[i]='1';
    }
    printf("%s",a1);
    return 0;
}
