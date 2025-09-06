#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
    int sum,temp,a,b,k=0;
    sum=0;
    temp=number;
    while(temp>0)
    {
        k++;
        temp=temp/10;
    }
    temp=number;
    while (temp>0)
    {
        b=1;
        a=temp%10;
        temp=temp/10;
        for (int j=1;j<=k;j++)
        {
            b*=a;
        }
        sum+=b;
    }
    if (sum==number) return 1;
    else return 0;
}
void PrintN( int m, int n )
{
    for (int i=m+1;i<n;i++)
    {
        if (narcissistic(i)) printf("%d\n",i);
    }
}