#include<stdio.h>
int main(void)
{
    double n,cost;
    scanf("%lf",&n);
    if (n<0)
    {
        printf("Invalid Value!");
    }
    else
    {
        if (n<=50)
        {
            cost=n*0.53;
        }
        else
        {
            cost=50*0.53+(n-50)*0.58;
        }
        printf("cost = %.2lf",cost);
    }
    return 0;
}