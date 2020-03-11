#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],ch1[100];
    int l,i,k;
    gets(ch);
    gets(ch1);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z') ch[i]=ch[i]+32;
        if(ch1[i]>='A'&&ch1[i]<='Z') ch1[i]=ch1[i]+32;
    }
    for(i=0;i<l;i++)
    {
        if(ch[i]!=ch1[i]) break;
    }
    k=ch[i]-ch1[i];
    if(k>0) printf("1");
    else if(k<0) printf("-1");
    else printf("0");
    return 0;
}
