#include<stdio.h>
#include<string.h>
int main()
{
    char p[101];
    gets(p);
    int i,l,count=0;
    l=strlen(p);
    if(p[0]>='!'&&p[0]<='~')
    {
        for(i=0;i<l;i++)
        {
            if(p[i]=='H'||p[i]=='Q'||p[i]=='9') count++;
        }
        if(count==0) printf("NO");
        else printf("YES");
    }
    else printf("NO");
    return 0;
}
