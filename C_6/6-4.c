#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n )
{
    int a = 0, b = 1;
    for ( int i = 2; i <= n; i++ )
    {
        int temp=b;
        b=a+b;
        a=temp;
    }
    return b;
}
void PrintFN( int m, int n )
{
    int i=0,f=0,count=0;
    while (f<=n)
    {
        i++;
        f=fib(i);
        if (f>=m && f<=n)
        {
            if (count==0)
            {
                printf("%d",f);
                count++;
            }
            else
            {
                printf(" %d",f);
                count++;
            }
        }
    }
    if (count==0) printf("No Fibonacci number");
}