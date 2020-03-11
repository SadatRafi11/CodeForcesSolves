#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char a[101];
    scanf("%s",a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'||a[i]=='Y'||a[i]=='y') continue;
        else if(a[i]>='A'&&a[i]<='Z') a[i]=(a[i]-'A')+'a';
        printf(".%c",a[i]);
    }
    return 0;
}
