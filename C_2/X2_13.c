#include<stdio.h>
int main(void)
{
    int n,i;
    double sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("sum = %.6f\n",sum);
    return 0;
}