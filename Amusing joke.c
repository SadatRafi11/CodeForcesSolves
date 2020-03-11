#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,l2,l3,a[26]={0},b[26]={0},flag=0;
    char s1[101],s2[101],s3[101];
    scanf("%s %s %s", s1, s2, s3);
    l=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    if(l3!=(l+l2)) printf("NO");
    else
    {
        for(i=0; i<l; i++) a[s1[i]-'A']++;
        for(i=0; i<l2; i++) a[s2[i]-'A']++;
        for(i=0; i<l3; i++) b[s3[i]-'A']++;
        for(i=0; i<26; i++)
        {
            if(a[i]!=b[i]) flag=1;
        }
        if(flag) printf("NO");
        else printf("YES");
    }
    return 0;
}
