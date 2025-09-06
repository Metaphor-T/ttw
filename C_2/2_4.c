#include<stdio.h>
int main(void)
{
    int n,sign;
    double sum=0.0;
    scanf("%d",&n);
    sign=1;
    for (double i=1.0;i<=n;i++)
    {
        sum=sum+sign*i/(2*i-1.0);
        sign=sign*-1;
    }
    printf("%.3lf",sum);
    return 0;
}