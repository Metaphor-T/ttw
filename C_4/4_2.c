#include<stdio.h>
#include<math.h>
double fact(int n);
int main(void)
{
    double x,sum,item;
    int i=1;
    scanf("%lf",&x);
    sum=1.0;
    while (1)
    {
        item=pow(x,i)/fact(i);
        sum=sum+item;
        i++;
        if (fabs(item)<0.00001) break;
    }
    printf("%.4lf",sum);
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