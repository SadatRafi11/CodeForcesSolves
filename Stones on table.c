#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k=0;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    for(i=0;i<n;i++)
        if(a[i]==a[i+1]) k++;

    printf("%d",k);
    return 0;
}
