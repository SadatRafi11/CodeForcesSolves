#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d", &n);
    while(i)
    {
        if(i%2)
            printf("I hate");
        else
            printf("I love");
        if(i==n)
            printf(" it");
        else
            printf(" that ");
        if(i==n)
            break;
        i++;
    }
    return 0;
}
