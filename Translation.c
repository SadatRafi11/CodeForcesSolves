#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    int i,j,len1,len2,count=0;
    gets(s1);
    len1=strlen(s1);
    gets(s2);
    len2=strlen(s2);
    if(len1!=len2) printf("NO");
    else{
        for(i=0,j=len2-1;i<len1;i++,j--){
            if(s1[i]==s2[j]) count++;
        }
        if(count!=len1) printf("NO");
        else if(count==len1) printf("YES");
    }
    return 0;
}
