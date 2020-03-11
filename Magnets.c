#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k,count=0;
    scanf("%d",&n);
    char ch[3];
    gets(ch);
    for(i=0;i<n;i++)
    {
        k=ch[0];
        gets(ch);
        if(k!=ch[0]) count++;
    }
    printf("%d",count);
    return 0;
}
