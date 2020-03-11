#include<stdio.h>
#include<string.h>
int main()
{
    char x,i,j,a[101],l,count=0,temp;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        for(j=0;j<l-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    x=l-count;
    if(x%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}
