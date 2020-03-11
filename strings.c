#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k;
    char a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=0;
        scanf("%s",a);
        k=strlen(a);
        if(k<=10) printf("%s\n",a);
        else printf("%c%d%c\n",a[0],k-2,a[k-1]);
    }
    return 0;
}
