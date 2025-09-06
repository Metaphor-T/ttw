#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));

    return 0;
}
int fn( int a, int n )
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        int temp=1;
        for(int j=0;j<i;j++)
        {
            temp*=10;
        }
        result += temp*a;
    }
    return result;
}
int SumA( int a, int n )
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=fn(a,i);
    }
    return sum;
}