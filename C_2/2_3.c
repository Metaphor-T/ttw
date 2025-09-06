#include<stdio.h>
int main(void)
{
    int m,n;
    double sum;
    sum=0;
    scanf("%d %d",&m,&n);
    for (int i=m;i<=n;i++)
    {
        sum=sum+i*i+1.0/i;
    }
    printf("sum = %.6lf",sum);
    return 0;
}