#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    char a[n][m+1];
    for(i=0; i<n; i++)
    {
        if(!(i%2))
        {
            for(j=0; j<m; j++)
                printf("#");
        }
        else if(i==1||(((i-1)%4)==0))
        {
            for(j=0; j<m-1; j++)
            {
                printf(".");
            }
            printf("#");
        }
        else if(i==3||(((i-3)%4)==0))
        {
            printf("#");
            for(j=0; j<m-1; j++)
            {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
