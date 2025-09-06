#include <stdio.h>

void hollowPyramid ( int n );

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}
void hollowPyramid( int n )
{
    for (int i=1; i<n; i++)
    {
        for (int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        if (i==1) printf("%d",i);
        else printf("%d ",i);
        for (int j=2; j<=i-1; j++)
        {
            printf("  ");
        }
        if (i>1) printf("%d",i);
        printf("\n");
    }
    for (int k=1;k<=2*n-1;k++)
    {
        printf("%d",n);
    }
}