#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    gets(a);
    int i,l,count=0;
    l=strlen(a);
    for(i=0;i<l;i++) if(a[i]=='h'){
        count++;
        break;
    }
    for(i;i<l;i++) if(a[i]=='e'){
        count++;
        break;
    }
    for(i;i<l;i++) if(a[i]=='l'){
        count++;
        i++;
        break;
    }
    for(i;i<l;i++) if(a[i]=='l'){
        count++;
        break;
    }
    for(i;i<l;i++) if(a[i]=='o'){
        count++;
        break;
    }
    if(count==5) printf("YES");
    else printf("NO");
    return 0;
}
