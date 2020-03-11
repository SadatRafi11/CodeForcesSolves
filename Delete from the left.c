#include<stdio.h>
#include<string.h>
int main()
{
    char a[200001],b[200001];
    scanf("%s %s", a,b);
    int len1,len2,i,j,count=0;
    len1=strlen(a);
    len2=strlen(b);
    for(i=len1-1,j=len2-1; i>=0&&j>=0; i--,j--)
    {
        if(a[i]!=b[j])
            break;
        count++;
    }
    printf("%d", len1-count+len2-count);
    return 0;
}
