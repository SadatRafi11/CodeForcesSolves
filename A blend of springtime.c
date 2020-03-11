#include<stdio.h>
#include<string.h>
int main ()
{
    char str[101];
    int l, i, flag=0;
    scanf("%s", str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if((str[i]=='A'&&str[i+1]=='B'&&str[i+2]=='C')||(str[i]=='A'&&str[i+1]=='C'&&str[i+2]=='B')||(str[i]=='B'&&str[i+1]=='A'&&str[i+2]=='C')||(str[i]=='B'&&str[i+1]=='C'&&str[i+2]=='A')||(str[i]=='C'&&str[i+1]=='A'&&str[i+2]=='B')||(str[i]=='C'&&str[i+1]=='B'&&str[i+2]=='A'))
        {
            flag++;
            break;
        }
    }
    if(!flag)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
