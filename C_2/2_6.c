#include<stdio.h>
double fact(int n);
int main(void)
{
    int n;
    double sum;
    sum = 0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+fact(i);
    }
    printf("%.0lf",sum);
    return 0;
}
double fact(int n)
{
    double result;
    result = 1.0;
    for(int i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}