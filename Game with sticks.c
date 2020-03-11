#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d",&n,&m);
    if(n<m)
        k=n;
    else if(m<n)
        k=m;
    else if(n==m)
        k=n;

    if(k%2)
        printf("Akshat");
    else if(!(k%2))
        printf("Malvika");
    return 0;
}
