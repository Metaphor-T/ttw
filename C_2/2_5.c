#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    double sum;
    sum=0.0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("sum = %.2lf",sum);
    return 0;
}