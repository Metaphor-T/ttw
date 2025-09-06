#include<stdio.h>
double fact(int n);
int main(void)
{
    int i,n;
    double sum;
    sum=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+1.0/fact(i);
    }
    printf("%.8lf",sum);
    return 0;
}
double fact(int n)
{
    double sum=1;
    for (int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}