#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,count1=0,count2=0;
    char a[100001];
    scanf("%d",&n);
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='D') count1++;
        else if(a[i]=='A') count2++;
    }
    if(count1>count2) printf("Danik");
    else if(count1<count2) printf("Anton");
    else if(count1==count2) printf("Friendship");

    return 0;
}
