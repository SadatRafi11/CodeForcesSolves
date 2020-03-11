#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    gets(a);
    int i,l,count=0,flag=0;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        flag=0;
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            if(i) flag++;
            i=i+2;
            count++;
        }
        else{
            printf("%c",a[i]);
            count=0;
        }
        if(flag==1&&count==1){
            printf(" ");
        }
    }
    return 0;
}
