#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,l,flag=0;
    int a[26]={0};
    scanf("%d", &n);
    char s[n+1];
    for(i=0; i<n; i++)
    {
        scanf(" %c", &s[i]);
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
        a[s[i]-'a']++;
    }
    s[n]='\0';
    if(n<26)
    {
        printf("NO");
        return 0;
    }
    for(i=0; i<26; i++)
    {
        if(a[i]==0) flag=1;
    }
    if(flag) printf("NO");
    else printf("YES");
    return 0;
}
