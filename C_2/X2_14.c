#include<stdio.h>
int main(void)
{
    int n,i;
    double sum;
    sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+1.0/(2*i-1);
    }
    printf("sum = %.6f\n",sum);
    return 0;
}