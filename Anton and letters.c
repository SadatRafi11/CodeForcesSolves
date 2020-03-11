#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,count=0,flag=0;
    char a[10000];
    gets(a);
    l=strlen(a);
    if(l==2) printf("0");
    else
    {
        for(i=1;i<l-1;i=i+3)
        {
            flag=0;
            for(j=i+3;j<l-1;j=j+3)
            {
                if(a[i]==a[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0) count++;
        }
        printf("%d",count);
    }
    return 0;
}
