#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
int prime( int p )
{
    int limit,i;
    if (p<=1)
    {
        return 0;
    }
    else if (p==2)
    {
        return 1;
    }
    else
    {
        limit=sqrt(p)+1;
        for(i=2;i<=limit;i++)
        {
            if(p%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int PrimeSum( int m, int n )
{
    int primesum=0,i;
    for (i=m; i<=n; i++)
    {
        if(prime(i))
        {
            primesum+=i;
        }
    }
    return primesum;
}