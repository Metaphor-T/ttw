#include<stdio.h>
int main(void)
{
    int n,i,sign;
    double sum;
    scanf("%d",&n);
    sum=0;
    sign=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+sign*1.0/(3*i-2);
        sign=-sign;
    }
    printf("sum = %.3f\n",sum);
    return 0;
}