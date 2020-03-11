#include<stdio.h>
#include<string.h>
int main()
{
    char x,i,j,s[101],l,count=0;
    gets(s);
    l=strlen(s);

    for(i=0;i<l;i++)
    {
        for(j=0;j<l&&j!=i;j++)
        {
            if(s[i]==s[j]){
                count++;
            }
            if(
        }
    }

    x=l-count;

    if(x%2==0) printf("CHAT WITH HER!");
    else if(x%2!=0) printf("IGNORE HIM!");
    printf("%d",x);

    return 0;

}
