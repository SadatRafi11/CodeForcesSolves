#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,k=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(k>=6) break;
		if(a[i]==a[i+1]) k++;
        else if(a[i]!=a[i+1]) k=0;
    }
    if(k>=6) printf("YES");
    else printf("NO");
    return 0;
}
